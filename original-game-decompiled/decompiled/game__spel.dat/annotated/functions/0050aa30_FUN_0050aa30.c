
/* ==== FUN_0050aa30 @ 0050aa30 ==== 
 * signature: undefined __fastcall FUN_0050aa30(undefined4 * param_1)
 * body: 0050aa30-0050aabd
 */

void __fastcall FUN_0050aa30(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0057387b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00578870;
  local_4 = 0;
  if (param_1[3] != 0) {
    FUN_0050e2c0((void *)(param_1[3] + 0x20),param_1[1]);
    param_1[3] = 0;
  }
  FUN_004f7f00(*(void **)(param_1[9] + 0x18),param_1[9]);
  FUN_0050bc60(*(void **)(*(int *)(param_1[9] + 0x18) + 0x14),(int)param_1);
  puVar1 = (undefined4 *)param_1[0xb];
  if (puVar1 != param_1 + 0xc) {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar1);
      param_1[0xb] = 0;
    }
    *(undefined2 *)(param_1 + 10) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  ExceptionList = local_c;
  return;
}


