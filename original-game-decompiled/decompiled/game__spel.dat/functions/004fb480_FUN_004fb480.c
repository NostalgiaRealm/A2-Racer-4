
/* ==== FUN_004fb480 @ 004fb480 ==== 
 * signature: undefined __fastcall FUN_004fb480(undefined4 * param_1)
 * body: 004fb480-004fb4ba
 */

void __fastcall FUN_004fb480(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_00578450;
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != param_1 + 3) {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar1);
      param_1[2] = 0;
    }
    *(undefined2 *)(param_1 + 1) = 0;
  }
  *(undefined2 *)((int)param_1 + 6) = 0;
  *param_1 = &PTR_FUN_005783a8;
  return;
}


