
/* ==== FUN_00430ab0 @ 00430ab0 ==== 
 * signature: undefined __register FUN_00430ab0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 00430ab0-00430b73;00430b7b-00430b80
 */

void FUN_00430ab0(int param_1,undefined4 param_2,undefined4 param_3)

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
    puStack_1c = (undefined1 *)0x430ad7;
    piVar2 = (int *)FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',param_3);
    pcStack_20 = thunk_FUN_004036bc;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    iVar5 = *(int *)(*(int *)(param_1 + 0x180) + 8);
    puStack_1c = &stack0xfffffffc;
    FUN_004104a4(piVar2,iVar5);
    if (-1 < iVar5 + -1) {
      iVar6 = 0;
      iVar4 = iVar5;
      do {
        iVar3 = FUN_004102b0(*(undefined4 **)(param_1 + 0x180),iVar6);
        iVar1 = *(int *)(iVar3 + 0x170);
        if ((-1 < iVar1) && (iVar1 < iVar5)) {
          FUN_004103fc(piVar2,iVar1,iVar3);
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        iVar6 = FUN_004102b0(piVar2,iVar4);
        if (iVar6 != 0) {
          FUN_00434b98(iVar6,(short)iVar4);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x430b7b;
    pcStack_20 = (code *)0x430b73;
    FUN_00402f9c(piVar2);
    return;
  }
  return;
}


