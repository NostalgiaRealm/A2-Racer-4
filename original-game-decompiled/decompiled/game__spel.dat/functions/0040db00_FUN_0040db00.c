
/* ==== FUN_0040db00 @ 0040db00 ==== 
 * signature: undefined4 __cdecl FUN_0040db00(int param_1)
 * body: 0040db00-0040db27
 */

undefined4 __cdecl FUN_0040db00(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_005ce9e8;
  while ((piVar1[0x17] != param_1 || (*piVar1 == -1))) {
    piVar1 = piVar1 + 0xa5;
    if (0x5d1ae3 < (int)piVar1) {
      return 0;
    }
  }
  return 1;
}


