
/* ==== FUN_00557bf6 @ 00557bf6 ==== 
 * signature: undefined __stdcall FUN_00557bf6(void)
 * body: 00557bf6-00557c40
 */

void FUN_00557bf6(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dc38;
  uStack00000008 = 0;
  iVar1 = *(int *)(DAT_0074dc38 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dc38 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dc38 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


