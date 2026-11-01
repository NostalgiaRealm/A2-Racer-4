
/* ==== FUN_004e5ca0 @ 004e5ca0 ==== 
 * signature: undefined __fastcall FUN_004e5ca0(int param_1)
 * body: 004e5ca0-004e5ce2
 */

void __fastcall FUN_004e5ca0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (puVar2 = *(undefined4 **)(param_1 + 4); puVar2 != puVar1; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(0);
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


