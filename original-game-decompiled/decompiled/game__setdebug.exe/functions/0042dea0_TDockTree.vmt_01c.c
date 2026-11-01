
/* ==== TDockTree.vmt_01c @ 0042dea0 ==== 
 * signature: undefined TDockTree.vmt_01c(void)
 * body: 0042dea0-0042df87
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDockTree_vmt_01c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar4;
  undefined4 uStack_3c;
  code *pcStack_38;
  code *pcStack_34;
  undefined4 uStack_30;
  code *pcStack_2c;
  undefined1 *puStack_28;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  int iStack_c;
  int *piStack_8;
  
  puStack_28 = &stack0xfffffffc;
  iStack_18 = 0;
  pcStack_2c = thunk_FUN_00403434;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pcStack_34 = (code *)0x42ded5;
  iStack_c = param_1;
  piStack_8 = param_2;
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x70,4);
  pcStack_34 = (code *)0x42dee1;
  piStack_14 = (int *)FUN_00402ce4((int *)&PTR_TPersistent_vmt_000_0040dcac,'\x01',extraout_ECX);
  pcStack_38 = thunk_FUN_00403434;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  pcStack_34 = (code *)&stack0xfffffffc;
  iVar1 = FUN_004291ac(*(int *)(iStack_c + 0x14));
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_004291c0(*(int *)(iStack_c + 0x14),iVar3);
      if ((*(char *)(iVar2 + 0x47) == '\0') && (*(int *)(iVar2 + 8) != 0)) {
        (**(code **)(*piStack_14 + 0x34))(piStack_14,*(undefined4 *)(iVar2 + 8));
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iStack_10 = (**(code **)(*piStack_14 + 0x14))();
  (**(code **)(*piStack_8 + 8))(piStack_8,&iStack_10,4);
  if (-1 < iStack_10 + -1) {
    iVar3 = 0;
    iVar1 = iStack_10;
    do {
      puVar4 = &stack0xfffffffc;
      (**(code **)(*piStack_14 + 0xc))(piStack_14,iVar3,&iStack_18);
      FUN_0042dd6c(iStack_18,extraout_EDX,extraout_ECX_00,(int)puVar4);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_3c;
  pcStack_34 = FUN_0042df8f;
  pcStack_38 = (code *)0x42df87;
  FUN_00402d14(piStack_14);
  return;
}


