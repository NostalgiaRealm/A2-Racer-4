
/* ==== thunk_FUN_0050d0c0 @ 0050d270 ==== 
 * signature: undefined __fastcall thunk_FUN_0050d0c0(undefined4 * param_1)
 * body: 0050d270-0050d274
 * thunk to: FUN_0050d0c0
 */

void __fastcall thunk_FUN_0050d0c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_00578930;
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


