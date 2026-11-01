
/* ==== FUN_00506590 @ 00506590 ==== 
 * signature: undefined4 __fastcall FUN_00506590(int param_1)
 * body: 00506590-005065e2
 */

undefined4 __fastcall FUN_00506590(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    puVar1 = FUN_004fe470(*(void **)(*(int *)(param_1 + 0x18) + 0xa4),param_1);
    *(undefined4 **)(param_1 + 0x40) = puVar1;
  }
  *(int *)(*(int *)(param_1 + 0x40) + 4) = *(int *)(*(int *)(param_1 + 0x40) + 4) + 1;
  if ((*(int *)(param_1 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(param_1 + 0x40) < *(int *)(*(int *)(param_1 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(param_1 + 0x40));
  }
  return *(undefined4 *)(param_1 + 0x40);
}


