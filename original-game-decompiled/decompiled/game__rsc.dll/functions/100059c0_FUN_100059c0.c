
/* ==== FUN_100059c0 @ 100059c0 ==== 
 * signature: int __cdecl FUN_100059c0(int param_1)
 * body: 100059c0-10005afe
 */

int __cdecl FUN_100059c0(int param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_100073f0(2);
  for (local_10 = 0; local_10 < DAT_10032f60; local_10 = local_10 + 1) {
    if ((*(int *)(DAT_10031c18 + local_10 * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_10031c18 + local_10 * 4) + 0xc) & 0x83) != 0)) {
      FUN_10002ea0(local_10,*(int *)(DAT_10031c18 + local_10 * 4));
      if ((*(uint *)(*(int *)(DAT_10031c18 + local_10 * 4) + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar1 = FUN_100058a0(*(int **)(DAT_10031c18 + local_10 * 4));
          if (iVar1 != -1) {
            local_8 = local_8 + 1;
          }
        }
        else if (((param_1 == 0) &&
                 ((*(uint *)(*(int *)(DAT_10031c18 + local_10 * 4) + 0xc) & 2) != 0)) &&
                (iVar1 = FUN_100058a0(*(int **)(DAT_10031c18 + local_10 * 4)), iVar1 == -1)) {
          local_c = -1;
        }
      }
      FUN_10002f10(local_10,*(int *)(DAT_10031c18 + local_10 * 4));
    }
  }
  FUN_10007490(2);
  if (param_1 == 1) {
    local_c = local_8;
  }
  return local_c;
}


