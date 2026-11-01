
/* ==== FUN_005147a0 @ 005147a0 ==== 
 * signature: int __cdecl FUN_005147a0(int * param_1)
 * body: 005147a0-005147c2
 */

int __cdecl FUN_005147a0(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[*param_1 + 1];
    if (iVar1 == 0) {
      return param_1[*param_1];
    }
    if (1 < iVar1) {
      return param_1[iVar1 + -1];
    }
  }
  return 0;
}


