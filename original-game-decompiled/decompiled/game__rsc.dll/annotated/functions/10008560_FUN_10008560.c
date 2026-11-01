
/* ==== FUN_10008560 @ 10008560 ==== 
 * signature: int __stdcall FUN_10008560(void)
 * body: 10008560-10008639
 */

int FUN_10008560(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_100073f0(2);
  for (local_c = 3; local_c < DAT_10032f60; local_c = local_c + 1) {
    if (*(int *)(DAT_10031c18 + local_c * 4) != 0) {
      if ((*(uint *)(*(int *)(DAT_10031c18 + local_c * 4) + 0xc) & 0x83) != 0) {
        iVar1 = FUN_10001d70(*(undefined ***)(DAT_10031c18 + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      if (0x13 < local_c) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10031c18 + local_c * 4) + 0x20));
        FUN_100041a0(*(void **)(DAT_10031c18 + local_c * 4),2);
        *(undefined4 *)(DAT_10031c18 + local_c * 4) = 0;
      }
    }
  }
  FUN_10007490(2);
  return local_8;
}


