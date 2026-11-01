
/* ==== FUN_00445258 @ 00445258 ==== 
 * signature: undefined FUN_00445258(void)
 * body: 00445258-0044525b
 */

void FUN_00445258(uint *param_1)

{
  *param_1 = *param_1 ^ (uint)param_1;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  (**(code **)(*param_1 + 4))();
  return;
}


