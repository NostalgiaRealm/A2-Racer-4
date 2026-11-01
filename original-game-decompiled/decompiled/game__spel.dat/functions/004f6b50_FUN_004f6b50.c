
/* ==== FUN_004f6b50 @ 004f6b50 ==== 
 * signature: undefined __fastcall FUN_004f6b50(undefined4 * param_1)
 * body: 004f6b50-004f6bd1
 */

void __fastcall FUN_004f6b50(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_00578354;
  puVar1 = (undefined4 *)param_1[0xe];
  if (puVar1 != param_1 + 0xf) {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar1);
      param_1[0xe] = 0;
    }
    *(undefined2 *)(param_1 + 0xd) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  puVar1 = (undefined4 *)param_1[0xc];
  if (puVar1 != param_1 + 0xd) {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar1);
      param_1[0xc] = 0;
    }
    *(undefined2 *)(param_1 + 0xb) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  puVar1 = (undefined4 *)param_1[10];
  if (puVar1 != param_1 + 0xb) {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar1);
      param_1[10] = 0;
    }
    *(undefined2 *)(param_1 + 9) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  param_1[4] = &PTR_FUN_005783a8;
  param_1[2] = &PTR_FUN_005783a8;
  *param_1 = &PTR_FUN_005783a8;
  return;
}


