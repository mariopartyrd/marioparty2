#include "common.h"

void func_80055A38_56638(s16, s16);
s16 func_80055A88_56688(s16, char*, s16);
void func_800890CC_89CCC(s16, s32, s32, s32);
void func_80089308_89F08(s16, s32, s32);
void func_8008BB18_8C718(s16, s16);
void func_8008D974_8E574(s32, s16);
void func_8008DACC_8E6CC(s32, char*, s32);
void func_8008E978_8F578(s16);
extern s16 D_800CC590_CD190;
extern s16 D_800F9052_F9C52;
extern s16 gCurrentPlayerIndex;

INCLUDE_ASM(const s32, "565E0", func_800559E0_565E0);

INCLUDE_ASM(const s32, "565E0", func_80055A38_56638);

INCLUDE_ASM(const s32, "565E0", func_80055A88_56688);

INCLUDE_ASM(const s32, "565E0", func_80055BD4_567D4);

INCLUDE_ASM(const s32, "565E0", func_80055C88_56888);

INCLUDE_ASM(const s32, "565E0", func_80055E3C_56A3C);

INCLUDE_ASM(const s32, "565E0", func_80055E60_56A60);

INCLUDE_ASM(const s32, "565E0", func_80055E90_56A90);

INCLUDE_ASM(const s32, "565E0", func_80055F60_56B60);

INCLUDE_ASM(const s32, "565E0", func_8005600C_56C0C);

INCLUDE_ASM(const s32, "565E0", func_80056030_56C30);

INCLUDE_ASM(const s32, "565E0", func_80056068_56C68);

INCLUDE_ASM(const s32, "565E0", func_800560A4_56CA4);

INCLUDE_ASM(const s32, "565E0", func_80056124_56D24);

INCLUDE_ASM(const s32, "565E0", func_80056144_56D44);

INCLUDE_ASM(const s32, "565E0", func_80056168_56D68);

void func_80056188_56D88(s16 arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s16 arg7) {
    char sp10[8];
    s16 temp_v0;

    if (arg2 != 0) {
        func_8008D974_8E574(arg2, 0);
    }
    if (arg3 != 0) {
        func_8008D974_8E574(arg3, 1);
    }
    if (arg4 != 0) {
        func_8008D974_8E574(arg4, 2);
    }
    if (arg5 != 0) {
        func_8008D974_8E574(arg5, 3);
    }
    if (arg6 != 0) {
        func_8008D974_8E574(arg6, 4);
    }
    func_8008DACC_8E6CC(1, sp10, arg1);
    temp_v0 = func_80055A88_56688(arg0, sp10, arg7);
    D_800F9052_F9C52 = temp_v0;
    if (arg2 != 0) {
        func_80089308_89F08(temp_v0, arg2, 0);
    }
    if (arg3 != 0) {
        func_80089308_89F08(temp_v0, arg3, 1);
    }
    if (arg4 != 0) {
        func_80089308_89F08(temp_v0, arg4, 2);
    }
    if (arg5 != 0) {
        func_80089308_89F08(temp_v0, arg5, 3);
    }
    if (arg6 != 0) {
        func_80089308_89F08(temp_v0, arg6, 4);
    }
    if (D_800CC590_CD190 != 0) {
        func_8008BB18_8C718(temp_v0, D_800CC590_CD190);
    }
    func_800890CC_89CCC(temp_v0, arg1, -1, -1);
    
    if (arg0 == -1) {
        func_8008E978_8F578(temp_v0);
    } else {
        func_8008E978_8F578(temp_v0);
    }
    
    func_80055A38_56638(temp_v0, gCurrentPlayerIndex);
}

void func_80056368_56F68(s16 arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_80056188_56D88(arg0, arg1, arg2, arg3, arg4, arg5, arg6, -1);
}

INCLUDE_ASM(const s32, "565E0", func_800563A8_56FA8);

INCLUDE_ASM(const s32, "565E0", func_800563FC_56FFC);

INCLUDE_ASM(const s32, "565E0", func_80056458_57058);

INCLUDE_ASM(const s32, "565E0", func_800564B4_570B4);

INCLUDE_ASM(const s32, "565E0", func_80056524_57124);

INCLUDE_ASM(const s32, "565E0", func_80056530_57130);
