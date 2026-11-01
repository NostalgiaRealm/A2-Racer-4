
/* ==== FUN_004d65b0 @ 004d65b0 ==== 
 * signature: undefined __stdcall FUN_004d65b0(void)
 * body: 004d65b0-004d660d
 */

void FUN_004d65b0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  uVar2 = DAT_0074b8a0;
  pcStack_8 = FUN_005700b8;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(DAT_0074b8a0 + 4);
  ExceptionList = &local_c;
  if ((iVar1 != 0) && (ExceptionList = &local_c, iVar1 != -1)) {
    ExceptionList = &local_c;
    *(int *)(DAT_0074b8a0 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074b8a0 = 0;
  ExceptionList = local_c;
  return;
}


