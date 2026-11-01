
/* ==== FUN_00555423 @ 00555423 ==== 
 * signature: undefined1 * __stdcall FUN_00555423(void)
 * body: 00555423-005554f1
 */

undefined1 * FUN_00555423(void)

{
  int iVar1;
  undefined1 *this;
  uint uVar2;
  int unaff_EBP;
  uint uVar3;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_004028f0((void *)(unaff_EBP + -0x20),'\0');
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar3 = *(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 0xc);
  uVar2 = uVar3;
  while( true ) {
    FUN_0047eab0((void *)(unaff_EBP + -0x20),uVar2,0);
    FUN_00471de0((void *)(unaff_EBP + -0x20));
    iVar1 = *(int *)(unaff_EBP + -0x1c);
    FUN_00471de0((void *)(unaff_EBP + -0x20));
    if (uVar3 <= (-(uint)(iVar1 != 0) & *(int *)(unaff_EBP + -0x18) + iVar1) -
                 *(int *)(unaff_EBP + -0x1c)) {
      FUN_0055b3c0(*(undefined4 **)(unaff_EBP + -0x1c),*(undefined4 **)(unaff_EBP + 0xc),uVar3);
    }
    if (uVar3 <= *(uint *)(unaff_EBP + -0x18)) break;
    uVar2 = uVar3 - *(int *)(unaff_EBP + -0x18);
  }
  FUN_00555f1f((void *)(unaff_EBP + -0x20),uVar3);
  this = *(undefined1 **)(unaff_EBP + 8);
  *this = *(undefined1 *)(unaff_EBP + -0x20);
  FUN_004028f0(this,'\0');
  FUN_004093c0(this,(void *)(unaff_EBP + -0x20),0,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004028f0((void *)(unaff_EBP + -0x20),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


