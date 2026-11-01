
/* ==== FUN_004d6670 @ 004d6670 ==== 
 * signature: undefined __stdcall FUN_004d6670(void)
 * body: 004d6670-004d66cd
 */

void FUN_004d6670(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  uVar2 = DAT_0074b8a8;
  pcStack_8 = FUN_005700f8;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(DAT_0074b8a8 + 4);
  ExceptionList = &local_c;
  if ((iVar1 != 0) && (ExceptionList = &local_c, iVar1 != -1)) {
    ExceptionList = &local_c;
    *(int *)(DAT_0074b8a8 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074b8a8 = 0;
  ExceptionList = local_c;
  return;
}


