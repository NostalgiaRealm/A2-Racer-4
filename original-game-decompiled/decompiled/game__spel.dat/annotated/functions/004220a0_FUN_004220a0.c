
/* ==== FUN_004220a0 @ 004220a0 ==== 
 * signature: int __stdcall FUN_004220a0(void)
 * body: 004220a0-004220c0
 */

int FUN_004220a0(void)

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


