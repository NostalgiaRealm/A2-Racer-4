
/* ==== FUN_004b3ff0 @ 004b3ff0 ==== 
 * signature: undefined __cdecl FUN_004b3ff0(undefined4 * param_1, undefined4 * param_2)
 * body: 004b3ff0-004b4028
 */

void __cdecl FUN_004b3ff0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


