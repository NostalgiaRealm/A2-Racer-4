
/* ==== FUN_0051ed50 @ 0051ed50 ==== 
 * signature: undefined2 * __fastcall FUN_0051ed50(undefined2 * param_1)
 * body: 0051ed50-0051ed71
 */

undefined2 * __fastcall FUN_0051ed50(undefined2 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0x80;
  param_1[1] = 0;
  uVar1 = FUN_004f5a90(0x200);
  *(undefined4 *)(param_1 + 2) = uVar1;
  return param_1;
}


