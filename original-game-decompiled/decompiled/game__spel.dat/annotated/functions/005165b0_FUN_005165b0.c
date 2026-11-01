
/* ==== FUN_005165b0 @ 005165b0 ==== 
 * signature: undefined __cdecl FUN_005165b0(int * param_1)
 * body: 005165b0-0051661a
 */

void __cdecl FUN_005165b0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)param_1[1];
  if (param_1 == DAT_0074c630) {
    DAT_0074c630 = piVar1;
  }
  if (piVar2 == (int *)0x0) {
    DAT_0074c628 = *param_1;
    *(undefined4 *)(DAT_0074c628 + 4) = 0;
  }
  else {
    *piVar2 = (int)piVar1;
    piVar1[1] = (int)piVar2;
  }
  DAT_0074c638 = DAT_0074c638 + -1;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_removevertex__remove_v_d_from_005baac8);
  }
  return;
}


