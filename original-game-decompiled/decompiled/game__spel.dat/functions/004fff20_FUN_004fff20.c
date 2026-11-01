
/* ==== FUN_004fff20 @ 004fff20 ==== 
 * signature: undefined __fastcall FUN_004fff20(int param_1)
 * body: 004fff20-004fffa1
 */

void __fastcall FUN_004fff20(int param_1)

{
  LPVOID pvVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573666;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_004ffd20(param_1);
  pvVar1 = *(LPVOID *)(param_1 + 0x20);
  if (pvVar1 != (LPVOID)(param_1 + 0x24)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined2 *)(param_1 + 0x1c) = 0;
  }
  *(undefined2 *)(param_1 + 0x1e) = 0;
  pvVar1 = *(LPVOID *)(param_1 + 0x10);
  if (pvVar1 != (LPVOID)(param_1 + 0x14)) {
    if (pvVar1 != (LPVOID)0x0) {
      FUN_00559d4e(pvVar1);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined2 *)(param_1 + 0xc) = 0;
  }
  *(undefined2 *)(param_1 + 0xe) = 0;
  ExceptionList = local_c;
  return;
}


