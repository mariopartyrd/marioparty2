#include "common.h"

s16 func_80055900_56500(u8);
void func_8004CA14_4D614(s32, s32);
void func_8006135C_61F5C(s32, s32, s32);
extern s16 coinBlockSpaceIndex;
extern s16 prevCoinBlockSpaceIndexes[10];
extern u16 D_800FA654_FB254;
extern u16 D_800FC878_FD478;
extern s16 starBlockSpaceIndex;
extern s16 prevStarBlockSpaceIndexes[10];
extern s32 D_800CCC1C_CD81C[];
extern s16 D_800E1F52_E2B52;
extern omOvlHisData D_800E1F58_E2B58[];

void func_80062A70_63670(s32 arg0, s16 arg1, s16 arg2) {
    omOvlHisData* temp_v1;
    temp_v1 = &D_800E1F58_E2B58[D_800E1F52_E2B52++];
    
    switch (arg0) {
    case -1:
        arg0 = omovlhis[omovlhisidx].overlayID;
        temp_v1->overlayID = arg0;
        break;
    case -2:
        arg0 = D_800CCC1C_CD81C[D_800F93A8.unk_02];
        temp_v1->overlayID = arg0;
        break;
    default:
        temp_v1->overlayID = arg0;
    }
    
    temp_v1->event = arg1;
    temp_v1->stat = arg2;
    if (D_800E1F52_E2B52 >= 5) {
        D_800E1F52_E2B52 = 4;
    }
}

INCLUDE_ASM(const s32, "63670", func_80062B14_63714);

INCLUDE_ASM(const s32, "63670", func_80062BE0_637E0);

INCLUDE_ASM(const s32, "63670", func_80062CC0_638C0);

INCLUDE_ASM(const s32, "63670", func_80062CCC_638CC);

INCLUDE_ASM(const s32, "63670", func_80062CD8_638D8);

INCLUDE_ASM(const s32, "63670", func_80062D44_63944);

INCLUDE_ASM(const s32, "63670", func_80062D50_63950);

INCLUDE_ASM(const s32, "63670", func_80062E10_63A10);

INCLUDE_ASM(const s32, "63670", func_80063178_63D78);

INCLUDE_ASM(const s32, "63670", func_800632E4_63EE4);

INCLUDE_ASM(const s32, "63670", func_800632F0_63EF0);

INCLUDE_ASM(const s32, "63670", func_800632FC_63EFC);

INCLUDE_ASM(const s32, "63670", func_80063308_63F08);

INCLUDE_ASM(const s32, "63670", func_800636F8_642F8);

INCLUDE_ASM(const s32, "63670", func_80063704_64304);

INCLUDE_ASM(const s32, "63670", func_80063710_64310);

INCLUDE_ASM(const s32, "63670", func_80063734_64334);

INCLUDE_ASM(const s32, "63670", func_80063740_64340);

INCLUDE_ASM(const s32, "63670", func_80063844_64444);

INCLUDE_ASM(const s32, "63670", func_800638C8_644C8);

extern s32 D_800CCC10;
extern s16 D_800E1F82_E2B82;
extern s16 D_800E1F94_E2B94;
extern s16 D_800E1F96_E2B96;
extern s16 D_800E1F98_E2B98;
extern s32 D_800E1F9C_E2B9C;
extern s16 D_800E1FA0_E2BA0;
extern s16 D_800F64B0_F70B0;
extern s16 D_800F93C8_F9FC8;
extern s16 D_800FA652_FB252;
extern u16 D_801011FC_101DFC;
s16 func_8003F6F0_402F0(s16);

void func_80063950_64550(void) {
    do {
        HuPrcVSleep();
    } while (func_8008F618_90218() != 0);
    while (1) {
        HuPrcVSleep();
        if (D_801011FC_101DFC == 0) {
            if (D_800E1F94_E2B94 < 0) {
                continue;
            }
        }
        D_800CCC10 = 0;
    
        while (func_8008F618_90218() != 0) {
            HuPrcVSleep();
        }
        
        if (D_800E1F98_E2B98 != 0) {
            func_800794A8_7A0A8(0x5A);
            if (D_800F64B0_F70B0 != -1) {
                func_800114E8_120E8(D_800F64B0_F70B0, 0x5A);
                D_800F64B0_F70B0 = -1;
                func_80079464_7A064();
            }
            if (D_800FA652_FB252 != 0) {
                func_80079464_7A064();
                D_800FA652_FB252 = 0;
            }
        }
        D_800CCC10 = 0x64;
        InitFadeOut(D_800E1F96_E2B96, 0x10);
        HuPrcSleep(17);
        D_800CCC10 = 0x65;
        func_80063178_63D78();
        D_800CCC10 = 0x66;
        
        if (D_800E1F94_E2B94 & 0x20) {
            D_800E1F82_E2B82 = 1;
            if ((D_800F93A8.unk_02 == 5) && (_CheckFlag(0xB) == 0)) {
                func_80062A70_63670(0x61, 0, 0x192);
            }
            func_80062A70_63670(0x52, 0, 0x192);
            func_80062CC0_638C0();
        }
        
        if (D_800E1F94_E2B94 & 1) {
            if (func_800638C8_644C8() != 0) {
                func_80062A70_63670(0x40, 0, 0x192);
            }
            func_80063844_64444();
        }
        
        D_800CCC10 = 0x67;
        
        if (D_800E1F94_E2B94 & 2) {
            func_80062A70_63670(func_8003F6F0_402F0(D_800F93A8.unk_20), 0, 0x94);
        }
        
        D_800CCC10 = 0x68;
        
        if (D_800E1F94_E2B94 & 8) {
            func_80062A70_63670(D_800E1F9C_E2B9C, D_800E1FA0_E2BA0, 0x192);
        }
        
        D_800CCC10 = 0x69;
        _ClearFlag(0x45);
        omOvlReturnEx(1);
        omOvlKill();
        HuPrcVSleep();
    }
}

INCLUDE_ASM(const s32, "63670", func_80063BBC_647BC);

INCLUDE_ASM(const s32, "63670", func_80063C40_64840);

INCLUDE_ASM(const s32, "63670", func_80063F88_64B88);

INCLUDE_ASM(const s32, "63670", func_80064134_64D34);

INCLUDE_ASM(const s32, "63670", func_80064184_64D84);

INCLUDE_ASM(const s32, "63670", func_80064200_64E00);

INCLUDE_ASM(const s32, "63670", func_800645C8_651C8);

void func_80064C98_65898(void) {
    s32 var_a0;
    s32 var_s2;
    s32 i;

    var_s2 = -1;
    var_a0 = 0;
    for (i = 0; i < MAX_PLAYERS; i++) {
        if (var_a0 < gPlayers[i].coins_mg_bonus) {
            var_s2 = i;
            var_a0 = gPlayers[i].coins_mg_bonus;
        }
    }

    for (i = 0; i < MAX_PLAYERS; i++) {
        if (gPlayers[i].coins_mg_bonus != 0) {
            func_8004CA14_4D614(i, gPlayers[i].coins_mg_bonus);
            if (var_s2 == i) {
                func_8006135C_61F5C(i, gPlayers[i].coins_mg_bonus, 1);
            } else {
                func_8006135C_61F5C(i, gPlayers[i].coins_mg_bonus, 0);    
            }            
        }
    }
    HuPrcSleep(30);
}

void func_80064DA8_659A8(void) {
    s32 i;

    if (_CheckFlag(0xD) == 0 && _CheckFlag(0x4E) != 0) {
        while (coinBlockSpaceIndex == -1 || coinBlockSpaceIndex == starBlockSpaceIndex) {
            coinBlockSpaceIndex = func_80055900_56500(D_800FC878_FD478);
            D_800FC878_FD478 += 1;
            for (i = 0; i < ARRAY_COUNT(prevCoinBlockSpaceIndexes); i++) {
                if (coinBlockSpaceIndex == prevCoinBlockSpaceIndexes[i]) {
                    break;
                }
            }
            if (i != ARRAY_COUNT(prevCoinBlockSpaceIndexes)) {
                coinBlockSpaceIndex = -1;
            }
        }
        while (starBlockSpaceIndex == -1 || coinBlockSpaceIndex == starBlockSpaceIndex) {
            starBlockSpaceIndex = func_80055900_56500(D_800FA654_FB254);
            D_800FA654_FB254 += 1;
            for (i = 0; i < ARRAY_COUNT(prevStarBlockSpaceIndexes); i++) {
                if (starBlockSpaceIndex == prevStarBlockSpaceIndexes[i]) {
                    break;
                }
            }
            if (i != ARRAY_COUNT(prevStarBlockSpaceIndexes)) {
                starBlockSpaceIndex = -1;
            }
        }
    }
}

INCLUDE_ASM(const s32, "63670", func_80064F1C_65B1C);

INCLUDE_ASM(const s32, "63670", func_80064FF8_65BF8);

INCLUDE_ASM(const s32, "63670", func_8006508C_65C8C);

INCLUDE_ASM(const s32, "63670", func_800650BC_65CBC);

INCLUDE_ASM(const s32, "63670", func_800650F0_65CF0);

INCLUDE_ASM(const s32, "63670", func_8006692C_6752C);

INCLUDE_ASM(const s32, "63670", func_80066994_67594);

INCLUDE_ASM(const s32, "63670", func_80066C34_67834);

INCLUDE_ASM(const s32, "63670", func_80066F6C_67B6C);

INCLUDE_ASM(const s32, "63670", func_80066FD8_67BD8);

INCLUDE_ASM(const s32, "63670", func_80067004_67C04);

INCLUDE_ASM(const s32, "63670", func_80067010_67C10);

INCLUDE_ASM(const s32, "63670", func_80067040_67C40);

INCLUDE_ASM(const s32, "63670", func_8006706C_67C6C);

INCLUDE_ASM(const s32, "63670", func_8006707C_67C7C);

INCLUDE_ASM(const s32, "63670", func_800670B0_67CB0);

INCLUDE_ASM(const s32, "63670", func_800670BC_67CBC);

INCLUDE_ASM(const s32, "63670", func_80067170_67D70);

INCLUDE_ASM(const s32, "63670", func_8006727C_67E7C);

INCLUDE_ASM(const s32, "63670", func_800672BC_67EBC);

INCLUDE_ASM(const s32, "63670", func_8006735C_67F5C);
