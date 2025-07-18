#include <hls/ap_int.hpp>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define N 4

using namespace hls;
struct Account {
    uint64_t checking;
    uint64_t savings;

    void add(const Account &acc) {
        checking += acc.checking;
        savings += acc.savings;
    }
};

struct Client {
    ap_uint<6> id;
    Account acc;
};

struct UpdateResult {
    ap_uint<1> updated;
    Account acc;
};

int find(Client clients[N], ap_uint<6> id) {
#pragma HLS function noinline
    for (int i = 0; i < N; i++)
        if (clients[i].id == id)
            return i;
    return -1;
}

UpdateResult update(Client clients[N], ap_uint<6> id, Account acc) {
#pragma HLS function top
#pragma HLS memory partition argument(clients) type(struct_fields)
    //...
    UpdateResult ret{};
    int idx = find(clients, id);
    if (idx != -1) {
        clients[idx].acc.add(acc);
        ret.acc = clients[idx].acc;
        ret.updated = 1;
    }
    return ret;
}

Client clients[N];

int main() {
    for (int i = 0; i < N; i++) {
        clients[i].id = i;
        clients[i].acc.checking = 0;
        clients[i].acc.savings = 0;
    }
    Account test_acc{100, 100};
    int passes = 0;
    UpdateResult test_ret{};
    for (int j = 0; j < N; j++) {
        test_ret = update(clients, j, test_acc);
        if (test_ret.updated == 1) {
            if (clients[j].acc.checking == 100 && clients[j].acc.savings == 100)
                passes++;
        }
    }

    return (passes != N);
}
