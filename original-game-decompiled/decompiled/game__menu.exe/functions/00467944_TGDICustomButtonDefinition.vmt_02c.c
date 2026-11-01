
/* ==== TGDICustomButtonDefinition.vmt_02c @ 00467944 ==== 
 * signature: undefined TGDICustomButtonDefinition.vmt_02c(void)
 * body: 00467944-00467a84
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TGDICustomButtonDefinition_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  char extraout_DL;
  char cVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  byte bVar4;
  undefined4 *in_FS_OFFSET;
  code *pcVar5;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TComponent_vmt_02c(param_1,'\0',param_3);
  iVar1 = FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_00466c0c,'\x01',extraout_ECX_00);
  param_1[0x1a] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*param_1 + 0x30);
  *(undefined1 *)((int)param_1 + 0x6d) = 1;
  *(undefined1 *)((int)param_1 + 0x6e) = 2;
  bVar4 = 0;
  do {
    piVar2 = TDaviLinkedGraphic_vmt_014((int *)&PTR_TPersistent_vmt_000_0045ca28,'\x01',param_1);
    param_1[bVar4 + 9] = (int)piVar2;
    piVar2[7] = (int)param_1;
    piVar2[6] = (int)FUN_00467e40;
    bVar4 = bVar4 + 1;
  } while (bVar4 != 7);
  pcVar5 = FUN_00467d64;
  piVar2 = param_1;
  iVar1 = TGDIButtonDefinition_get_UpLink((int)param_1,0);
  FUN_0045d4a4(iVar1,extraout_EDX,extraout_ECX_01,pcVar5,piVar2);
  pcVar5 = FUN_00467d78;
  piVar2 = param_1;
  iVar1 = TGDIButtonDefinition_get_UpLink((int)param_1,1);
  FUN_0045d4a4(iVar1,extraout_EDX_00,extraout_ECX_02,pcVar5,piVar2);
  pcVar5 = FUN_00467d90;
  piVar2 = param_1;
  iVar1 = TGDIButtonDefinition_get_UpLink((int)param_1,2);
  FUN_0045d4a4(iVar1,extraout_EDX_01,extraout_ECX_03,pcVar5,piVar2);
  pcVar5 = FUN_00467da8;
  piVar2 = param_1;
  iVar1 = TGDIButtonDefinition_get_UpLink((int)param_1,3);
  FUN_0045d4a4(iVar1,extraout_EDX_02,extraout_ECX_04,pcVar5,piVar2);
  pcVar5 = FUN_00467dc0;
  piVar2 = param_1;
  iVar1 = TGDIButtonDefinition_get_UpLink((int)param_1,4);
  FUN_0045d4a4(iVar1,extraout_EDX_03,extraout_ECX_05,pcVar5,piVar2);
  param_1[0x10] = 100;
  param_1[0x11] = 0x32;
  iVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_06);
  param_1[0x12] = iVar1;
  piVar2 = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',extraout_ECX_07);
  param_1[0x13] = (int)piVar2;
  piVar2 = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',extraout_ECX_08);
  param_1[0x14] = (int)piVar2;
  *(undefined1 *)((int)param_1 + 0x5d) = 0xff;
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}


