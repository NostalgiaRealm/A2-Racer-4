
/* ==== FUN_004d1360 @ 004d1360 ==== 
 * signature: undefined __stdcall FUN_004d1360(void)
 * body: 004d1360-004d13bd
 */

void FUN_004d1360(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  uVar2 = DAT_0074b890;
  pcStack_8 = FUN_0056fa98;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(DAT_0074b890 + 4);
  ExceptionList = &local_c;
  if ((iVar1 != 0) && (ExceptionList = &local_c, iVar1 != -1)) {
    ExceptionList = &local_c;
    *(int *)(DAT_0074b890 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074b890 = 0;
  ExceptionList = local_c;
  return;
}


