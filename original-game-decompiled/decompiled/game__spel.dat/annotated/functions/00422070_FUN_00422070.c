
/* ==== FUN_00422070 @ 00422070 ==== 
 * signature: int __cdecl FUN_00422070(int param_1)
 * body: 00422070-00422093
 */

int __cdecl FUN_00422070(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_005d3328;
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 6;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x5d33e8);
  if (iVar1 == 8) {
    iVar1 = -1;
  }
  return iVar1;
}


