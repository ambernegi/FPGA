# PF\_IOD\_GENERIC\_TX Hold Violations Repair

Libero SoC v2025.1 adds support to automatically repair hold violations for source-sync<br /> TX interfaces during Place and Route with Repair Minimum Delay Violations enabled. In<br /> some low hold violation situations, the repair min-delay violations process checks<br /> whether tap delay is OFF, in which case the repair process starts from tap delay 0<br /> instead of expiring without taking any action.

**Parent topic:**[PolarFire, PolarFire SoC, RT PolarFire, and RT PolarFire SoC](GUID-C2FC30EF-8572-4D99-89A2-E30EB18E171D.md)

