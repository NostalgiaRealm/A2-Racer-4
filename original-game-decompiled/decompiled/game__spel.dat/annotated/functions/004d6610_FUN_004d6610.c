
/* ==== FUN_004d6610 @ 004d6610 ==== 
 * signature: undefined __stdcall FUN_004d6610(void)
 * body: 004d6610-004d666d
 */

void FUN_004d6610(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  uVar2 = DAT_0074b8a4;
  pcStack_8 = FUN_005700d8;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(DAT_0074b8a4 + 4);
  ExceptionList = &local_c;
  if ((iVar1 != 0) && (ExceptionList = &local_c, iVar1 != -1)) {
    ExceptionList = &local_c;
    *(int *)(DAT_0074b8a4 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074b8a4 = 0;
  ExceptionList = local_c;
  return;
}


