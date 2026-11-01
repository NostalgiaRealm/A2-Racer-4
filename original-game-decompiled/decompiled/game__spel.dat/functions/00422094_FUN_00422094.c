
/* ==== FUN_00422094 @ 00422094 ==== 
 * signature: int __stdcall FUN_00422094(void)
 * body: 00422094-0042209f
 */

int FUN_00422094(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_005d3328;
  do {
    if (*piVar2 < 0) break;
    piVar2 = piVar2 + 6;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x5d33e8);
  if (iVar1 == 8) {
    iVar1 = -1;
  }
  return iVar1;
}


