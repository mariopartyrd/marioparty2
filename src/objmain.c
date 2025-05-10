#include "common.h"

void func_80079338_79F38(s32);
void func_8007935C_79F5C(s16 arg0, s16 arg1, s16 arg2);
void func_8001A4C0_1B0C0(void);
void func_80023124_23D24(void);
void func_8002864C_2924C(void);
void func_80029708_2A308(s32);
void func_8002F1A4_2FDA4(void);
void func_80069698_6A298(void);
void omDestroyObjMan(void);

INCLUDE_ASM(const s32, "objmain", omInitObjMan);

INCLUDE_ASM(const s32, "objmain", omDestroyObjMan);

INCLUDE_ASM(const s32, "objmain", omAddObj);

INCLUDE_ASM(const s32, "objmain", omSetObjPrio);

INCLUDE_ASM(const s32, "objmain", omInsertObj);

INCLUDE_ASM(const s32, "objmain", omDelObj);

INCLUDE_ASM(const s32, "objmain", omSetStat);

INCLUDE_ASM(const s32, "objmain", omSetStatBit);

INCLUDE_ASM(const s32, "objmain", omResetStatBit);

INCLUDE_ASM(const s32, "objmain", omPrcSetStat);

INCLUDE_ASM(const s32, "objmain", omPrcSetStatBit);

INCLUDE_ASM(const s32, "objmain", omPrcResetStatBit);

INCLUDE_ASM(const s32, "objmain", omSetTra);

INCLUDE_ASM(const s32, "objmain", omSetRot);

INCLUDE_ASM(const s32, "objmain", omSetSca);

INCLUDE_ASM(const s32, "objmain", func_80076BD0_777D0);

INCLUDE_ASM(const s32, "objmain", func_80076CA0_778A0);

INCLUDE_ASM(const s32, "objmain", func_80076D10_77910);

INCLUDE_ASM(const s32, "objmain", func_80076D80_77980);

INCLUDE_ASM(const s32, "objmain", func_80076D98_77998);

INCLUDE_ASM(const s32, "objmain", func_80076DC0_779C0);

INCLUDE_ASM(const s32, "objmain", func_80076E20_77A20);

INCLUDE_ASM(const s32, "objmain", func_80076E54_77A54);

INCLUDE_ASM(const s32, "objmain", omAddPrcObj);

INCLUDE_ASM(const s32, "objmain", func_80076F14_77B14);

INCLUDE_ASM(const s32, "objmain", omDelPrcObj);

INCLUDE_ASM(const s32, "objmain", omDestroyPrcObj);

INCLUDE_ASM(const s32, "objmain", omPrcSetDestructor);

s32 omOvlCallEx(s32 overlayID, s16 event, s16 stat) {
    omOvlHisData* history;
    s32 result;

    if (omovlhisidx < ARRAY_COUNT(omovlhis)) {
        history = &omovlhis[++omovlhisidx];
        history->overlayID = overlayID;
        history->event = event;
        history->stat = stat;
        omOvlGotoEx(overlayID, event, stat);
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

s32 omOvlReturnEx(s16 level) {
    omovlhisidx -= level;
    
    if (omovlhisidx < 0) {
        omovlhisidx = 0;
        omOvlGotoEx(omovlhis[0].overlayID, omovlhis[0].event, omovlhis[0].stat);
        return 0;
    }
    omOvlGotoEx(omovlhis[omovlhisidx].overlayID, omovlhis[omovlhisidx].event, omovlhis[omovlhisidx].stat);
    return 1;
}

void omOvlGotoEx(s32 arg0, s16 arg1, u16 arg2) {
    u8 var_a0_3;
    u8 var_v1_2;
    s32 var_v0_3;

    if ((D_800FA63C_FB23C != 0x73) && (D_800FA63C_FB23C != 0)) {
        if ((D_800FA63C_FB23C != 0x5F) && (D_800FA63C_FB23C != 0x6F) && (D_800FA63C_FB23C != 0x70)) {
            D_800CD408_CE008 = D_800FA63C_FB23C;
        }
        if ((D_800FA63C_FB23C != 0x73) && (D_800FA63C_FB23C != 0)) {
            D_800CD404_CE004 = D_800FA63E_FB23E;
        }
    }

    D_800CD41C_CE01C = 1;
    D_800FA63C_FB23C = arg0;
    D_800CD414_CE014 = arg1;
    D_800CD416_CE016 = arg2;
    D_800FCE84_FDA84 = 0;

    if (arg2 & 0x40 && D_800F92B2_F9EB2 != 2) {
        func_80079338_79F38(2);
    } else if (arg2 & 0x80 && (D_800F92B2_F9EB2 != 3)) {
        func_80079338_79F38(3);
    }

    if ((arg2 & 1) && (D_800FFDF2_1009F2 != 0x1000 || (D_800F9562_FA162 != 0x2004) || (D_80102702_103302 != 0x180))) {
        func_8007935C_79F5C(0x1000, 0x2004, 0x180);
    } else if ((arg2 & 2) && (D_800FFDF2_1009F2 != 0x800 || (D_800F9562_FA162 != 0x1000) || (D_80102702_103302 != 0x180))) {
        func_8007935C_79F5C(0x800, 0x1000, 0x180);
    } else if (arg2 & 4 && (D_800FFDF2_1009F2 != 0x1000 || (D_800F9562_FA162 != 0x2004) || (D_80102702_103302 != 0x180))) {
        func_8007935C_79F5C(0x1000, 0x2004, 0x180);
    }

    if (!(arg2 & 0x2000)) {
        if (arg2 & 2) {
            var_a0_3 = D_800CD3F0_CDFF0[GwSystem.current_board_index][0];
            var_v1_2 = D_800CD3F0_CDFF0[GwSystem.current_board_index][1];
            var_v0_3 = arg2 & 0x100;
        } else if (arg2 & 4) {
            var_a0_3 = 1;
            if ((arg0 == 0x5F) || (arg0 == 0x6F)) {
                var_v1_2 = 0x14;
                var_v0_3 = arg2 & 0x100;
            } else {
                var_a0_3 = D_800CD360_CDF60[GwSystem.unk_20 - 1][0];
                var_v1_2 = D_800CD360_CDF60[GwSystem.unk_20 - 1][1];
                var_v0_3 = arg2 & 0x100;
            }
        } else {
            var_a0_3 = 1;
            var_v1_2 = 0x14;
            var_v0_3 = arg2 & 0x100;
        }

        if (var_v0_3) {
            var_a0_3 = 1;
            var_v1_2 = 0x14;
        } else if (arg2 & 0x200) {
            var_a0_3 = 2;
            var_v1_2 = 0x14;
        } else if (arg2 & 0x400) {
            var_a0_3 = 3;
            var_v1_2 = 0x14;
        } else if (arg2 & 0x800) {
            var_a0_3 = 4;
            var_v1_2 = 0x14;
        } else if (arg2 & 0x1000) {
            var_a0_3 = 5;
            var_v1_2 = 0x14;
        }

        D_800CD434_CE034 = var_v1_2;
        D_800CD528_CE128 = var_a0_3 & 0xFF;
    }

    if (
    (arg0 == 0x5A) || 
    (arg0 == 0x5B) || 
    (arg0 == 0x5C) || 
    (arg0 == 0x5D) || 
    (arg0 == 0x62) || 
    (arg0 == 0x58))
    {
        D_800CD52C_CE12C = 1;
        return;
    }
    D_800CD52C_CE12C = 0;
}

void omOvlHisChg(s16 arg0, s32 overlay, s16 event, s16 stat) {
    s32 ovlhisIndex = omovlhisidx - arg0;
    omOvlHisData* history;

    if (ovlhisIndex >= 0) {
        history = &omovlhis[ovlhisIndex];
        history->overlayID = overlay;
        history->event = event;
        history->stat = stat;
    }
}

void omOvlKill(void) {
    D_800CD412_CE012 = 4;
    D_800E2130_E2D30 = D_800F93A0_F9FA0;
    func_80069698_6A298();
    func_8002864C_2924C();
    func_8002F1A4_2FDA4();
    omDestroyObjMan();
    func_8001A4C0_1B0C0();
    func_80023124_23D24();
    func_80029708_2A308(1);
}

INCLUDE_ASM(const s32, "objmain", omMain);

INCLUDE_ASM(const s32, "objmain", func_80077EF0_78AF0);

INCLUDE_ASM(const s32, "objmain", func_80077F50_78B50);

INCLUDE_ASM(const s32, "objmain", func_80078A08_79608);

INCLUDE_ASM(const s32, "objmain", func_80078EA8_79AA8);

INCLUDE_ASM(const s32, "objmain", func_80078EC8_79AC8);

INCLUDE_ASM(const s32, "objmain", func_80078FF8_79BF8);

INCLUDE_ASM(const s32, "objmain", func_80079128_79D28);

INCLUDE_ASM(const s32, "objmain", func_80079294_79E94);

INCLUDE_ASM(const s32, "objmain", func_80079338_79F38);

void func_8007935C_79F5C(s16 arg0, s16 arg1, s16 arg2) {
    D_800FFDF2_1009F2 = arg0;
    D_800F9562_FA162 = arg1;
    D_80102702_103302 = arg2;
    D_800CD430_CE030 = 1;
    D_800FCE84_FDA84 = 4;
}
