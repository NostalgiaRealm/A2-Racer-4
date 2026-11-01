
/* ==== FUN_004dfdb0 @ 004dfdb0 ==== 
 * signature: undefined4 * __fastcall FUN_004dfdb0(int param_1)
 * body: 004dfdb0-004dfe65
 */

undefined4 * __fastcall FUN_004dfdb0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005711eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x30);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = *(undefined4 *)(param_1 + 4);
    puVar2[2] = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0xc);
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    FUN_004093c0(puVar2 + 3,(undefined1 *)(param_1 + 0xc),0,0xffffffff);
    puVar2[7] = *(undefined4 *)(param_1 + 0x1c);
    puVar2[8] = *(undefined4 *)(param_1 + 0x20);
    *(undefined2 *)(puVar2 + 9) = *(undefined2 *)(param_1 + 0x24);
    *(undefined1 *)(puVar2 + 10) = 0;
    *(undefined1 *)((int)puVar2 + 0x29) = 0;
    *puVar2 = &PTR_FUN_00577d44;
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    *puVar2 = &PTR_FUN_00577df8;
    puVar2[0xb] = uVar1;
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


