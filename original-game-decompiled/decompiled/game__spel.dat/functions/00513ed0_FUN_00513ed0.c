
/* ==== FUN_00513ed0 @ 00513ed0 ==== 
 * signature: undefined4 __cdecl FUN_00513ed0(int * param_1)
 * body: 00513ed0-00513f05
 */

undefined4 __cdecl FUN_00513ed0(int *param_1)

{
  undefined4 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  FUN_00513850(&local_c,param_1);
  uVar1 = local_8;
  local_8 = 0;
  FUN_00513cd0(&local_c);
  return uVar1;
}


