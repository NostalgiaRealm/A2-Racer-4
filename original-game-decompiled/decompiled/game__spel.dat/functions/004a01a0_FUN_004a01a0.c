
/* ==== FUN_004a01a0 @ 004a01a0 ==== 
 * signature: undefined __cdecl FUN_004a01a0(int * param_1, int param_2, int param_3)
 * body: 004a01a0-004a01dd
 */

void __cdecl FUN_004a01a0(int *param_1,int param_2,int param_3)

{
  FUN_004a0100((uint)(param_1 != (int *)0x0),(byte *)s__s___d__NULL_pointer_passed_to_C_005aeffc);
  if (*param_1 < param_2) {
    *param_1 = param_2;
  }
  if (param_3 < *param_1) {
    *param_1 = param_3;
  }
  return;
}


