
/* ==== TDataList.vmt_008 @ 0045f118 ==== 
 * signature: undefined TDataList.vmt_008(void)
 * body: 0045f118-0045f1b6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDataList_vmt_008(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined4 *puStack_10;
  int iStack_c;
  int iStack_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  iStack_8 = 0;
  iStack_c = 0;
  puStack_10 = (undefined4 *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  (**(code **)(**(int **)(param_1 + 4) + 0x40))();
  iVar1 = FUN_0045e8a0(param_1);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  if (-1 < (int)uVar2) {
    iStack_8 = uVar2 + 1;
    iVar1 = 0;
    do {
      FUN_004085ac(iVar1,(int *)&puStack_10);
      FUN_00403f28(&iStack_c,(undefined4 *)"-Item ",puStack_10);
      (**(code **)(**(int **)(param_1 + 4) + 0x34))(*(int **)(param_1 + 4),iStack_c);
      piVar3 = (int *)FUN_0045e640(param_1,iVar1);
      uVar4 = (**(code **)(*piVar3 + 8))();
      (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4),uVar4);
      iVar1 = iVar1 + 1;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0045f1be;
  pcStack_20 = (code *)0x45f1b6;
  FUN_00403c80((int *)&puStack_10,2);
  return;
}


