
/* ==== FUN_00567e2f @ 00567e2f ==== 
 * signature: undefined4 __cdecl FUN_00567e2f(uint param_1, uint param_2, uint * param_3)
 * body: 00567e2f-00567e4f
 */

undefined4 __cdecl FUN_00567e2f(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}


