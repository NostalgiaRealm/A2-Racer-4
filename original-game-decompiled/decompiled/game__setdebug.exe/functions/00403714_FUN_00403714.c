
/* ==== FUN_00403714 @ 00403714 ==== 
 * signature: undefined __register FUN_00403714(void)
 * body: 00403714-00403759;0040376e-00403772
 */

void FUN_00403714(void)

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
  if (DAT_004474a4 != (int *)0x0) {
    iVar1 = *DAT_004474a4;
    iVar4 = 0;
    iVar2 = DAT_004474a4[1];
    pcStack_18 = thunk_FUN_00403180;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    if (0 < iVar1) {
      do {
        pcVar3 = *(code **)(iVar2 + iVar4 * 8);
        iVar4 = iVar4 + 1;
        DAT_004474a8 = iVar4;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)();
        }
      } while (iVar4 < iVar1);
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}


