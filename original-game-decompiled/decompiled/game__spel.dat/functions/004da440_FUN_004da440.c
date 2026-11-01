
/* ==== FUN_004da440 @ 004da440 ==== 
 * signature: undefined __fastcall FUN_004da440(int param_1)
 * body: 004da440-004da461
 */

void __fastcall FUN_004da440(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x1c))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0xc));
  }
  return;
}


