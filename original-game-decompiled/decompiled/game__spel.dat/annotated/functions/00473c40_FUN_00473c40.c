
/* ==== FUN_00473c40 @ 00473c40 ==== 
 * signature: undefined __cdecl FUN_00473c40(undefined4 * param_1, uint * param_2)
 * body: 00473c40-00473c67
 */

void __cdecl FUN_00473c40(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = uVar1 >> 0x18;
  return;
}


