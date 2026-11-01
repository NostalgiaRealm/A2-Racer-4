
/* ==== FUN_00557aca @ 00557aca ==== 
 * signature: undefined __stdcall FUN_00557aca(void)
 * body: 00557aca-00557b14
 */

void FUN_00557aca(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dc28;
  uStack00000008 = 0;
  iVar1 = *(int *)(DAT_0074dc28 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dc28 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dc28 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


