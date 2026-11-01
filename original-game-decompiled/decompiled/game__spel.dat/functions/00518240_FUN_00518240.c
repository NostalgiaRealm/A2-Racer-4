
/* ==== FUN_00518240 @ 00518240 ==== 
 * signature: undefined __cdecl FUN_00518240(undefined4 * param_1)
 * body: 00518240-00518290
 */

void __cdecl FUN_00518240(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  FUN_00514280(*(int **)(param_1[1] + 0x38),(int)param_1);
  FUN_00514280(*(int **)(param_1[2] + 0x38),(int)param_1);
  FUN_005145f0(param_1);
  if (param_1 != (undefined4 *)0x0) {
    DAT_0074c79c = DAT_0074c79c + 1;
    puVar1 = (undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x40) * 4);
    *param_1 = *(undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x40) * 4);
    *puVar1 = param_1;
  }
  return;
}


