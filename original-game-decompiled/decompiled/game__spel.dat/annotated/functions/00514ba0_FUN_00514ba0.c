
/* ==== FUN_00514ba0 @ 00514ba0 ==== 
 * signature: undefined __cdecl FUN_00514ba0(int * param_1)
 * body: 00514ba0-00514c11
 */

void __cdecl FUN_00514ba0(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    piVar1 = FUN_00514c70();
    if (piVar1 != (int *)*param_1) {
      FUN_00514ce0(piVar1);
      FUN_00514af0(piVar1);
      FUN_00514af0(DAT_0074c780);
      FUN_00514af0((int *)*param_1);
      FUN_00558953(DAT_0074c784,(byte *)s_qhull_internal_error__qh_settemp_005ba0f0);
      FUN_0051e8e0(5,(int *)0x0);
    }
    FUN_005145f0(param_1);
  }
  return;
}


