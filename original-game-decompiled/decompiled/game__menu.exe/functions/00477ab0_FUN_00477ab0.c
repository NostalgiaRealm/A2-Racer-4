
/* ==== FUN_00477ab0 @ 00477ab0 ==== 
 * signature: undefined __register FUN_00477ab0(int * param_1, uint * param_2, int param_3, int param_4, int param_5)
 * body: 00477ab0-00477c29
 */

void FUN_00477ab0(int *param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined4 uStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  undefined4 local_18;
  undefined1 local_14;
  int local_10;
  int local_c;
  uint *local_8;
  
  local_10 = 0;
  pcStack_28 = (code *)0x477ace;
  local_c = param_3;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_2c = thunk_FUN_004036bc;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar5 = 0;
  pcStack_28 = (code *)&stack0xfffffffc;
  uVar1 = FUN_004317bc((int)param_1);
  iVar4 = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < iVar4) {
    do {
      piVar2 = (int *)FUN_00431780((int)param_1,iVar4);
      uVar1 = FUN_00403114(piVar2,(int)&PTR_TControl_vmt_000_00476b74);
      if (((char)uVar1 != '\0') && (bVar6 = SCARRY4(iVar5,1), iVar5 = iVar5 + 1, bVar6)) {
        thunk_FUN_00402808(uVar1);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  if (0x11 < iVar5) {
    local_18 = 0x12;
    local_14 = 0;
    FUN_00409254((byte *)"Het maximaal aantal links: %d is bereikt",&local_18,0,&local_10);
    FUN_00403c40(local_10);
  }
  piVar2 = TDaviCustomLinkLabel_vmt_02c((int *)&PTR_TControl_vmt_000_00476b74,'\x01',param_1);
  (**(code **)(*piVar2 + 0x60))(piVar2,param_1);
  TControl_set_Top(piVar2,param_1[0xb9]);
  TControl_set_Left(piVar2,6);
  (**(code **)(*piVar2 + 0x8c))(piVar2,0);
  TLabel_set_WordWrap(piVar2,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  TGroupBox_set_Caption((int)piVar2,local_8);
  uVar1 = TForm_get_ClientWidth(param_1);
  iVar4 = uVar1 - 0xc;
  if (SBORROW4(uVar1,0xc)) {
    thunk_FUN_00402808(uVar1);
    iVar4 = extraout_EDX_00;
  }
  TControl_set_Width(piVar2,iVar4);
  (**(code **)(*piVar2 + 0x8c))(piVar2,1);
  piVar2[3] = local_c;
  TFont_set_Color((int *)piVar2[0x16],0x1f0674,extraout_ECX_00);
  piVar2[0x42] = param_4;
  piVar2[0x43] = param_5;
  uVar1 = piVar2[0xd] + piVar2[0xf];
  if (SCARRY4(piVar2[0xd],piVar2[0xf])) {
    uVar1 = thunk_FUN_00402808(uVar1);
  }
  uVar3 = uVar1 + 3;
  if (SCARRY4(uVar1,3)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  param_1[0xb9] = uVar3;
  *in_FS_OFFSET = uStack_30;
  pcStack_28 = FUN_00477c31;
  pcStack_2c = (code *)0x477c21;
  FUN_00403c5c(&local_10);
  pcStack_2c = (code *)0x477c29;
  FUN_00403c5c((int *)&local_8);
  return;
}


