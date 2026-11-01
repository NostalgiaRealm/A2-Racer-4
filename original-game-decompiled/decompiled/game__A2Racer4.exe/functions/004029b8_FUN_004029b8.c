
/* ==== FUN_004029b8 @ 004029b8 ==== 
 * signature: undefined4 __cdecl FUN_004029b8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * body: 004029b8-004029d9
 */

undefined4 __cdecl
FUN_004029b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_1 + 4) & 6) != 0) {
    *param_4 = param_2;
    uVar1 = 3;
  }
  return uVar1;
}


