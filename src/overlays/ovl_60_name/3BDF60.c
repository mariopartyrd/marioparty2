#include "common.h"

void func_80102A14_3BE174_name_60(void);
void func_80102AF0_3BE250_name_60(void);
void func_801085A0_3C3D00_name_60(s32);
extern s16 D_801148F2_3D0052_name_60;
extern s16 D_801148F4_3D0054_name_60;
extern s16 D_80114AC2_3D0222_name_60;

void func_80105B94_3C12F4_name_60(void);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80102800_3BDF60_name_60);

void func_80102830_3BDF90_name_60(void) {
    s32 temp_s0;
    s32 i;

    func_80102A14_3BE174_name_60();
    if ((GwSystem.unk_25 == 1)) {
        func_801085A0_3C3D00_name_60(0);
        return;
    }

    switch (D_801148F2_3D0052_name_60) {
    case 6:
    case 7:
        func_801085A0_3C3D00_name_60(0);
        return;
    }

    PlayMusic(0x16);
    omSetStatBit(omAddObj(0x7FDA, 0U, 0U, -1, &func_80079E60_7AA60), 0xA0);
    func_80018E30_19A30(1);
    temp_s0 = func_80018E78_19A78();
    ScissorSet(temp_s0, 0.0f, 0.0f, 320.0f, 240.0f);
    ViewportSet(temp_s0, 640.0f, 480.0f, 511.0f, 640.0f, 480.0f, 511.0f);
    func_800202DC_20EDC(0, 10.0f, 500.0f, 5000.0f);
    D_800FA610_FB210 = 2500.0f;
    D_800FD474_FE074.x = 0;
    D_800FD474_FE074.y = 0;
    D_800FD474_FE074.z = 0;
    D_8010274C_10334C.x = 0;
    D_8010274C_10334C.y = 0;
    D_8010274C_10334C.z = 0;
    func_80102AF0_3BE250_name_60();
    omAddPrcObj(&func_80105B94_3C12F4_name_60, 0x1001U, 0x800, 0);
    
    for (i = 0; i < 4; i++) {
        if (gPlayers[i].group == 0) {
            break;
        }
    }

    D_801148F4_3D0054_name_60 = D_80114AC2_3D0222_name_60 = i;
    InitFadeIn(0, 0x10);
}

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80102A14_3BE174_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80102AF0_3BE250_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010352C_3BEC8C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80103608_3BED68_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80103778_3BEED8_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010382C_3BEF8C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801038D4_3BF034_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80103994_3BF0F4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80103B78_3BF2D8_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80103C84_3BF3E4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801040D0_3BF830_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801041C4_3BF924_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80104280_3BF9E0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010433C_3BFA9C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80104490_3BFBF0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010456C_3BFCCC_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80104650_3BFDB0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801046A4_3BFE04_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801048F0_3C0050_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801049F4_3C0154_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80104D08_3C0468_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80104DA8_3C0508_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80104E98_3C05F8_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80104F18_3C0678_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80105008_3C0768_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801050DC_3C083C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80105110_3C0870_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80105258_3C09B8_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801053F0_3C0B50_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801054EC_3C0C4C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801056A8_3C0E08_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010578C_3C0EEC_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80105860_3C0FC0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80105A14_3C1174_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80105A54_3C11B4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80105AB8_3C1218_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80105B94_3C12F4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801072C8_3C2A28_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80107C84_3C33E4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80107F74_3C36D4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80107FE0_3C3740_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80108170_3C38D0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80108458_3C3BB8_name_60);

extern s16 D_801148F0_3D0050_name_60;
extern s16 D_801148F2_3D0052_name_60;
extern s16 D_8011497A_3D00DA_name_60;
extern s32 D_8011497C_3D00DC_name_60;
extern s32 D_80114980_3D00E0_name_60;
extern s32 D_80114984_3D00E4_name_60;

void func_801085A0_3C3D00_name_60(s32 arg0) {
    s16 minigameOverlayID;

    func_8008CE5C_8DA5C();
    func_800727F0_733F0();
    func_80067EF8_68AF8(-1);
    
    if (arg0 != 0) {
        func_80017800_18400(D_80114984_3D00E4_name_60);
        func_80017800_18400(D_8011497C_3D00DC_name_60);
        func_80017800_18400(D_80114980_3D00E0_name_60);
        omOvlKill();
    }
    
    if (D_8011497A_3D00DA_name_60 != 0) {
        omOvlCallEx(D_800CAD90[D_801148F0_3D0050_name_60].unk_00, 0, 0x14);
        minigameOverlayID = func_8003F6F0_402F0(GwSystem.chosenMinigameIndex);
        omOvlHisChg(1, minigameOverlayID, 0, 0x14);
        return;
    } 
    
    _ClearFlag(0x15);
    if ((_CheckFlag(0x13) != 0) || !(_CheckFlag(0xC) == 0)) {
        omOvlGotoEx(D_800CAD90[D_801148F0_3D0050_name_60].unk_00, 0, 0x14);
        return;
    }
    
    switch (D_801148F2_3D0052_name_60) {
        case 6:
        case 5:
        case 4:
            omOvlGotoEx(D_800CAD90[D_801148F0_3D0050_name_60].unk_00, 0, 0x14);
            return;
        case 7:
            GwSystem.current_board_index = (u16) D_801148F0_3D0050_name_60 - 0x3A;
            D_800F8D18[2] = 1;
            D_800F8D18[1] = 0xE;
            omOvlGotoEx(D_800CAD90[D_801148F0_3D0050_name_60].unk_00, 0, 0x12);
            return;
            
        case 3:
            omOvlCallEx(D_800CAD90[D_801148F0_3D0050_name_60].unk_00, 0, 0x14);
            omOvlHisChg(1, 0x6F, 0, 0x14);
            return;
    }
    omOvlCallEx(D_800CAD90[D_801148F0_3D0050_name_60].unk_00, 0, 0x14);
    omOvlHisChg(1, 0x70, 0, 0x14);
}




INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010879C_3C3EFC_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010881C_3C3F7C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80108AEC_3C424C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80108B80_3C42E0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80108C24_3C4384_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80108C8C_3C43EC_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80108D50_3C44B0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80108DCC_3C452C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80108E50_3C45B0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801092B0_3C4A10_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010938C_3C4AEC_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801093D4_3C4B34_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80109424_3C4B84_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010946C_3C4BCC_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801094B4_3C4C14_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801094F4_3C4C54_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801098FC_3C505C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80109988_3C50E8_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80109A04_3C5164_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80109A80_3C51E0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80109FA0_3C5700_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010A000_3C5760_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010A038_3C5798_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010A0C4_3C5824_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010A1A0_3C5900_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010A2B0_3C5A10_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010A2EC_3C5A4C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010A45C_3C5BBC_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010A4F0_3C5C50_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010A580_3C5CE0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010A60C_3C5D6C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010A834_3C5F94_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010AB44_3C62A4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010AD2C_3C648C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010AEF4_3C6654_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010B048_3C67A8_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010B488_3C6BE8_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010B4E0_3C6C40_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010B884_3C6FE4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010BAF4_3C7254_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010BBFC_3C735C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010BE6C_3C75CC_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010BFA8_3C7708_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010C284_3C79E4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010C3A8_3C7B08_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010C634_3C7D94_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010C7F4_3C7F54_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010C904_3C8064_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010CB10_3C8270_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010CCB4_3C8414_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010CE78_3C85D8_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010D070_3C87D0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010D3D0_3C8B30_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010D6C0_3C8E20_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010D74C_3C8EAC_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010D994_3C90F4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010DC98_3C93F8_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010DF64_3C96C4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010E11C_3C987C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010E454_3C9BB4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010E6A0_3C9E00_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010EC90_3CA3F0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010EDD4_3CA534_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010F01C_3CA77C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010F480_3CABE0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010F63C_3CAD9C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010F6C8_3CAE28_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010FA50_3CB1B0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010FCC8_3CB428_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_8010FDA8_3CB508_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801100BC_3CB81C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801102F4_3CBA54_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801105D4_3CBD34_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80110700_3CBE60_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80110858_3CBFB8_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80110A84_3CC1E4_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80110B7C_3CC2DC_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80110DA8_3CC508_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80110F7C_3CC6DC_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80111228_3CC988_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80111430_3CCB90_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801116F0_3CCE50_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_801118C8_3CD028_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80111A90_3CD1F0_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80111BCC_3CD32C_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80112100_3CD860_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80112158_3CD8B8_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80112610_3CDD70_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80112818_3CDF78_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80112B8C_3CE2EC_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80112BA8_3CE308_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80112BC4_3CE324_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80112BE0_3CE340_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80112C10_3CE370_name_60);

INCLUDE_ASM(const s32, "overlays/ovl_60_name/3BDF60", func_80113264_3CE9C4_name_60);
