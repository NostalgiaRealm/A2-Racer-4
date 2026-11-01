
/* ==== FUN_004c6f50 @ 004c6f50 ==== 
 * signature: int __cdecl FUN_004c6f50(int param_1)
 * body: 004c6f50-004c6fa3
 */

int __cdecl FUN_004c6f50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00740928) {
    iVar1 = 0;
    do {
      if ((*(int *)(iVar1 + 0x34 + DAT_00740934) == param_1) &&
         (*(int *)(iVar1 + 0x30 + DAT_00740934) == 0)) {
        return iVar2;
      }
      FUN_004c3fa0((byte *)s__d_used__d_005b5084);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x44;
    } while (iVar2 < DAT_00740928);
  }
  return -1;
}


