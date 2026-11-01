
/* ==== FUN_0055f923 @ 0055f923 ==== 
 * signature: undefined4 __cdecl FUN_0055f923(int param_1)
 * body: 0055f923-0055f947
 */

undefined4 __cdecl FUN_0055f923(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_005c86b0;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x5c86b4);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x5c8788);
  return 0;
}


