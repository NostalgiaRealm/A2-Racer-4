
/* ==== FUN_004036b4 @ 004036b4 ==== 
 * signature: undefined __register FUN_004036b4(void)
 * body: 004036b4-004036f9;0040370e-00403712
 */

void FUN_004036b4(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  iVar3 = DAT_004474a8;
  puStack_14 = &stack0xfffffffc;
  if (DAT_004474a4 != 0) {
    iVar1 = *(int *)(DAT_004474a4 + 4);
    pcStack_18 = thunk_FUN_00403180;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      pcVar2 = *(code **)(iVar1 + 4 + iVar3 * 8);
      DAT_004474a8 = iVar3;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}


