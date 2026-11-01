
/* ==== FUN_0043e780 @ 0043e780 ==== 
 * signature: undefined __cdecl FUN_0043e780(undefined4 param_1)
 * body: 0043e780-0043ea7b
 */

void __cdecl FUN_0043e780(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  if (2 < DAT_006fb924) {
    draw_2d_item(param_1,0x39,0,0,0,0);
    FUN_00448470(3);
    iVar1 = FUN_00458b90(0x21);
    pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(10);
    FUN_00440b60(param_1,0x26,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,pbVar2);
    pcVar5 = s__02d__02d__d_0059bf34;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(0xb);
    FUN_00440b60(param_1,0x27,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,(byte *)pcVar5);
    iVar1 = FUN_00458b90(0x34);
    pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(10);
    FUN_00440b60(param_1,0x3a,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,pbVar2);
    if (DAT_006fb8f0 == 0xfffffff) {
      pcVar5 = s_________0059bf44;
      iVar7 = 0;
      iVar6 = 0;
      iVar4 = 0;
      iVar1 = FUN_0043cda0(DAT_006c4098);
      iVar3 = FUN_0043cd70(0xb);
      FUN_00440b60(param_1,0x3b,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                   iVar6,iVar7,(byte *)pcVar5);
    }
    else {
      pcVar5 = s__02d__02d__d_0059bf4c;
      iVar7 = 0;
      iVar6 = 0;
      iVar4 = 0;
      iVar1 = FUN_0043cda0(DAT_006c4098);
      iVar3 = FUN_0043cd70(0xb);
      FUN_00440b60(param_1,0x3b,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                   iVar6,iVar7,(byte *)pcVar5);
    }
    iVar1 = FUN_00458b90(0x26);
    pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(10);
    FUN_00440b60(param_1,0x3c,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,pbVar2);
    pcVar5 = s__d__d_0059bf5c;
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar1 = FUN_0043cda0(DAT_006c4098);
    iVar3 = FUN_0043cd70(0xb);
    FUN_00440b60(param_1,0x3d,(int)(s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94),iVar4,
                 iVar6,iVar7,(byte *)pcVar5);
  }
  return;
}


