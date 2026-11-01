
/* ==== FUN_0040399c @ 0040399c ==== 
 * signature: undefined __register FUN_0040399c(void)
 * body: 0040399c-004039e1;004039f6-004039fa
 */

void FUN_0040399c(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  if (DAT_004ac4ac != (int *)0x0) {
    iVar1 = *DAT_004ac4ac;
    iVar4 = 0;
    iVar2 = DAT_004ac4ac[1];
    pcStack_18 = thunk_FUN_00403408;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    if (0 < iVar1) {
      do {
        pcVar3 = *(code **)(iVar2 + iVar4 * 8);
        iVar4 = iVar4 + 1;
        DAT_004ac4b0 = iVar4;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)();
        }
      } while (iVar4 < iVar1);
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}


