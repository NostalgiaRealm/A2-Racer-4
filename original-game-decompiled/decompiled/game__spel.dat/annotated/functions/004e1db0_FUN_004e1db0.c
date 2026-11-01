
/* ==== FUN_004e1db0 @ 004e1db0 ==== 
 * signature: undefined4 * __fastcall FUN_004e1db0(int param_1)
 * body: 004e1db0-004e1e92
 */

undefined4 * __fastcall FUN_004e1db0(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571563;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x50);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0xc);
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    FUN_004093c0(puVar1 + 3,(undefined1 *)(param_1 + 0xc),0,0xffffffff);
    puVar1[7] = *(undefined4 *)(param_1 + 0x1c);
    puVar1[8] = *(undefined4 *)(param_1 + 0x20);
    *(undefined2 *)(puVar1 + 9) = *(undefined2 *)(param_1 + 0x24);
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined1 *)((int)puVar1 + 0x29) = 0;
    *puVar1 = &PTR_FUN_00577d44;
    puVar1[0xb] = *(undefined4 *)(param_1 + 0x2c);
    puVar1[0xc] = *(undefined4 *)(param_1 + 0x30);
    *puVar1 = &PTR_FUN_00577fc0;
    puVar1[0xd] = *(undefined4 *)(param_1 + 0x34);
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar1[0xe] = *(undefined4 *)(param_1 + 0x38);
    FUN_004e5b60(puVar1 + 0xf,param_1 + 0x3c);
    *puVar1 = &PTR_FUN_00578024;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


