
/* ==== FUN_004022dd @ 004022dd ==== 
 * signature: int * __cdecl FUN_004022dd(int param_1)
 * body: 004022dd-0040231f
 */

int * __cdecl FUN_004022dd(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_00407220;
  if (DAT_00407220 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_00407220 + DAT_004072a0 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_00407220 + DAT_004072a0 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


