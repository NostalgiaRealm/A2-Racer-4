
/* ==== FUN_004daa60 @ 004daa60 ==== 
 * signature: undefined4 * __fastcall FUN_004daa60(int param_1)
 * body: 004daa60-004dab5d
 */

undefined4 * __fastcall FUN_004daa60(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005706f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x7c);
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
    local_4._0_1_ = 1;
    FUN_004da020(puVar2 + 10,param_1 + 0x28);
    uVar1 = *(undefined1 *)(param_1 + 0x3c);
    *puVar2 = &PTR_FUN_0057797c;
    *(undefined1 *)(puVar2 + 0xf) = uVar1;
    local_4._0_1_ = 2;
    FUN_004da020(puVar2 + 0x10,param_1 + 0x40);
    local_4._0_1_ = 3;
    FUN_004da020(puVar2 + 0x15,param_1 + 0x54);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004dd830(puVar2 + 0x1a,param_1 + 0x68);
    *puVar2 = &PTR_FUN_00577930;
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


