
/* ==== FUN_0040393c @ 0040393c ==== 
 * signature: undefined __register FUN_0040393c(void)
 * body: 0040393c-00403981;00403996-0040399a
 */

void FUN_0040393c(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  iVar3 = DAT_004ac4b0;
  puStack_14 = &stack0xfffffffc;
  if (DAT_004ac4ac != 0) {
    iVar1 = *(int *)(DAT_004ac4ac + 4);
    pcStack_18 = thunk_FUN_00403408;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      pcVar2 = *(code **)(iVar1 + 4 + iVar3 * 8);
      DAT_004ac4b0 = iVar3;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}


