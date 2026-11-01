
/* ==== FUN_0050d210 @ 0050d210 ==== 
 * signature: undefined4 * __thiscall FUN_0050d210(undefined4 * param_1, char * param_2, undefined8 param_3)
 * body: 0050d210-0050d240
 */

undefined4 * __thiscall FUN_0050d210(undefined4 *param_1,char *param_2,undefined8 param_3)

{
  FUN_0050cfc0(param_1,param_2);
  param_1[10] = &PTR_FUN_00578950;
  *param_1 = &PTR_FUN_00578944;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0xc) = param_3;
  param_1[10] = &PTR_FUN_00578940;
  return param_1;
}


