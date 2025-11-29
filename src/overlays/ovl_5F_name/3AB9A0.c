#include "common.h"
#include "game/data.h"

void func_80102A14_3ABBB4_name_5F(void);
void func_80102AF0_3ABC90_name_5F(void);
void func_801085A0_3B1740_name_5F(s32);
extern s16 D_80114DC4_3BDF64_name_5F;
extern s16 D_80114F70_3BE110_name_5F;
void func_80105B94_3AED34_name_5F(void);
void func_80067EF8_68AF8(s32);
void func_800727F0_733F0(void);
extern s16 D_80114DC0_3BDF60_name_5F;
extern s16 D_80114DC2_3BDF62_name_5F;
extern s16 D_80114E4A_3BDFEA_name_5F;
extern void* D_80114E4C_3BDFEC_name_5F;
extern void* D_80114E50_3BDFF0_name_5F;
extern void* D_80114E54_3BDFF4_name_5F;

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80102800_3AB9A0_name_5F);

void func_80102830_3AB9D0_name_5F(void) {
    s32 temp_s0;
    s32 i;

    func_80102A14_3ABBB4_name_5F();
    if (GwSystem.unk_25 == 1) {
        func_801085A0_3B1740_name_5F(0);
        return;
    }
    switch (D_80114DC2_3BDF62_name_5F) {
    case 6:
    case 7:
        func_801085A0_3B1740_name_5F(0);
        return;
    }
    
    PlayMusic(0x16);
    omSetStatBit(omAddObj(0x7FDA, 0U, 0U, -1, func_80079E60_7AA60), 0xA0U);
    func_80018E30_19A30(1);
    temp_s0 = func_80018E78_19A78();
    ScissorSet(temp_s0, 0.0f, 0.0f, 320.0f, 240.0f);
    ViewportSet(temp_s0, 640.0f, 480.0f, 511.0f, 640.0f, 480.0f, 511.0f);
    func_800202DC_20EDC(0, 10.0f, 500.0f, 5000.0f);
    D_800FA610_FB210 = 2500.0f;
    D_800FD474_FE074.x = 0.0f;
    D_800FD474_FE074.y = 0.0f;
    D_800FD474_FE074.z = 0.0f;
    D_8010274C_10334C.x = 0.0f;
    D_8010274C_10334C.y = 0.0f;
    D_8010274C_10334C.z = 0.0f;
    func_80102AF0_3ABC90_name_5F();
    omAddPrcObj(&func_80105B94_3AED34_name_5F, 0x1001U, 0x800, 0);
    
    for (i = 0; i < 4; i++) {
        if (gPlayers[i].group == 0) {
            break;
        }
    }
    
    D_80114DC4_3BDF64_name_5F = D_80114F70_3BE110_name_5F = i;
    InitFadeIn(0, 0x10);
}

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80102A14_3ABBB4_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80102AF0_3ABC90_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010352C_3AC6CC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80103608_3AC7A8_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80103778_3AC918_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010382C_3AC9CC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801038D4_3ACA74_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80103994_3ACB34_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80103B78_3ACD18_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80103C84_3ACE24_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801040D0_3AD270_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801041C4_3AD364_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80104280_3AD420_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010433C_3AD4DC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80104490_3AD630_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010456C_3AD70C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80104650_3AD7F0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801046A4_3AD844_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801048F0_3ADA90_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801049F4_3ADB94_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80104D08_3ADEA8_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80104DA8_3ADF48_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80104E98_3AE038_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80104F18_3AE0B8_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80105008_3AE1A8_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801050DC_3AE27C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80105110_3AE2B0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80105258_3AE3F8_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801053F0_3AE590_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801054EC_3AE68C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801056A8_3AE848_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010578C_3AE92C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80105860_3AEA00_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80105A14_3AEBB4_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80105A54_3AEBF4_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80105AB8_3AEC58_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80105B94_3AED34_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801072C8_3B0468_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80107C84_3B0E24_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80107F74_3B1114_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80107FE0_3B1180_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80108170_3B1310_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80108458_3B15F8_name_5F);

void func_801085A0_3B1740_name_5F(s32 arg0) {
    s16 minigameOverlayID;

    func_8008CE5C_8DA5C();
    func_800727F0_733F0();
    func_80067EF8_68AF8(-1);
    
    if (arg0 != 0) {
        DataClose(D_80114E54_3BDFF4_name_5F);
        DataClose(D_80114E4C_3BDFEC_name_5F);
        DataClose(D_80114E50_3BDFF0_name_5F);
        omOvlKill();
    }
    
    if (D_80114E4A_3BDFEA_name_5F != 0) {
        omOvlCallEx(D_800CAD90[D_80114DC0_3BDF60_name_5F].unk_00, 0, 0x14);
        minigameOverlayID = func_8003F6F0_402F0(GwSystem.chosenMinigameIndex);
        omOvlHisChg(1, minigameOverlayID, 0, 0x14);
        return;
    } 
    
    _ClearFlag(0x15);
    if ((_CheckFlag(0x13) != 0) || !(_CheckFlag(0xC) == 0)) {
        omOvlGotoEx(D_800CAD90[D_80114DC0_3BDF60_name_5F].unk_00, 0, 0x14);
        return;
    }
    
    switch (D_80114DC2_3BDF62_name_5F) {
        case 6:
        case 5:
        case 4:
            omOvlGotoEx(D_800CAD90[D_80114DC0_3BDF60_name_5F].unk_00, 0, 0x14);
            return;
        case 7:
            GwSystem.current_board_index = (u16) D_80114DC0_3BDF60_name_5F - 0x3A;
            D_800F8D18[2] = 1;
            D_800F8D18[1] = 0xE;
            omOvlGotoEx(D_800CAD90[D_80114DC0_3BDF60_name_5F].unk_00, 0, 0x12);
            return;
            
        case 3:
            omOvlCallEx(D_800CAD90[D_80114DC0_3BDF60_name_5F].unk_00, 0, 0x14);
            omOvlHisChg(1, 0x6F, 0, 0x14);
            return;
    }
    omOvlCallEx(D_800CAD90[D_80114DC0_3BDF60_name_5F].unk_00, 0, 0x14);
    omOvlHisChg(1, 0x70, 0, 0x14);
}

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010879C_3B193C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010881C_3B19BC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80108AEC_3B1C8C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80108B80_3B1D20_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80108C24_3B1DC4_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80108C8C_3B1E2C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80108D50_3B1EF0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80108DCC_3B1F6C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80108E50_3B1FF0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801092B0_3B2450_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010938C_3B252C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801093D4_3B2574_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80109424_3B25C4_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010946C_3B260C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801094B4_3B2654_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801094F4_3B2694_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801098FC_3B2A9C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80109988_3B2B28_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80109A04_3B2BA4_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80109A80_3B2C20_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80109FA0_3B3140_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010A000_3B31A0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010A038_3B31D8_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010A0C4_3B3264_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010A1A0_3B3340_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010A2B0_3B3450_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010A2EC_3B348C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010A45C_3B35FC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010A4F0_3B3690_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010A628_3B37C8_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010A818_3B39B8_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010AAA0_3B3C40_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010AC44_3B3DE4_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010AEF8_3B4098_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010AF84_3B4124_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010B168_3B4308_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010B30C_3B44AC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010B33C_3B44DC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010B460_3B4600_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010B4F0_3B4690_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010B624_3B47C4_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010B798_3B4938_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010BA24_3B4BC4_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010BCF0_3B4E90_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010C2A8_3B5448_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010C40C_3B55AC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010C61C_3B57BC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010CD08_3B5EA8_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010CFB8_3B6158_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010D098_3B6238_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010D640_3B67E0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010D798_3B6938_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010DC40_3B6DE0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010DF10_3B70B0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010E65C_3B77FC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010E844_3B79E4_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010E920_3B7AC0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010EEB4_3B8054_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010F0C8_3B8268_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010F1A4_3B8344_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010F488_3B8628_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010F578_3B8718_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010F668_3B8808_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010F8BC_3B8A5C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8010FDD8_3B8F78_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80110050_3B91F0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80110480_3B9620_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80110784_3B9924_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80110F2C_3BA0CC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8011126C_3BA40C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8011137C_3BA51C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801116B0_3BA850_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801119A8_3BAB48_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80111A00_3BABA0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80112080_3BB220_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8011238C_3BB52C_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801123E4_3BB584_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80112A1C_3BBBBC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80112B20_3BBCC0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80112C64_3BBE04_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80112E68_3BC008_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80112FE8_3BC188_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80113004_3BC1A4_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80113020_3BC1C0_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_8011303C_3BC1DC_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_80113070_3BC210_name_5F);

INCLUDE_ASM(const s32, "overlays/ovl_5F_name/3AB9A0", func_801136C4_3BC864_name_5F);
