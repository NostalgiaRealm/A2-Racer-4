
/* ==== TGDIHint.vmt_02c @ 00466284 ==== 
 * signature: undefined __register TGDIHint.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 00466284-00466372
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGDIHint_vmt_02c(int *param_1,char param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_148;
  undefined4 uStackY_138;
  code *pcStackY_134;
  undefined1 *puStackY_130;
  undefined4 in_stack_fffffed4;
  undefined4 in_stack_fffffed8;
  byte local_110 [256];
  int local_10;
  int local_c;
  undefined1 local_5;
  
  local_c = 0;
  local_10 = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStackY_130 = (undefined1 *)0x4662a4;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  pcStackY_134 = thunk_FUN_004036bc;
  uStackY_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_138;
  puStackY_130 = &stack0xfffffffc;
  uVar1 = FUN_00403114(param_3,(int)&PTR_TWinControl_vmt_000_00465e10);
  if ((char)uVar1 == '\0') {
    FUN_00402ee4(*param_1,local_110);
    FUN_00403e80(&local_10,local_110);
    pcStackY_148 = "Object has wrong owner, it must be created by a TGDIHintWindow class.";
    FUN_00403f9c(&local_c,4);
    FUN_00403c40(local_c);
  }
  TGraphicControl_vmt_02c(param_1,'\0',param_3);
  iVar2 = FUN_0040312c(param_3,(int)&PTR_TWinControl_vmt_000_00465e10);
  param_1[0x4c] = iVar2;
  iVar2 = *(int *)(iVar2 + 0x204);
  param_1[0x4d] = iVar2;
  (**(code **)(*param_1 + 0x60))(param_1,iVar2);
  FUN_00403178(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX_00);
  *in_FS_OFFSET = pcStackY_148;
  FUN_00403c80(&local_10,2);
  return;
}


