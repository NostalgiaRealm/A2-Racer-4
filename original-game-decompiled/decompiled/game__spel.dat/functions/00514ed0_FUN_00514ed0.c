
/* ==== FUN_00514ed0 @ 00514ed0 ==== 
 * signature: undefined __cdecl FUN_00514ed0(int * param_1)
 * body: 00514ed0-00514f44
 */

void __cdecl FUN_00514ed0(int *param_1)

{
  int *piVar1;
  
  piVar1 = DAT_0074c62c;
  if (DAT_0074c62c == DAT_0074c630) {
    DAT_0074c630 = param_1;
  }
  param_1[5] = param_1[5] | 0x10000000;
  param_1[1] = piVar1[1];
  *param_1 = (int)piVar1;
  if ((undefined4 *)piVar1[1] == (undefined4 *)0x0) {
    DAT_0074c628 = param_1;
  }
  else {
    *(undefined4 *)piVar1[1] = param_1;
  }
  piVar1[1] = (int)param_1;
  DAT_0074c638 = DAT_0074c638 + 1;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_appendvertex__append_v_d_to_v_005ba2e0);
  }
  return;
}


