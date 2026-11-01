
/* ==== FUN_00554e1c @ 00554e1c ==== 
 * signature: undefined __stdcall FUN_00554e1c(void)
 * body: 00554e1c-00554e66
 */

void FUN_00554e1c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *unaff_retaddr;
  undefined4 uStack00000008;
  
  FUN_0055b39c();
  uVar2 = DAT_0074dbd0;
  uStack00000008 = 0;
  iVar1 = *(int *)(DAT_0074dbd0 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(DAT_0074dbd0 + 4) = iVar1 + -1;
  }
  puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  DAT_0074dbd0 = 0;
  ExceptionList = unaff_retaddr;
  return;
}


