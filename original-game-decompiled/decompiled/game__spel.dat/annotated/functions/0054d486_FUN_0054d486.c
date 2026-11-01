
/* ==== FUN_0054d486 @ 0054d486 ==== 
 * signature: undefined __stdcall FUN_0054d486(void)
 * body: 0054d486-0054d4fa
 */

void FUN_0054d486(void)

{
  int iVar1;
  uint *puVar2;
  void *this;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(void **)(unaff_EBP + -0x10) = this;
  iVar1 = *(int *)((int)this + 0x28);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    puVar2 = *(uint **)((int)this + 0x24);
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)&DAT_0057629c;
    }
    FUN_0055badc(0,puVar2);
  }
  FUN_004028f0((void *)((int)this + 0x30),'\x01');
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004028f0((void *)((int)this + 0x20),'\x01');
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004028f0((void *)((int)this + 0x10),'\x01');
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004028f0(this,'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


