#include "common.h"

typedef struct Unk {
    s16 unk_00;
    s16 unk_02;
} Unk;

typedef struct BoardStatus {
    /* 0x00 */ s8 unk_00;
    /* 0x01 */ s8 unk1;
    /* 0x02 */ u8 unk2[2];
    /* 0x04 */ s8 unk4[2];
    /* 0x06 */ u8 unk_06;
    /* 0x07 */ char pad7[1];
    /* 0x08 */ s16 unk_08;
    /* 0x0A */ char padA[2];
    /* 0x0C */ s16 unk_0C;
    /* 0x0E */ char padE[2];
    /* 0x10 */ f32 xPos;
    /* 0x14 */ f32 yPos;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ f32 unk_2C;
    /* 0x30 */ s32 unk30;                           /* inferred */
    /* 0x34 */ char pad34[2];
    /* 0x36 */ s16 unk_36;
    /* 0x38 */ u8 unk_38[12];
    /* 0x44 */ s16 unk_44[2];
} BoardStatus;

void SprAttrReset(s16, s16, s32);                        /* extern */
void SprAttrSet(s16, s16, s32);                          /* extern */
void SprPosSet(s16, s32, s16, s16);                      /* extern */
void SprScaleSet(s16, s32, f32, f32);                    /* extern */
void func_8005E7B0_5F3B0(s32);                         /* extern */
void func_8005F210_5FE10(s32);
void func_8005F2D8_5FED8(s32);
void func_8005F454_60054(s32);
void func_8005F604_60204(s32);
void func_8005F6C0_602C0(s32);
void func_8005F784_60384(s32);
void func_8005F86C_6046C(s32);
void func_80060034_60C34(s32, s32);
void func_800600F8_60CF8(s32, s16, s16);
extern s32 D_800CC990_CD590;
extern s32 D_800CC994_CD594;
extern s16 D_800E1D3E_E293E;
extern f32 D_800E1D44_E2944;
extern s16 D_800FA604_FB204;
extern Vec2f D_800FC990_FD590[];
extern UnkItemSprite2 D_800FC9EC_FD5EC[];
extern Vec2f D_800FD854_FE454[];
extern s8 D_800FDC9C_FE89C;
extern BoardStatus D_80101510_102110[];
extern Unk D_800CC99C_CD59C[];
extern s32 D_800E1D48_E2948[];

s32 func_80059FD0_5ABD0(s32);
void func_8008221C_82E1C(s16, s16, f32);
void func_8008225C_82E5C(s16, s16, s32);
void func_800822A8_82EA8(s16, s16, u16, s32);

typedef struct UnkCoinThing {
    u8 unk_00[3];
    char unk_03[5];
    s16 unk_08[2];
} UnkCoinThing;

void func_8005E7B0_5F3B0(s32 arg0) {
    UnkCoinThing coinDigits;
    BoardStatus* temp_s2;
    s32 var_v1;
    s32 i;
    
    temp_s2 = &D_80101510_102110[arg0];
    coinDigits.unk_00[0] = gPlayers[arg0].coins / 100;
    coinDigits.unk_00[1] = gPlayers[arg0].coins / 10 % 10;
    coinDigits.unk_00[2] = gPlayers[arg0].coins % 10;

    if (coinDigits.unk_00[0] == 0) {
        if (coinDigits.unk_00[1] == 0) {
            var_v1 = 1;
        } else {
            var_v1 = 2 | (-(coinDigits.unk_00[0] != 0) & 3);
        }
    } else {
        var_v1 = 2 | (-(coinDigits.unk_00[0] != 0) & 3);
    }
    
    if (var_v1 == 1) {
        SprAttrSet(temp_s2->unk_08, 6, 0x8000);
        coinDigits.unk_00[1] = coinDigits.unk_00[2];
    } else {
        SprAttrReset(temp_s2->unk_08, 6, 0x8000);
    }

    if (coinDigits.unk_00[0] == 0) {
        coinDigits.unk_00[0] = 10;
    }
    for (i = 0; i < 3; i++) {
        func_800822A8_82EA8(temp_s2->unk_08, i + 4, coinDigits.unk_00[i], 0);
        func_8008225C_82E5C(temp_s2->unk_08, i + 4, 1);
    }

    if (gPlayers[arg0].stars > 99) {
        func_800822A8_82EA8(temp_s2->unk_08, 7, 9, 0);
        func_800822A8_82EA8(temp_s2->unk_08, 8, 9, 0);
    } else {
        if (gPlayers[arg0].stars > 9) {
            func_800822A8_82EA8(temp_s2->unk_08, 7, (gPlayers[arg0].stars / 10), 0);
        } else {
            func_800822A8_82EA8(temp_s2->unk_08, 7, 10, 0);
        }
        func_800822A8_82EA8(temp_s2->unk_08, 8, gPlayers[arg0].stars % 10, 0);
    }
    func_8008225C_82E5C(temp_s2->unk_08, 7, 1);
    func_8008225C_82E5C(temp_s2->unk_08, 8, 1);

    coinDigits.unk_08[0] = gPlayers[arg0].coins;
    coinDigits.unk_08[1] = gPlayers[arg0].stars;
    for (i = 0; i < 2; i++) {
        if ((i != 0 && temp_s2->unk_44[i] != coinDigits.unk_08[i]) || (i == 0 && D_800E1D48_E2948[arg0] != 0)) {
            if (temp_s2->unk2[i] == 0) {
                func_8008221C_82E1C(temp_s2->unk_08, i + 2, 1.0f);
                temp_s2->unk2[i] = 0xF;
            }
        }

        if (temp_s2->unk2[i] != 0) {
            temp_s2->unk2[i]--;
            if (temp_s2->unk2[i] == 0) {
                if (i != 0 || D_800E1D48_E2948[arg0] == 0) {
                    func_800822A8_82EA8(temp_s2->unk_08, i + 2, 0U, 0);
                    func_8008221C_82E1C(temp_s2->unk_08, i + 2, 0);
                    func_8008225C_82E5C(temp_s2->unk_08, i + 2, 1);                       
                }
            }
        }
        temp_s2->unk_44[i] = coinDigits.unk_08[i];
    }
    if (temp_s2->unk1 != -1) {
        func_800822A8_82EA8(temp_s2->unk_08, 0xA, temp_s2->unk1, 0);
    } else {
        s32 temp = func_80059FD0_5ABD0(arg0);
        func_800822A8_82EA8(temp_s2->unk_08, 0xA, temp, 0);
    }
    func_8008225C_82E5C(temp_s2->unk_08, 0xA, 1);
    if (func_80068328_68F28(0xD) != 0) {
        SprAttrSet(temp_s2->unk_08, 7, 0x8000);
        SprAttrSet(temp_s2->unk_08, 8, 0x8000);
        SprAttrSet(temp_s2->unk_08, 3, 0x8000);
    }
}

void func_8005ECB8_5F8B8(void) {
    BoardStatus* sprite;
    s32 i, j;

    for (i = 0; i < 4; i++) {
        sprite = &D_80101510_102110[i];
        for (j = 0; j < 12; j++) {
            SprAttrSet(sprite->unk_08, j, 0x8000);
        }
    }
}

void func_8005ED40_5F940(void) {
    s32 i, j;
    BoardStatus* sprite;

    while (1) {
        if (D_800FDC9C_FE89C == 0) {
            for (i = 0; i < 4; i++) {
                if (D_800CC990_CD590 != -1) {
                    if ((D_800CC994_CD594 != -1) && (i != D_800CC990_CD590) && (i != D_800CC994_CD594)) {
                        continue;
                    }
                }
                
                sprite = &D_80101510_102110[i];
                if (sprite->unk_00 == 0) {
                    if (sprite->unk_06 & 1) {
                        for (j = 0; j < 12; j++) {
                            SprAttrSet(sprite->unk_08, j, 0x8000);
                        }
                        continue;
                    } else {
                        for (j = 0; j < 12; j++) {
                            SprAttrReset(sprite->unk_08, j, 0x8000);
                        }
                        if ((gPlayers[i].flags & 1) && !(sprite->unk_06 & 1)) {
                            SprAttrReset(sprite->unk_08, 9, 0x8000);
                        } else {
                            SprAttrSet(sprite->unk_08, 9, 0x8000);
                        }

                        if ((gPlayers[i].item != -1) && !(sprite->unk_06 & 1)) {
                            SprAttrReset(sprite->unk_08, 0xB, 0x8000);
                        } else {
                            SprAttrSet(sprite->unk_08, 0xB, 0x8000);
                        }
                        func_8005E7B0_5F3B0(i);
                    }
                } else {
                    if (sprite->unk_06 & 1) {
                        for (j = 0; j < 3; j++) {
                            SprAttrSet(sprite->unk_08, j, 0x8000);
                        }
                        SprAttrSet(sprite->unk_08, 9, 0x8000);
                        continue;
                    } else {
                        for (j = 0; j < 2; j++) {
                            SprAttrReset(sprite->unk_08, j, 0x8000);
                        }
                        if (sprite->unk_36 != -1) {
                            SprAttrReset(sprite->unk_08, j, 0x8000);
                        }
                        if ((gPlayers[i].flags) & 1 && !(sprite->unk_06 & 1)) {
                            SprAttrReset(sprite->unk_08, 9, 0x8000);
                        } else {
                            SprAttrSet(sprite->unk_08, 9, 0x8000);
                        }
                    }
                }
                if (sprite->unk_0C > 0) {
                    sprite->unk_0C--;
                    sprite->xPos += sprite->unk_20;
                    sprite->yPos += sprite->unk_24;
                    sprite->unk_20 += sprite->unk_28;
                    sprite->unk_24 += sprite->unk_2C;
                } else if (sprite->unk_0C == -1) {
                    sprite->unk_0C = -2;
                } else if (sprite->unk_0C != -2) {
                    sprite->xPos = sprite->unk_18;
                    sprite->yPos = sprite->unk_1C;
                    sprite->unk_0C = -1;
                }
                SprPosSet(sprite->unk_08, 0, ((s32) (sprite->xPos + 0.5f) + 56), ((s32) (sprite->yPos + 0.5f) + 19));     
            }
            if (D_800E1D3E_E293E != -1) {
                D_800E1D44_E2944 += 0.1f;
                if (D_800E1D44_E2944 > 1.0f) {
                    D_800E1D44_E2944 = 1.0f;
                }
                SprScaleSet(D_800E1D3E_E293E, 0, D_800E1D44_E2944, D_800E1D44_E2944);
                if (D_800FA604_FB204 > 0) {
                    D_800FA604_FB204--;
                    D_800FC9EC_FD5EC[0].unk_00 += D_800FD854_FE454[0].unk_00;
                    D_800FC9EC_FD5EC[0].unk_04 += D_800FD854_FE454[0].unk_04;
                    D_800FD854_FE454[0].unk_00 += D_800FC990_FD590[0].unk_00;
                    D_800FD854_FE454[0].unk_04 += D_800FC990_FD590[0].unk_04;
                    SprPosSet(D_800E1D3E_E293E, 0, D_800FC9EC_FD5EC[0].unk_00, D_800FC9EC_FD5EC[0].unk_04);
                }
            }
        }
        HuPrcVSleep();
    }
}

INCLUDE_ASM(const s32, "5F3B0", func_8005F210_5FE10);

INCLUDE_ASM(const s32, "5F3B0", func_8005F2D8_5FED8);

INCLUDE_ASM(const s32, "5F3B0", func_8005F454_60054);

INCLUDE_ASM(const s32, "5F3B0", func_8005F604_60204);

INCLUDE_ASM(const s32, "5F3B0", func_8005F6C0_602C0);

INCLUDE_ASM(const s32, "5F3B0", func_8005F784_60384);

INCLUDE_ASM(const s32, "5F3B0", func_8005F86C_6046C);

INCLUDE_ASM(const s32, "5F3B0", func_8005F954_60554);

INCLUDE_ASM(const s32, "5F3B0", func_8005FA50_60650);

INCLUDE_ASM(const s32, "5F3B0", func_8005FAB4_606B4);

INCLUDE_ASM(const s32, "5F3B0", func_8005FC50_60850);

void func_8005FCE8_608E8(s32 arg0) {
    BoardStatus* sprite;
    s32 i;

    sprite = &D_80101510_102110[arg0];
    for (i = 0; i < 2; i++) {
        sprite->unk2[i] = 0;
    }

    sprite->unk_44[0] = gPlayers[arg0].coins;
    sprite->unk_44[1] = gPlayers[arg0].stars;
    sprite->unk_06 = 0;
    sprite->unk1 = -1;
    sprite->unk_00 = 0;
    func_8005F604_60204(arg0);
    func_80060034_60C34(arg0, 0);
    func_800600F8_60CF8(arg0, D_800CC99C_CD59C[arg0].unk_00, D_800CC99C_CD59C[arg0].unk_02);
    func_8005F210_5FE10(arg0);
    func_8005F2D8_5FED8(arg0);
    func_8005F454_60054(arg0);
    func_8005F6C0_602C0(arg0);
    func_8005F784_60384(arg0);
    func_8005F86C_6046C(arg0);
    func_8005E7B0_5F3B0(arg0);
    D_800E1D48_E2948[arg0] = 0;
    sprite->unk30 = 0;
}

INCLUDE_ASM(const s32, "5F3B0", func_8005FE10_60A10);

INCLUDE_ASM(const s32, "5F3B0", func_8005FEDC_60ADC);

INCLUDE_ASM(const s32, "5F3B0", func_8005FF9C_60B9C);

INCLUDE_ASM(const s32, "5F3B0", func_80060034_60C34);

INCLUDE_ASM(const s32, "5F3B0", func_800600C0_60CC0);

INCLUDE_ASM(const s32, "5F3B0", func_800600DC_60CDC);

INCLUDE_ASM(const s32, "5F3B0", func_800600F8_60CF8);

INCLUDE_ASM(const s32, "5F3B0", func_800601A0_60DA0);

INCLUDE_ASM(const s32, "5F3B0", func_800601DC_60DDC);

INCLUDE_ASM(const s32, "5F3B0", func_80060210_60E10);

INCLUDE_ASM(const s32, "5F3B0", func_800609D8_615D8);

INCLUDE_ASM(const s32, "5F3B0", func_80060A1C_6161C);

INCLUDE_ASM(const s32, "5F3B0", func_80060B04_61704);

INCLUDE_ASM(const s32, "5F3B0", func_80060C4C_6184C);

INCLUDE_ASM(const s32, "5F3B0", func_80060D94_61994);

INCLUDE_ASM(const s32, "5F3B0", func_80060DF8_619F8);

INCLUDE_ASM(const s32, "5F3B0", func_80060F90_61B90);

INCLUDE_ASM(const s32, "5F3B0", func_80061078_61C78);

INCLUDE_ASM(const s32, "5F3B0", func_8006110C_61D0C);

INCLUDE_ASM(const s32, "5F3B0", func_8006135C_61F5C);

INCLUDE_ASM(const s32, "5F3B0", func_800614B4_620B4);

INCLUDE_ASM(const s32, "5F3B0", func_800614D0_620D0);

INCLUDE_ASM(const s32, "5F3B0", func_800614E8_620E8);

INCLUDE_ASM(const s32, "5F3B0", func_80061504_62104);

INCLUDE_ASM(const s32, "5F3B0", func_80061518_62118);

INCLUDE_ASM(const s32, "5F3B0", func_80061584_62184);

INCLUDE_ASM(const s32, "5F3B0", func_800615F0_621F0);

INCLUDE_ASM(const s32, "5F3B0", func_800615FC_621FC);

INCLUDE_ASM(const s32, "5F3B0", func_800616C4_622C4);

INCLUDE_ASM(const s32, "5F3B0", func_80061720_62320);

INCLUDE_ASM(const s32, "5F3B0", func_80061734_62334);

INCLUDE_ASM(const s32, "5F3B0", func_80061750_62350);

INCLUDE_ASM(const s32, "5F3B0", func_8006176C_6236C);

INCLUDE_ASM(const s32, "5F3B0", func_800618F8_624F8);

INCLUDE_ASM(const s32, "5F3B0", func_80061A68_62668);

INCLUDE_ASM(const s32, "5F3B0", func_80061BD8_627D8);

INCLUDE_ASM(const s32, "5F3B0", func_80061DC4_629C4);

INCLUDE_ASM(const s32, "5F3B0", func_80062008_62C08);

INCLUDE_ASM(const s32, "5F3B0", func_80062268_62E68);

INCLUDE_ASM(const s32, "5F3B0", func_80062294_62E94);

INCLUDE_ASM(const s32, "5F3B0", func_800622E4_62EE4);

INCLUDE_ASM(const s32, "5F3B0", func_80062340_62F40);

INCLUDE_ASM(const s32, "5F3B0", func_8006239C_62F9C);

INCLUDE_ASM(const s32, "5F3B0", func_800623C8_62FC8);

INCLUDE_ASM(const s32, "5F3B0", func_80062588_63188);

INCLUDE_ASM(const s32, "5F3B0", func_80062660_63260);

INCLUDE_ASM(const s32, "5F3B0", func_80062824_63424);

INCLUDE_ASM(const s32, "5F3B0", func_8006286C_6346C);

INCLUDE_ASM(const s32, "5F3B0", func_80062888_63488);

INCLUDE_ASM(const s32, "5F3B0", func_800628C0_634C0);

INCLUDE_ASM(const s32, "5F3B0", func_8006296C_6356C);

INCLUDE_ASM(const s32, "5F3B0", func_800629AC_635AC);

INCLUDE_ASM(const s32, "5F3B0", func_800629F0_635F0);

INCLUDE_ASM(const s32, "5F3B0", func_80062A28_63628);
