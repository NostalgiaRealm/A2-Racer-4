
/* ==== TDockTree.vmt_024 @ 0042c7dc ==== 
 * signature: undefined __register TDockTree.vmt_024(int * param_1, char param_2, int param_3)
 * body: 0042c7dc-0042c8e7
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
    pcStack_30 = (code *)0x42c7f1;
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
  }
  pcStack_30 = (code *)0x42c804;
  FUN_00402ce4(param_1,'\0',param_3);
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
  pcStack_30 = (code *)0x42c854;
  iVar2 = FUN_0042c330((int *)FUN_00421768,'\x01',(int)param_1);
  param_1[0x19] = iVar2;
  pcStack_30 = (code *)0x42c866;
  piVar3 = FUN_00416bb0((int *)&PTR_TPersistent_vmt_000_00415148,'\x01',extraout_ECX_00);
  param_1[4] = (int)piVar3;
  pcStack_30 = (code *)0x42c87a;
  uVar4 = FUN_0041d118(0,0xffffff);
  pcStack_30 = (code *)0x42c883;
  FUN_00416d30(piVar3,uVar4);
  pcStack_30 = (code *)0x42c88b;
  FUN_0042c9a4((int)param_1);
  pcStack_34 = thunk_FUN_00403434;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  pcStack_30 = (code *)&stack0xfffffffc;
  iVar2 = FUN_0042781c(param_3);
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      uVar6 = 0;
      uVar4 = FUN_004277e0(param_3,iVar5);
      (**(code **)(*param_1 + 8))(param_1,uVar4,3,uVar6);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0042c50c(param_1[0x19]);
  *in_FS_OFFSET = uStack_38;
  pcStack_30 = FUN_0042c8ef;
  pcStack_34 = (code *)0x42c8e7;
  FUN_0042c9a8((int)param_1);
  return;
}


