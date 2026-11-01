
/* ==== FUN_00557a7f @ 00557a7f ==== 
 * signature: undefined __stdcall FUN_00557a7f(void)
 * body: 00557a7f-00557ac9
 */

void FUN_00557a7f(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dc24;
  uStack00000008 = 0;
  iVar1 = *(int *)(DAT_0074dc24 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dc24 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dc24 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


