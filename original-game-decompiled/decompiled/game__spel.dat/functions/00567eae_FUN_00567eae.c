
/* ==== FUN_00567eae @ 00567eae ==== 
 * signature: undefined __cdecl FUN_00567eae(uint * param_1)
 * body: 00567eae-00567edb
 */

void __cdecl FUN_00567eae(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}


