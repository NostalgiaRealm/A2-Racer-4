
/* ==== TDockTree.vmt_024 @ 00436990 ==== 
 * signature: undefined __register TDockTree.vmt_024(int * param_1, char param_2, int param_3)
 * body: 00436990-00436a9b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDockTree_vmt_024(int *param_1,char param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uStack_38;
  code *pcStack_34;
  code *pcStack_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  
  if (param_2 != '\0') {
    pcStack_30 = (code *)0x4369a5;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
  }
  pcStack_30 = (code *)0x4369b8;
  FUN_00402f6c(param_1,'\0',param_3);
  param_1[3] = 4;
  param_1[5] = param_3;
  param_1[0x1c] = 0x40000;
  param_1[6] = 0xc;
  if ((*(char *)(param_3 + 0x4b) == '\x01') || (*(char *)(param_3 + 0x4b) == '\x02')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 7) = uVar1;
  pcStack_30 = (code *)0x436a08;
  iVar2 = FUN_004364e4((int *)FUN_0042b6a8,'\x01',(int)param_1);
  param_1[0x19] = iVar2;
  pcStack_30 = (code *)0x436a1a;
  piVar3 = FUN_00418838((int *)&PTR_TPersistent_vmt_000_00416cfc,'\x01',extraout_ECX_00);
  param_1[4] = (int)piVar3;
  pcStack_30 = (code *)0x436a2e;
  uVar4 = FUN_0041fb50(0,0xffffff);
  pcStack_30 = (code *)0x436a37;
  FUN_004189b8(piVar3,uVar4);
  pcStack_30 = (code *)0x436a3f;
  FUN_00436b58((int)param_1);
  pcStack_34 = thunk_FUN_004036bc;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  pcStack_30 = (code *)&stack0xfffffffc;
  iVar2 = FUN_004317bc(param_3);
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      uVar6 = 0;
      uVar4 = FUN_00431780(param_3,iVar5);
      (**(code **)(*param_1 + 8))(param_1,uVar4,3,uVar6);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004366c0(param_1[0x19]);
  *in_FS_OFFSET = uStack_38;
  pcStack_30 = FUN_00436aa3;
  pcStack_34 = (code *)0x436a9b;
  FUN_00436b5c((int)param_1);
  return;
}


