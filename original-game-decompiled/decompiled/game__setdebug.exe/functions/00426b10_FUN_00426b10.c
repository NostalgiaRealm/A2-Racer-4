
/* ==== FUN_00426b10 @ 00426b10 ==== 
 * signature: undefined __register FUN_00426b10(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 00426b10-00426bd3;00426bdb-00426be0
 */

void FUN_00426b10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  if (*(int *)(param_1 + 0x180) != 0) {
    puStack_1c = (undefined1 *)0x426b37;
    piVar2 = (int *)FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',param_3);
    pcStack_20 = thunk_FUN_00403434;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    iVar5 = *(int *)(*(int *)(param_1 + 0x180) + 8);
    puStack_1c = &stack0xfffffffc;
    FUN_0040f1c0(piVar2,iVar5);
    if (-1 < iVar5 + -1) {
      iVar6 = 0;
      iVar4 = iVar5;
      do {
        iVar3 = FUN_0040f024(*(undefined4 **)(param_1 + 0x180),iVar6);
        iVar1 = *(int *)(iVar3 + 0x170);
        if ((-1 < iVar1) && (iVar1 < iVar5)) {
          FUN_0040f118(piVar2,iVar1,iVar3);
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        iVar6 = FUN_0040f024(piVar2,iVar4);
        if (iVar6 != 0) {
          FUN_0042aa6c(iVar6,(short)iVar4);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x426bdb;
    pcStack_20 = (code *)0x426bd3;
    FUN_00402d14(piVar2);
    return;
  }
  return;
}


