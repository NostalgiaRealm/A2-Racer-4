
/* ==== FUN_004e1570 @ 004e1570 ==== 
 * signature: undefined4 * __fastcall FUN_004e1570(int param_1)
 * body: 004e1570-004e1631
 */

undefined4 * __fastcall FUN_004e1570(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571423;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x50);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar2 = puVar1 + 3;
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0xc);
    FUN_004028f0(puVar2,'\0');
    FUN_004093c0(puVar2,(undefined1 *)(param_1 + 0xc),0,0xffffffff);
    puVar1[7] = *(undefined4 *)(param_1 + 0x1c);
    puVar1[8] = *(undefined4 *)(param_1 + 0x20);
    *(undefined2 *)(puVar1 + 9) = *(undefined2 *)(param_1 + 0x24);
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined1 *)((int)puVar1 + 0x29) = 0;
    *puVar1 = &PTR_FUN_00577d44;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004cef20(puVar1 + 0xc,param_1 + 0x30);
    puVar1[0xc] = &PTR_FUN_005778c0;
    *(undefined1 *)(puVar1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
    *puVar1 = &PTR_FUN_00577f68;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


