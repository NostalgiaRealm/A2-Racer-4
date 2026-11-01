
/* ==== FUN_00464b30 @ 00464b30 ==== 
 * signature: int __stdcall FUN_00464b30(void)
 * body: 00464b30-00464b4b
 */

int FUN_00464b30(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_00709b18;
  do {
    if (*piVar2 == 0) {
      return iVar1;
    }
    piVar2 = piVar2 + 10;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x709f00);
  return -1;
}


