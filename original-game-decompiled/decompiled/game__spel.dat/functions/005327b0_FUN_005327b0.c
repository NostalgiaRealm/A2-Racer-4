
/* ==== FUN_005327b0 @ 005327b0 ==== 
 * signature: undefined __cdecl FUN_005327b0(int * param_1, undefined4 * param_2, undefined4 * param_3)
 * body: 005327b0-005328e7
 */

void __cdecl FUN_005327b0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  double local_48;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  
  FUN_00533c70(param_2,(undefined4 *)&local_28);
  FUN_00533c70(param_3,(undefined4 *)&local_48);
  if (((0.001 < ABS(local_28 - local_48)) || (0.001 < ABS(local_20 - local_40))) ||
     (0.001 < ABS(local_18 - local_38))) {
    FUN_00558953(param_1,(byte *)s_VECT_1_2_1_2_1_005c4fa4);
    iVar1 = 3;
    do {
      FUN_00558953(param_1,(byte *)s__8_4g_005c38d0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_005164c0((uint)param_3);
    FUN_00558953(param_1,(byte *)s___p_d_005c4f9c);
  }
  else {
    FUN_00558953(param_1,(byte *)s_VECT_1_1_1_1_1_005c4fb4);
  }
  iVar1 = 3;
  do {
    FUN_00558953(param_1,(byte *)s__8_4g_005c38d0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_005164c0((uint)param_2);
  FUN_00558953(param_1,(byte *)s___p_d_005c4f9c);
  FUN_00558953(param_1,(byte *)s__8_4g__8_4g__8_4g_1_005c4f84);
  return;
}


