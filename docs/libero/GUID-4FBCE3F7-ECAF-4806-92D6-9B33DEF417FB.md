# Special Cases

**Parent topic:**[Main SPPS Flow](GUID-466BE726-BA36-4B47-B413-30BD08FB949B.md)

## Test Execution of the HSM Job on Operation Side

As a part of HSM job preparation, the OE might want to test-execute jobs on his side. This test<br /> execution can be done using FlashPro Express connected to the same U-HSM that was used<br /> for job creation.

The U-HSM has the complete functionality of the M-HSM. This feature is called the M-HSM function<br /> of the U-HSM. Configuring the M-HSM function of the U-HSM is<br /> explained in the [User HSM Installation and Setup User Guide](https://coredocs.s3.amazonaws.com/Libero/2025_1/Tool/user_hsm_ug.pdf). All other aspects related to HSM job execution by<br /> FlashPro Express using the M-HSM function is similar to job<br /> execution in a real Production environment.

## Using Internal \(Automatic\) Job Request-Reply for HSM Job Test Execution

If the OE uses the same physical U-HSM to create the HSM job and test-execute it, it is possible<br /> to eliminate the user-initiated Job Request-Reply flow steps<br /> \(see [Adding HSM Data to the Job through HSM Tasks](GUID-BFB233D2-653B-4FD5-B65F-F6B4EBB72812.md#)\). In this case, an HSM Task is created in a special<br /> “INTERNAL” mode \(explained in the [Job Manager User Guide](https://coredocs.s3.amazonaws.com/Libero/2025_1/Tool/spps_job_mgr_ug.pdf)\). This mode tells the Job Manager to automatically execute<br /> Job Request-Reply protocol for the user, without involving<br /> regular request processing steps on the FlashPro Express side<br /> \(see [Figure   1](GUID-466BE726-BA36-4B47-B413-30BD08FB949B.md#FIG_CVD_DHQ_SNB)\).

