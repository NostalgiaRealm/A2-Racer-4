
/* ==== FUN_0051a810 @ 0051a810 ==== 
 * signature: undefined __cdecl FUN_0051a810(int param_1)
 * body: 0051a810-0051a83b
 */

void __cdecl FUN_0051a810(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0074bf08;
  while( true ) {
    if (*piVar1 == param_1) {
      return;
    }
    if (*piVar1 == 0) break;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
    if (0x74bf77 < (int)piVar1) {
      return;
    }
  }
  (&DAT_0074bf08)[iVar2] = param_1;
  return;
}


