
/* ==== FUN_0050d100 @ 0050d100 ==== 
 * signature: undefined __fastcall FUN_0050d100(undefined4 * param_1)
 * body: 0050d100-0050d13b
 */

void __fastcall FUN_0050d100(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_00578938;
  puVar1 = (undefined4 *)param_1[4];
  if (puVar1 != param_1 + 5) {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar1);
      param_1[4] = 0;
    }
    *(undefined2 *)(param_1 + 3) = 0;
  }
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  FUN_0050cf90(param_1);
  return;
}


