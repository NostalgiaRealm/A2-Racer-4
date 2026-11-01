
/* ==== FUN_00514c70 @ 00514c70 ==== 
 * signature: int * __stdcall FUN_00514c70(void)
 * body: 00514c70-00514cdd
 */

int * FUN_00514c70(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_005142e0(DAT_0074c780);
  if (piVar1 == (int *)0x0) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_internal_error__qh_settemp_005ba19c);
    FUN_0051e8e0(5,(int *)0x0);
  }
  if (4 < DAT_0074c788) {
    FUN_00514af0(piVar1);
    FUN_00514af0(DAT_0074c780);
    FUN_00558953(DAT_0074c784,(byte *)s_qh_settemppop__depth__d_temp_set_005ba168);
  }
  return piVar1;
}


