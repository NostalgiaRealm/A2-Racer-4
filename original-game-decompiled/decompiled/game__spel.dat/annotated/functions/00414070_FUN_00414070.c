
/* ==== FUN_00414070 @ 00414070 ==== 
 * signature: int __cdecl FUN_00414070(int param_1)
 * body: 00414070-004140a6
 */

int __cdecl FUN_00414070(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (-1 < param_1) {
    iVar2 = 0;
    if (DAT_005d1ba8 == param_1) {
      return 0;
    }
    puVar3 = &DAT_005d1ba8;
    do {
      if (0x5d2697 < (int)puVar3) break;
      piVar1 = puVar3 + 0xe;
      puVar3 = puVar3 + 0xe;
      iVar2 = iVar2 + 1;
    } while (*piVar1 != param_1);
    if (iVar2 != 0x32) {
      return iVar2;
    }
  }
  return -1;
}


