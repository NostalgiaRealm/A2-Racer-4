
/* ==== FUN_00445748 @ 00445748 ==== 
 * signature: undefined __register FUN_00445748(int param_1)
 * body: 00445748-00445832;0044583a-0044583c
 */

void FUN_00445748(int param_1)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x200) == '\0') {
    puStack_c = (undefined1 *)0x445767;
    local_8 = param_1;
    bVar1 = FUN_00434cdc(param_1);
    if (bVar1) {
      pcStack_10 = thunk_FUN_004036bc;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      *(undefined1 *)(local_8 + 0x200) = 1;
      puStack_c = &stack0xfffffffc;
      bVar1 = FUN_00444d0c(*(int *)(local_8 + 500));
      if (bVar1) {
        FUN_00445378(*(int *)(local_8 + 0x1f0));
        FUN_00445378(*(int *)(local_8 + 500));
      }
      else {
        bVar1 = FUN_00444d0c(*(int *)(local_8 + 0x1f0));
        if (bVar1) {
          FUN_00445378(*(int *)(local_8 + 500));
          FUN_00445378(*(int *)(local_8 + 0x1f0));
        }
        else {
          FUN_00445378(*(int *)(local_8 + 500));
          FUN_00445378(*(int *)(local_8 + 0x1f0));
        }
      }
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)(local_8 + 0x200) = 0;
      return;
    }
  }
  return;
}


