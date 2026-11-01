
/* ==== FUN_0050a3e0 @ 0050a3e0 ==== 
 * signature: undefined __fastcall FUN_0050a3e0(undefined4 * param_1)
 * body: 0050a3e0-0050a452
 */

void __fastcall FUN_0050a3e0(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  pcStack_8 = FUN_00573818;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00578344;
  iVar2 = param_1[1];
  local_4 = 0;
  for (; -1 < iVar2; iVar2 = iVar2 + -1) {
    pvVar1 = *(LPVOID *)(param_1[3] + 4 + iVar2 * 8);
    if (pvVar1 != (LPVOID)0x0) {
      FUN_004f65e0((int)pvVar1);
      FUN_0054b339(pvVar1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00501140(param_1);
  ExceptionList = local_c;
  return;
}


