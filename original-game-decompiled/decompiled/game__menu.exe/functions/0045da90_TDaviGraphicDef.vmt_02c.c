
/* ==== TDaviGraphicDef.vmt_02c @ 0045da90 ==== 
 * signature: undefined TDaviGraphicDef.vmt_02c(void)
 * body: 0045da90-0045db5d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviGraphicDef_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar3;
  undefined4 extraout_ECX_03;
  char extraout_DL;
  char cVar4;
  undefined4 extraout_EDX;
  byte bVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  TComponent_vmt_02c(param_1,'\0',param_3);
  bVar5 = 0;
  do {
    piVar1 = TDaviLinkedGraphic_vmt_014((int *)&PTR_TPersistent_vmt_000_0045ca28,'\x01',param_1);
    param_1[bVar5 + 9] = (int)piVar1;
    if (bVar5 == 5) {
      FUN_0045d4a4(param_1[0xe],extraout_EDX,extraout_ECX_00,FUN_0045de58,param_1);
      uVar3 = extraout_ECX_02;
    }
    else {
      FUN_0045d4a4((int)piVar1,extraout_EDX,extraout_ECX_00,FUN_0045dda8,param_1);
      iVar2 = param_1[bVar5 + 9];
      *(int **)(iVar2 + 0x1c) = param_1;
      *(code **)(iVar2 + 0x18) = FUN_0045ddb8;
      uVar3 = extraout_ECX_01;
    }
    bVar5 = bVar5 + 1;
  } while (bVar5 != 7);
  iVar2 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',uVar3);
  param_1[0x13] = iVar2;
  param_1[0x11] = 0x68;
  param_1[0x12] = 0x18;
  param_1[0x10] = 0;
  piVar1 = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',extraout_ECX_03);
  param_1[0x14] = (int)piVar1;
  if (cVar4 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}


