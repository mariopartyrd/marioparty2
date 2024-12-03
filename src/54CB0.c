#include "common.h"

extern u16 D_800E18D0_E24D0; //total current board spaces
extern u8 D_800CC570_CD170[];
extern s16 D_800E1B66_E2766;
extern s16 D_800E1B88_E2788; //total blue spaces hidden blocks cannot spawn on
extern s16 D_800E1B68_E2768[];
extern s16 D_800E1968_E2568[];
SpaceData* GetSpaceData(s16);
s32 func_8005A358_5AF58(f32 arg0);

INCLUDE_ASM(const s32, "54CB0", func_800540B0_54CB0);

INCLUDE_ASM(const s32, "54CB0", func_800541C0_54DC0);

INCLUDE_ASM(const s32, "54CB0", func_80054228_54E28);

INCLUDE_ASM(const s32, "54CB0", func_80054268_54E68);

INCLUDE_ASM(const s32, "54CB0", func_8005429C_54E9C);

INCLUDE_ASM(const s32, "54CB0", func_800542B8_54EB8);

INCLUDE_ASM(const s32, "54CB0", func_800542E8_54EE8);

INCLUDE_ASM(const s32, "54CB0", func_800542FC_54EFC);

INCLUDE_ASM(const s32, "54CB0", func_8005484C_5544C);

INCLUDE_ASM(const s32, "54CB0", func_8005485C_5545C);

INCLUDE_ASM(const s32, "54CB0", func_80054AE8_556E8);

INCLUDE_ASM(const s32, "54CB0", GetSpaceData);

INCLUDE_ASM(const s32, "54CB0", func_80054BB0_557B0);

INCLUDE_ASM(const s32, "54CB0", func_80054BDC_557DC);

INCLUDE_ASM(const s32, "54CB0", func_80054BF8_557F8);

INCLUDE_ASM(const s32, "54CB0", func_80054C78_55878);

INCLUDE_ASM(const s32, "54CB0", func_80054D3C_5593C);

INCLUDE_ASM(const s32, "54CB0", func_80054DEC_559EC);

INCLUDE_ASM(const s32, "54CB0", func_80054F1C_55B1C);

s16 func_80055008_55C08(u16 arg0, u8 arg1) {
    u8 var_s1;
    SpaceData* space;
    s32 i, j;
    var_s1 = 0;

    for (i = 0; i < D_800E18D0_E24D0; i++) {
        space = GetSpaceData(i);
        if (D_800CC570_CD170[space->space_type & 0xF] & arg0) {
            var_s1++;
        }
    }

    var_s1 -= D_800E1B88_E2788;
    if (arg1 < 5) {
        var_s1 -= D_800E1B66_E2766;
    }

    var_s1 = func_8005A358_5AF58(var_s1);

    for (i = 0;; i = (++i < D_800E18D0_E24D0) ? i : 0) {
        space = GetSpaceData(i);
        for (j = 0; j < D_800E1B88_E2788; j++) {
            if (D_800E1B68_E2768[j] == i) {
                break;
            }
        }

        if (j == D_800E1B88_E2788) {
            if (arg1 < 5) {
                for (j = 0; j < D_800E1B66_E2766; j++) {
                    if (D_800E1968_E2568[j] == i) {
                        break;
                    }
                }

                if (j == D_800E1B66_E2766) {
                    if (D_800CC570_CD170[space->space_type & 0xF] & arg0) {
                        if (var_s1 == 0) {
                            break;
                        }
                        var_s1--;
                    }
                }
            } else {
                if (D_800CC570_CD170[space->space_type & 0xF] & arg0) {
                    if (var_s1 == 0) {
                        break;
                    }
                    var_s1--;
                }
            }
        }
    }
    return i;
}


INCLUDE_ASM(const s32, "54CB0", func_8005521C_55E1C);

INCLUDE_ASM(const s32, "54CB0", func_8005524C_55E4C);

INCLUDE_ASM(const s32, "54CB0", func_800552E8_55EE8);

INCLUDE_ASM(const s32, "54CB0", func_800553A8_55FA8);

INCLUDE_ASM(const s32, "54CB0", func_800553EC_55FEC);

INCLUDE_ASM(const s32, "54CB0", func_800554A8_560A8);

INCLUDE_ASM(const s32, "54CB0", func_800554EC_560EC);

INCLUDE_ASM(const s32, "54CB0", func_800555A8_561A8);

INCLUDE_ASM(const s32, "54CB0", func_800555EC_561EC);

INCLUDE_ASM(const s32, "54CB0", func_8005568C_5628C);

INCLUDE_ASM(const s32, "54CB0", func_800556F4_562F4);

INCLUDE_ASM(const s32, "54CB0", func_800558DC_564DC);

INCLUDE_ASM(const s32, "54CB0", func_800558E8_564E8);

INCLUDE_ASM(const s32, "54CB0", func_800558F4_564F4);

s16 func_80055900_56500(u8 arg0) {
    return func_80055008_55C08(2, arg0);
}

INCLUDE_ASM(const s32, "54CB0", func_80055928_56528);

INCLUDE_ASM(const s32, "54CB0", func_80055980_56580);
