#include "common.h"
#include "game/data.h"

// MP3s UnkBoard8
typedef struct {
    struct BoardPlayer* unk_00; //?
    struct BoardPlayer* unk_04; //?
    s16 unk_08;
    s16 unk_0A;
    s16* unk_0C;
    f32* unk_10;
    f32* unk_14;
    s16* unk_18;
    s16* unk_1C;
} BoardPlayer;

GW_PLAYER* BoardPlayerGet(s32);
s16 SprAnimRead(void*);
s32 SprAnimSet(s16, s16, s16, s32);
s32 SprPosSet(s16, s16, s16, s16);
s32 SprPrioSet(s16, s16, s32);
s32 SprScaleSet(s16, s32, f32, f32);
void SprAttrReset(s16, s16, u16);
void SprAttrSet(s16, s16, u32);
s32 _CheckFlag(s32);
s32 func_8005B518_5C118(s16, s32);
s32 func_8005C6DC_5D2DC(GW_PLAYER*, s16);
s32 func_8005C78C_5D38C(GW_PLAYER*, s32);
s32 func_8005C8A0_5D4A0(s32);
s32 func_8005C8AC_5D4AC(void*, s16);
void* func_8005C980_5D580(void);
s32 func_8005DCA0_5E8A0(s16);
s32 func_8005DEB0_5EAB0(s16, u8);
BoardPlayer *func_8005E688_5F288(s32, s32);
s32 func_8005E6E4_5F2E4(BoardPlayer*);
s32 func_8007959C_7A19C(s32);
s32 func_80082450_83050(s16, s16, s32, s32, s32);
s32 func_800824B4_830B4(s16, s32, s32, s32, s32, s32);
void func_8004430C_44F0C(void*);

extern s32 D_800CC754_CD354[6];
extern s32 D_800CC76C_CD36C[6];
extern s32 D_800CC784_CD384[8];
extern s8 D_800CC7A4_CD3A4[8];
extern s8 D_800CC7AC_CD3AC[8];
extern s16 D_800CC7B4_CD3B4[8];
extern s16 D_800CC7BC_CD3BC[8];
extern u16 D_800CC7C4_CD3C4[22][1];
extern s16 *D_800E1CF0_E28F0;
extern u16 D_800F6098_F6C98[]; // unknown size
extern u16 D_8010163C_10223C[]; // unknown size
extern GW_PLAYER gPlayers[];

INCLUDE_ASM(const s32, "58080", func_80057480_58080);

INCLUDE_ASM(const s32, "58080", func_80057534_58134);

INCLUDE_ASM(const s32, "58080", func_8005762C_5822C);

INCLUDE_ASM(const s32, "58080", func_800576F8_582F8);

INCLUDE_ASM(const s32, "58080", func_80057718_58318);

INCLUDE_ASM(const s32, "58080", func_80057724_58324);

INCLUDE_ASM(const s32, "58080", func_80057730_58330);

INCLUDE_ASM(const s32, "58080", func_8005774C_5834C);

INCLUDE_ASM(const s32, "58080", func_80057768_58368);

INCLUDE_ASM(const s32, "58080", func_80057A78_58678);

INCLUDE_ASM(const s32, "58080", func_80057A94_58694);

INCLUDE_ASM(const s32, "58080", func_80057AB0_586B0);

INCLUDE_ASM(const s32, "58080", func_80057DA4_589A4);

INCLUDE_ASM(const s32, "58080", func_80057DC0_589C0);

INCLUDE_ASM(const s32, "58080", func_80057DDC_589DC);

INCLUDE_ASM(const s32, "58080", func_8005812C_58D2C);

INCLUDE_ASM(const s32, "58080", func_800581A0_58DA0);

INCLUDE_ASM(const s32, "58080", func_800581D0_58DD0);

INCLUDE_ASM(const s32, "58080", func_80058294_58E94);

INCLUDE_ASM(const s32, "58080", func_8005845C_5905C);

INCLUDE_ASM(const s32, "58080", func_800585E8_591E8);

INCLUDE_ASM(const s32, "58080", func_80058B58_59758);

INCLUDE_ASM(const s32, "58080", func_80058D18_59918);

INCLUDE_ASM(const s32, "58080", func_80058F18_59B18);

INCLUDE_ASM(const s32, "58080", func_80059120_59D20);

INCLUDE_ASM(const s32, "58080", func_8005912C_59D2C);

INCLUDE_ASM(const s32, "58080", func_80059158_59D58);

INCLUDE_ASM(const s32, "58080", func_80059198_59D98);

INCLUDE_ASM(const s32, "58080", func_80059254_59E54);

INCLUDE_ASM(const s32, "58080", func_800592E4_59EE4);

INCLUDE_ASM(const s32, "58080", func_80059348_59F48);

INCLUDE_ASM(const s32, "58080", func_80059370_59F70);

void func_80059398_59F98(void) {
}

INCLUDE_ASM(const s32, "58080", func_800593A0_59FA0);

INCLUDE_ASM(const s32, "58080", func_800593C0_59FC0);

INCLUDE_ASM(const s32, "58080", func_80059400_5A000);

INCLUDE_ASM(const s32, "58080", func_8005946C_5A06C);

INCLUDE_ASM(const s32, "58080", func_80059520_5A120);

INCLUDE_ASM(const s32, "58080", func_800595E8_5A1E8);

INCLUDE_ASM(const s32, "58080", func_80059618_5A218);

INCLUDE_ASM(const s32, "58080", func_8005965C_5A25C);

INCLUDE_ASM(const s32, "58080", func_80059698_5A298);

INCLUDE_ASM(const s32, "58080", func_80059704_5A304);

INCLUDE_ASM(const s32, "58080", func_8005973C_5A33C);

INCLUDE_ASM(const s32, "58080", func_80059868_5A468);

INCLUDE_ASM(const s32, "58080", func_800598A4_5A4A4);

INCLUDE_ASM(const s32, "58080", func_800598D4_5A4D4);

INCLUDE_ASM(const s32, "58080", func_80059914_5A514);

INCLUDE_ASM(const s32, "58080", func_80059944_5A544);

INCLUDE_ASM(const s32, "58080", func_80059974_5A574);

INCLUDE_ASM(const s32, "58080", func_800599AC_5A5AC);

INCLUDE_ASM(const s32, "58080", func_800599F0_5A5F0);

INCLUDE_ASM(const s32, "58080", func_80059A3C_5A63C);

INCLUDE_ASM(const s32, "58080", func_80059A68_5A668);

INCLUDE_ASM(const s32, "58080", func_80059B08_5A708);

INCLUDE_ASM(const s32, "58080", func_80059B5C_5A75C);

INCLUDE_ASM(const s32, "58080", func_80059BA4_5A7A4);

INCLUDE_ASM(const s32, "58080", func_80059BCC_5A7CC);

INCLUDE_ASM(const s32, "58080", func_80059C28_5A828);

INCLUDE_ASM(const s32, "58080", func_80059C64_5A864);

INCLUDE_ASM(const s32, "58080", func_80059CC8_5A8C8);

INCLUDE_ASM(const s32, "58080", func_80059D00_5A900);

INCLUDE_ASM(const s32, "58080", func_80059DC4_5A9C4);

INCLUDE_ASM(const s32, "58080", func_80059E7C_5AA7C);

INCLUDE_ASM(const s32, "58080", func_80059FB4_5ABB4);

INCLUDE_ASM(const s32, "58080", func_80059FD0_5ABD0);

INCLUDE_ASM(const s32, "58080", func_8005A084_5AC84);

INCLUDE_ASM(const s32, "58080", func_8005A0CC_5ACCC);

INCLUDE_ASM(const s32, "58080", func_8005A1D8_5ADD8);

INCLUDE_ASM(const s32, "58080", func_8005A29C_5AE9C);

s32 func_8005A358_5AF58(f32 arg0) {
    // rand8 returns an unsigned byte
    u8 randomByte1 = rand8();
    u8 randomByte2 = rand8();
    s32 shiftedByte1 = (randomByte1 << 8);

    // Normalize the 16-bit number to the range [0, 1), then multiply by arg0
    s32 scaledRandom = ((randomByte2 | shiftedByte1) / 65536.0f)* arg0;
    
    return scaledRandom;
}

INCLUDE_ASM(const s32, "58080", func_8005A3C4_5AFC4);

INCLUDE_ASM(const s32, "58080", func_8005A474_5B074);

INCLUDE_ASM(const s32, "58080", func_8005A4A4_5B0A4);

INCLUDE_ASM(const s32, "58080", func_8005A4C8_5B0C8);

INCLUDE_ASM(const s32, "58080", func_8005A4EC_5B0EC);

void func_8005A5E0_5B1E0(void) {
}

INCLUDE_ASM(const s32, "58080", func_8005A5E8_5B1E8);

INCLUDE_ASM(const s32, "58080", func_8005A608_5B208);

INCLUDE_ASM(const s32, "58080", func_8005A624_5B224);

INCLUDE_ASM(const s32, "58080", func_8005A718_5B318);

INCLUDE_ASM(const s32, "58080", func_8005A778_5B378);

INCLUDE_ASM(const s32, "58080", func_8005A7E8_5B3E8);

INCLUDE_ASM(const s32, "58080", func_8005A950_5B550);

INCLUDE_ASM(const s32, "58080", func_8005AA48_5B648);

INCLUDE_ASM(const s32, "58080", func_8005AA98_5B698);

INCLUDE_ASM(const s32, "58080", func_8005AAC0_5B6C0);

INCLUDE_ASM(const s32, "58080", func_8005AB50_5B750);

INCLUDE_ASM(const s32, "58080", func_8005ABC0_5B7C0);

void func_8005AC64_5B864(void) {
}

INCLUDE_ASM(const s32, "58080", func_8005AC6C_5B86C);

INCLUDE_ASM(const s32, "58080", func_8005ACD0_5B8D0);

INCLUDE_ASM(const s32, "58080", func_8005AD58_5B958);

INCLUDE_ASM(const s32, "58080", func_8005AD84_5B984);

INCLUDE_ASM(const s32, "58080", func_8005ADB0_5B9B0);

INCLUDE_ASM(const s32, "58080", func_8005ADCC_5B9CC);

INCLUDE_ASM(const s32, "58080", func_8005AF48_5BB48);

INCLUDE_ASM(const s32, "58080", func_8005B248_5BE48);

INCLUDE_ASM(const s32, "58080", func_8005B264_5BE64);

INCLUDE_ASM(const s32, "58080", func_8005B338_5BF38);

INCLUDE_ASM(const s32, "58080", func_8005B424_5C024);

INCLUDE_ASM(const s32, "58080", func_8005B518_5C118);

INCLUDE_ASM(const s32, "58080", func_8005B56C_5C16C);

INCLUDE_ASM(const s32, "58080", func_8005B7A8_5C3A8);

INCLUDE_ASM(const s32, "58080", func_8005B814_5C414);

INCLUDE_ASM(const s32, "58080", func_8005B8B0_5C4B0);

INCLUDE_ASM(const s32, "58080", func_8005B9A0_5C5A0);

INCLUDE_ASM(const s32, "58080", func_8005BF2C_5CB2C);

INCLUDE_ASM(const s32, "58080", func_8005C0B8_5CCB8);

INCLUDE_ASM(const s32, "58080", func_8005C0D8_5CCD8);

INCLUDE_ASM(const s32, "58080", func_8005C24C_5CE4C);

INCLUDE_ASM(const s32, "58080", func_8005C3B0_5CFB0);

INCLUDE_ASM(const s32, "58080", func_8005C508_5D108);

INCLUDE_ASM(const s32, "58080", func_8005C670_5D270);

INCLUDE_ASM(const s32, "58080", func_8005C6DC_5D2DC);

INCLUDE_ASM(const s32, "58080", func_8005C78C_5D38C);

INCLUDE_ASM(const s32, "58080", func_8005C8A0_5D4A0);

INCLUDE_ASM(const s32, "58080", func_8005C8AC_5D4AC);

INCLUDE_ASM(const s32, "58080", func_8005C980_5D580);

s32 func_8005CAD0_5D6D0(s32 arg0) {
    u16 sp1E;
    BoardPlayer *boardPlayer1;
    BoardPlayer *boardPlayer2;
    BoardPlayer* boardPlayer3;
    BoardPlayer* boardPlayer4;
    GW_PLAYER* tempBoardPlayer;
    Process* process;
    s32 sp3C;
    s16 var_a0_2;
    s32 i;
    s32 var_v0;
    s32 var_s1;
    void** mainFSData;

    sp3C = 0;
    sp1E = 0;
    for (i = 0; i < 4; i++) {
        if (func_8005DCA0_5E8A0(i) == 0 && gPlayers[i].port == arg0) {
            sp1E = i;
            break;
        }
    }
    boardPlayer1 = func_8005E688_5F288(8, 0);
    for (i = 0; i < 4; i++) {
        if (i == 0) {
            mainFSData = DataRead(0xA01C8);
            boardPlayer1->unk_0C[0] = SprAnimRead(mainFSData);
            DataClose(mainFSData);
            mainFSData = DataRead(0xA01C9);
            boardPlayer1->unk_0C[4] = SprAnimRead(mainFSData);
            DataClose(mainFSData);
        }
        SprAnimSet(boardPlayer1->unk_0A, i, boardPlayer1->unk_0C[0], 0);
        SprPrioSet(boardPlayer1->unk_0A, i, 8);
        SprAttrSet(boardPlayer1->unk_0A, i, 0x1000U);
        SprPosSet(boardPlayer1->unk_0A, i, D_800CC7B4_CD3B4[i], D_800CC7BC_CD3BC[i]);
        func_80082450_83050(boardPlayer1->unk_0A, i, 0, 0, 0xFF);
        SprAnimSet(boardPlayer1->unk_0A, i + 4, boardPlayer1->unk_0C[4], 0);
        SprPrioSet(boardPlayer1->unk_0A, i + 4, 8);
        SprAttrSet(boardPlayer1->unk_0A, i + 4, 0x1000U);
        SprPosSet(boardPlayer1->unk_0A, i + 4, D_800CC7B4_CD3B4[i], D_800CC7BC_CD3BC[i]);
    }
    boardPlayer2 = func_8005E688_5F288(8, 0);
    for (i = 0; i < 4; i++) {
        tempBoardPlayer = BoardPlayerGet(i);
        mainFSData = DataRead(D_800CC754_CD354[tempBoardPlayer->character]);
        boardPlayer2->unk_0C[i] = SprAnimRead(mainFSData);
        SprAnimSet(boardPlayer2->unk_0A, i, boardPlayer2->unk_0C[i], 0);
        SprPrioSet(boardPlayer2->unk_0A, i, 7);
        SprAttrSet(boardPlayer2->unk_0A, i, 0x1000U);
        SprPosSet(boardPlayer2->unk_0A, i, D_800CC7B4_CD3B4[i], D_800CC7BC_CD3BC[i] - 0x17);
        DataClose(mainFSData);
        mainFSData = DataRead(D_800CC76C_CD36C[tempBoardPlayer->character]);
        boardPlayer2->unk_0C[i + 4] = SprAnimRead(mainFSData);
        SprAnimSet(boardPlayer2->unk_0A, i + 4, boardPlayer2->unk_0C[i + 4], 0);
        SprPrioSet(boardPlayer2->unk_0A, i + 4, 7);
        SprAttrSet(boardPlayer2->unk_0A, i + 4, 0x1000U);
        SprPosSet(boardPlayer2->unk_0A, i + 4, D_800CC7B4_CD3B4[i], D_800CC7BC_CD3BC[i] - 7);
        DataClose(mainFSData);
    }
    boardPlayer3 = func_8005E688_5F288(8, 0);
    for (i = 0; i < 8; i++) {
        mainFSData = DataRead(D_800CC784_CD384[i]);
        boardPlayer3->unk_0C[i] = SprAnimRead(mainFSData);
        DataClose(mainFSData);
    }
    for (i = 0; i < 4; i++) {
        if (func_8005DCA0_5E8A0(i) != 0) {
            SprAnimSet(boardPlayer3->unk_0A, i, boardPlayer3->unk_0C[D_800CC7AC_CD3AC[gPlayers[i].cpu_difficulty2 * 2]], 0);
            SprAnimSet(boardPlayer3->unk_0A, (i + 4), boardPlayer3->unk_0C[D_800CC7AC_CD3AC[(gPlayers[i].cpu_difficulty2 * 2) + 1]], 0);
            SprPosSet(boardPlayer3->unk_0A, i, D_800CC7B4_CD3B4[i], D_800CC7BC_CD3BC[i] + 8);
        } else {
            SprAnimSet(boardPlayer3->unk_0A, i, boardPlayer3->unk_0C[D_800CC7A4_CD3A4[gPlayers[i].port * 2]], 0);
            SprAnimSet(boardPlayer3->unk_0A, i + 4, boardPlayer3->unk_0C[D_800CC7A4_CD3A4[gPlayers[i].port * 2]], 0);
            SprPosSet(boardPlayer3->unk_0A, i, D_800CC7B4_CD3B4[i], D_800CC7BC_CD3BC[i] + 0x10);
            SprAttrSet(boardPlayer3->unk_0A, i + 4, 0x8000U);
        }
        SprPrioSet(boardPlayer3->unk_0A, i, 7);
        SprAttrSet(boardPlayer3->unk_0A, i, 0x01001000U);
        SprPrioSet(boardPlayer3->unk_0A, i + 4, 7);
        SprAttrSet(boardPlayer3->unk_0A, i + 4, 0x01001000U);
        SprPosSet(boardPlayer3->unk_0A, i + 4, D_800CC7B4_CD3B4[i], D_800CC7BC_CD3BC[i] + 0x18);
    }
    boardPlayer4 = func_8005E688_5F288(3, 0);
    mainFSData = DataRead(0xA001B);
    boardPlayer4->unk_0C[0] = SprAnimRead(mainFSData);
    SprAnimSet(boardPlayer4->unk_0A, 0, boardPlayer4->unk_0C[0], 0);
    SprAttrSet(boardPlayer4->unk_0A, 0, 0x1808U);
    SprPrioSet(boardPlayer4->unk_0A, 0, 8);
    SprScaleSet(boardPlayer4->unk_0A, 0, 0.5f, 0.5f);
    DataClose(mainFSData);
    mainFSData = DataRead(0xA01DF);
    boardPlayer4->unk_0C[1] = SprAnimRead(mainFSData);
    SprAnimSet(boardPlayer4->unk_0A, 1, boardPlayer4->unk_0C[1], 0);
    SprAttrSet(boardPlayer4->unk_0A, 1, 0x9808U);
    SprPrioSet(boardPlayer4->unk_0A, 1, 8);
    func_800824B4_830B4(boardPlayer4->unk_0A, 1, 0xFF, 0, 0, 0x80);
    DataClose(mainFSData);
    mainFSData = DataRead(0xA01DE);
    boardPlayer4->unk_0C[2] = SprAnimRead(mainFSData);
    SprAnimSet(boardPlayer4->unk_0A, 2, boardPlayer4->unk_0C[2], 0);
    SprAttrSet(boardPlayer4->unk_0A, 2, 0x9808U);
    SprPrioSet(boardPlayer4->unk_0A, 2, 8);
    func_800824B4_830B4(boardPlayer4->unk_0A, 2, 0xFF, 0, 0, 0x80);
    DataClose(mainFSData);
    func_8005C8AC_5D4AC(boardPlayer4, sp1E);
    func_8005C8A0_5D4A0(0);
    process = omAddPrcObj(func_8005C980_5D580, 0x1005U, 0, 0);
    process->user_data = boardPlayer4;
    do {
        _CheckFlag(0xD);
        if (sp3C != 0x51B) {
            sp3C = 0x51B;
            func_8005B518_5C118(D_800E1CF0_E28F0[4], sp3C);
        }
        HuPrcVSleep();
        var_a0_2 = -1;
        if (D_800F6098_F6C98[arg0] & 0x800) {
            var_a0_2 = 0;
        }
        if (D_800F6098_F6C98[arg0] & 0x400) {
            var_a0_2 = 1;
        }
        if (D_800F6098_F6C98[arg0] & 0x200) {
            var_a0_2 = 2;
        }
        if (D_800F6098_F6C98[arg0] & 0x100) {
            var_a0_2 = 3;
        }
        if (var_a0_2 != -1) {
            sp1E += D_800CC7C4_CD3C4[(s16)sp1E << 2][var_a0_2];
            func_8005C8AC_5D4AC(boardPlayer4, sp1E);
            func_8007959C_7A19C(1);
            continue;
        }

        // wtf? if 0-ed to keep code in "correct" place
        if (0) {
            dummy:
            func_8007959C_7A19C(2);
            func_8005DEB0_5EAB0(sp1E, var_s1);
            goto bail;
        }
        if (D_8010163C_10223C[arg0] & 0x8000) {
            func_8007959C_7A19C(2);
            tempBoardPlayer = BoardPlayerGet((s16)sp1E);
            func_8005C8A0_5D4A0(1);
            var_s1 = tempBoardPlayer->cpu_difficulty2;
            i = -1;
            if (func_8005DCA0_5E8A0(sp1E)) {
                i = 4;
            }
            while (1) {
                HuPrcVSleep();
                _CheckFlag(0xD);
                if (sp3C != 0x51C) {
                    sp3C = 0x51C;
                    func_8005B518_5C118(D_800E1CF0_E28F0[4], sp3C);
                }
                if (D_800F6098_F6C98[arg0] & 0x200) {
                    if (i != 4 || var_s1 == 0) {
                        i = func_8005C78C_5D38C(tempBoardPlayer, -1);
                        if (i == 4) {
                            var_s1 = 2;
                        }
                    } else {
                        var_s1 -= 1;
                    }
                    func_8005DEB0_5EAB0(sp1E, var_s1);
                    func_8007959C_7A19C(1);
                } else if (D_800F6098_F6C98[arg0] & 0x100) {
                    if (i != 4 || var_s1 == 2) {
                        i = func_8005C78C_5D38C(tempBoardPlayer, 1);
                        if (i == 4) {
                            var_s1 = 0;
                        } else {
                            var_s1 &= -1;
                        }
                    } else {
                        var_s1 += 1;
                    }
                    func_8005DEB0_5EAB0(sp1E, var_s1);
                    func_8007959C_7A19C(1);
                }
                if (i >= 0) {
                    func_8005C6DC_5D2DC(tempBoardPlayer, i);
                    if (func_8005DCA0_5E8A0(sp1E) != 0) {
                        SprAnimSet(boardPlayer3->unk_0A, sp1E, boardPlayer3->unk_0C[D_800CC7AC_CD3AC[gPlayers[(s16)sp1E].cpu_difficulty2 * 2]], 0);
                        SprAnimSet(boardPlayer3->unk_0A, sp1E + 4, boardPlayer3->unk_0C[D_800CC7AC_CD3AC[(gPlayers[(s16)sp1E].cpu_difficulty2) * 2 + 1]], 0);
                        SprPosSet(boardPlayer3->unk_0A, sp1E, D_800CC7B4_CD3B4[(s16)sp1E], D_800CC7BC_CD3BC[(s16)sp1E] + 8);
                        SprAttrReset(boardPlayer3->unk_0A, sp1E + 4, 0x8000U);
                    } else {
                        SprAnimSet(boardPlayer3->unk_0A, sp1E, boardPlayer3->unk_0C[D_800CC7A4_CD3A4[gPlayers[(s16)sp1E].port * 2]], 0);
                        SprPosSet(boardPlayer3->unk_0A, sp1E, D_800CC7B4_CD3B4[(s16)sp1E], D_800CC7BC_CD3BC[(s16)sp1E] + 0x10);
                        SprAttrSet(boardPlayer3->unk_0A, sp1E + 4, 0x8000U);
                    }
                }
                var_v0 = D_800F6098_F6C98[arg0];
                var_v0 &= 0x8000;
                if (var_v0) {
                    goto dummy;
                }

                var_v0 = D_800F6098_F6C98[arg0];
                var_v0 &= 0x4000;
                if (var_v0) {
                    func_8007959C_7A19C(4);
                    break;
                }
            }
            
            bail:
            func_8005C8A0_5D4A0(0);
            HuPrcVSleep();
        }
    } while (!(D_8010163C_10223C[arg0] & 0x4000));
    func_8007959C_7A19C(4);
    omDelPrcObj(process);
    func_8005E6E4_5F2E4(boardPlayer4);
    func_8005E6E4_5F2E4(boardPlayer3);
    func_8005E6E4_5F2E4(boardPlayer2);
    func_8005E6E4_5F2E4(boardPlayer1);
    return 4;
}

INCLUDE_ASM(const s32, "58080", func_8005D7D4_5E3D4);

INCLUDE_ASM(const s32, "58080", func_8005D88C_5E48C);

INCLUDE_ASM(const s32, "58080", func_8005DA20_5E620);

s16 GetCurrentPlayerIndex(void) {
    return GwSystem.current_player_index;
}

INCLUDE_ASM(const s32, "58080", BoardPlayerGet);

INCLUDE_ASM(const s32, "58080", func_8005DC84_5E884);

INCLUDE_ASM(const s32, "58080", func_8005DCA0_5E8A0);

INCLUDE_ASM(const s32, "58080", func_8005DCC8_5E8C8);

INCLUDE_ASM(const s32, "58080", BoardSpaceGet);

INCLUDE_ASM(const s32, "58080", func_8005DD68_5E968);

INCLUDE_ASM(const s32, "58080", func_8005DDEC_5E9EC);

INCLUDE_ASM(const s32, "58080", func_8005DEB0_5EAB0);

INCLUDE_ASM(const s32, "58080", func_8005DF18_5EB18);

INCLUDE_ASM(const s32, "58080", func_8005DF78_5EB78);

INCLUDE_ASM(const s32, "58080", func_8005DFE8_5EBE8);

INCLUDE_ASM(const s32, "58080", func_8005E130_5ED30);

INCLUDE_ASM(const s32, "58080", func_8005E154_5ED54);

INCLUDE_ASM(const s32, "58080", func_8005E1A0_5EDA0);

INCLUDE_ASM(const s32, "58080", func_8005E1DC_5EDDC);

INCLUDE_ASM(const s32, "58080", func_8005E228_5EE28);

void func_8005E260_5EE60(s16 playerIndex) {
    GW_PLAYER* temp_v0;

    temp_v0 = BoardPlayerGet(playerIndex);
    if (temp_v0->unk_24 != 0) {
        if (temp_v0->unk_20 != 0) {
            omDelPrcObj(temp_v0->unk_20);
        }
        func_8004430C_44F0C(temp_v0->unk_24);
        temp_v0->unk_24 = 0;
    }
}

INCLUDE_ASM(const s32, "58080", func_8005E2B8_5EEB8);

void func_8005E2F4_5EEF4(void) {
}

INCLUDE_ASM(const s32, "58080", func_8005E2FC_5EEFC);
