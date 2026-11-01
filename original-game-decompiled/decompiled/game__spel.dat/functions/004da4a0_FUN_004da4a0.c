
/* ==== FUN_004da4a0 @ 004da4a0 ==== 
 * signature: undefined __fastcall FUN_004da4a0(int param_1)
 * body: 004da4a0-004da4c1
 */

void __fastcall FUN_004da4a0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar1 + 8))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0xc));
  }
  return;
}


