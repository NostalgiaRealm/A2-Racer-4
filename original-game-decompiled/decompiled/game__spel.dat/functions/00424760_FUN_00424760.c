
/* ==== FUN_00424760 @ 00424760 ==== 
 * signature: undefined __fastcall FUN_00424760(undefined4 * param_1)
 * body: 00424760-00424839
 */

void __fastcall FUN_00424760(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569f99;
  ExceptionList = &local_c;
  pvVar1 = (LPVOID)param_1[1];
  *param_1 = &PTR_FUN_0057654c;
  if (pvVar1 == (LPVOID)0x0) {
    param_1[1] = 0;
    ExceptionList = local_c;
    return;
  }
  iVar2 = *(int *)((int)pvVar1 + 8);
  for (iVar3 = *(int *)((int)pvVar1 + 4); iVar3 != iVar2; iVar3 = iVar3 + 0x60) {
    local_4 = 3;
    FUN_004900b0(iVar3 + 0x50);
    local_4._0_1_ = 2;
    FUN_004900b0(iVar3 + 0x30);
    local_4._0_1_ = 1;
    FUN_004900b0(iVar3 + 0x20);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004900b0(iVar3 + 0x10);
    local_4 = 0xffffffff;
    FUN_004900b0(iVar3);
  }
  FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
  *(undefined4 *)((int)pvVar1 + 4) = 0;
  *(undefined4 *)((int)pvVar1 + 8) = 0;
  *(undefined4 *)((int)pvVar1 + 0xc) = 0;
  FUN_0054b339(pvVar1);
  param_1[1] = 0;
  ExceptionList = local_c;
  return;
}


