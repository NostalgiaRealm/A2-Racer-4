
/* ==== FUN_0043ad98 @ 0043ad98 ==== 
 * signature: undefined __register FUN_0043ad98(int param_1)
 * body: 0043ad98-0043ae82;0043ae8a-0043ae8c
 */

void FUN_0043ad98(int param_1)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x200) == '\0') {
    puStack_c = (undefined1 *)0x43adb7;
    local_8 = param_1;
    bVar1 = FUN_0042abb0(param_1);
    if (bVar1) {
      pcStack_10 = thunk_FUN_00403434;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      *(undefined1 *)(local_8 + 0x200) = 1;
      puStack_c = &stack0xfffffffc;
      bVar1 = FUN_0043a35c(*(int *)(local_8 + 500));
      if (bVar1) {
        FUN_0043a9c8(*(int *)(local_8 + 0x1f0));
        FUN_0043a9c8(*(int *)(local_8 + 500));
      }
      else {
        bVar1 = FUN_0043a35c(*(int *)(local_8 + 0x1f0));
        if (bVar1) {
          FUN_0043a9c8(*(int *)(local_8 + 500));
          FUN_0043a9c8(*(int *)(local_8 + 0x1f0));
        }
        else {
          FUN_0043a9c8(*(int *)(local_8 + 500));
          FUN_0043a9c8(*(int *)(local_8 + 0x1f0));
        }
      }
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)(local_8 + 0x200) = 0;
      return;
    }
  }
  return;
}


