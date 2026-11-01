
/* ==== FUN_004df0b0 @ 004df0b0 ==== 
 * signature: undefined4 * __fastcall FUN_004df0b0(int param_1)
 * body: 004df0b0-004df180
 */

undefined4 * __fastcall FUN_004df0b0(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571013;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x44);
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
    *puVar2 = &PTR_FUN_00577860;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004da020(puVar2 + 10,param_1 + 0x28);
    uVar1 = *(undefined1 *)(param_1 + 0x3c);
    *puVar2 = &PTR_FUN_0057797c;
    *(undefined1 *)(puVar2 + 0xf) = uVar1;
    puVar2[0x10] = *(undefined4 *)(param_1 + 0x40);
    *puVar2 = &PTR_FUN_00577ca4;
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


