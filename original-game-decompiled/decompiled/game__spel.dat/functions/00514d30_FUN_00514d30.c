
/* ==== FUN_00514d30 @ 00514d30 ==== 
 * signature: undefined __cdecl FUN_00514d30(int * param_1, int param_2)
 * body: 00514d30-00514d85
 */

void __cdecl FUN_00514d30(int *param_1,int param_2)

{
  if ((param_2 < 0) || (*param_1 < param_2)) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_internal_error__qh_settrun_005ba21c);
    FUN_005149f0(DAT_0074c784,&DAT_00712694,param_1);
    FUN_0051e8e0(5,(int *)0x0);
  }
  param_1[*param_1 + 1] = param_2 + 1;
  param_1[param_2 + 1] = 0;
  return;
}


