
/* ==== FUN_00440430 @ 00440430 ==== 
 * signature: undefined4 __fastcall FUN_00440430(int param_1)
 * body: 00440430-0044044b
 */

undefined4 __fastcall FUN_00440430(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    uVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))(*(int **)(param_1 + 0x54),param_1);
    return uVar1;
  }
  return 0;
}


