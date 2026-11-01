
/* ==== TDaviSpeedButton.vmt_084 @ 00475590 ==== 
 * signature: undefined TDaviSpeedButton.vmt_084(void)
 * body: 00475590-00475816
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviSpeedButton_vmt_084(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined3 uVar4;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  uint *puVar7;
  undefined4 uStack_58;
  code *pcStack_54;
  code *pcStack_50;
  undefined *puStack_48;
  tagRECT tStack_44;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  RECT RStack_20;
  uint auStack_10 [2];
  int *piStack_8;
  
  pcStack_50 = (code *)&stack0xfffffffc;
  puStack_48 = (undefined *)0x0;
  pcStack_54 = thunk_FUN_004036bc;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  iVar1 = param_1[0x4b];
  uStack_34 = *(undefined4 *)(iVar1 + 8);
  uStack_30 = *(undefined4 *)(iVar1 + 0x10);
  uStack_2c = *(undefined4 *)(iVar1 + 0xc);
  uStack_28 = *(undefined4 *)(iVar1 + 0x14);
  uStack_24 = *(undefined4 *)(iVar1 + 0x18);
  piStack_8 = param_1;
  cVar2 = (**(code **)(*param_1 + 0x4c))();
  if (cVar2 == '\0') {
    *(undefined1 *)((int)piStack_8 + 0x161) = 1;
    *(undefined1 *)((int)piStack_8 + 0x132) = 0;
  }
  else if (*(char *)((int)piStack_8 + 0x161) == '\x01') {
    if ((*(char *)((int)piStack_8 + 0x131) == '\0') || (piStack_8[0x4e] == 0)) {
      *(undefined1 *)((int)piStack_8 + 0x161) = 0;
    }
    else {
      *(undefined1 *)((int)piStack_8 + 0x161) = 3;
    }
  }
  TCanvas_set_Font(piStack_8[0x48]);
  FUN_0040f7e8(0,0,piStack_8[0xe],&RStack_20.left,piStack_8[0xf]);
  uVar4 = (undefined3)((uint)piStack_8 >> 8);
  if (*(char *)((int)piStack_8 + 0x133) == '\0') {
    if ((byte)(*(char *)((int)piStack_8 + 0x161) - 2U) < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT31(uVar4,4);
    }
    FUN_00465adc((int *)piStack_8[0x48],&RStack_20.left,(int)&uStack_34,uVar3);
    uVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
  }
  else {
    if (((byte)(*(char *)((int)piStack_8 + 0x161) - 2U) < 2) ||
       (((*(char *)((int)piStack_8 + 0x145) != '\0' && (*(char *)((int)piStack_8 + 0x161) != '\x01')
         ) || ((*(byte *)(piStack_8 + 8) & 0x10) != 0)))) {
      if ((byte)(*(char *)((int)piStack_8 + 0x161) - 2U) < 2) {
        uVar3 = CONCAT31(uVar4,6);
      }
      else {
        uVar3 = CONCAT31(uVar4,5);
      }
      FUN_00465adc((int *)piStack_8[0x48],&RStack_20.left,(int)&uStack_34,uVar3);
    }
    else if ((char)piStack_8[0x53] == '\0') {
      TBrush_set_Color(*(int **)(piStack_8[0x48] + 0x14),*(undefined4 *)(piStack_8[0x4b] + 8));
      FUN_0041907c((int *)piStack_8[0x48],&RStack_20);
    }
    InflateRect(&RStack_20,-1,-1);
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX_00;
  }
  if ((byte)(*(char *)((int)piStack_8 + 0x161) - 2U) < 2) {
    if ((*(char *)((int)piStack_8 + 0x161) == '\x03') &&
       ((*(char *)((int)piStack_8 + 0x133) == '\0' || (*(char *)((int)piStack_8 + 0x145) == '\0'))))
    {
      if (DAT_004ab45c == 0) {
        FUN_0047548c(piStack_8,uVar6,uVar5,(int)&stack0xfffffffc);
      }
      FUN_004189b8(*(int **)(piStack_8[0x48] + 0x14),DAT_004ab45c);
      FUN_0041907c((int *)piStack_8[0x48],&RStack_20);
    }
    auStack_10[0] = 1;
    auStack_10[1] = 1;
  }
  else {
    auStack_10[0] = 0;
    auStack_10[1] = 0;
  }
  puVar7 = auStack_10;
  TGroupBox_get_Caption((int)piStack_8,(int *)&puStack_48);
  FUN_004752a4(piStack_8[0x4d],(int *)piStack_8[0x48],&RStack_20.left,&tStack_44,
               (char)piStack_8[0x58],'\x01',*(byte *)((int)piStack_8 + 0x161),piStack_8[0x52],
               piStack_8[0x50],*(byte *)((int)piStack_8 + 0x13d),puStack_48,puVar7);
  *in_FS_OFFSET = uStack_58;
  pcStack_50 = FUN_0047581e;
  pcStack_54 = (code *)0x475816;
  FUN_00403c5c((int *)&puStack_48);
  return;
}


