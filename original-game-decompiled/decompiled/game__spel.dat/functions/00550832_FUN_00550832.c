
/* ==== FUN_00550832 @ 00550832 ==== 
 * signature: undefined1 * __stdcall FUN_00550832(void)
 * body: 00550832-00550908
 */

undefined1 * FUN_00550832(void)

{
  int iVar1;
  undefined1 *this;
  uint uVar2;
  int unaff_EBP;
  uint uVar3;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_00553734((void *)(unaff_EBP + -0x20),'\0');
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar3 = *(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 0xc) >> 1;
  uVar2 = uVar3;
  while( true ) {
    FUN_00553039((void *)(unaff_EBP + -0x20),uVar2,0);
    FUN_0055367f((void *)(unaff_EBP + -0x20));
    iVar1 = *(int *)(unaff_EBP + -0x1c);
    FUN_0055367f((void *)(unaff_EBP + -0x20));
    if (uVar3 <= (uint)((int)((-(uint)(iVar1 != 0) & iVar1 + *(int *)(unaff_EBP + -0x18) * 2) -
                             *(int *)(unaff_EBP + -0x1c)) >> 1)) {
      FUN_0055b3c0(*(undefined4 **)(unaff_EBP + -0x1c),*(undefined4 **)(unaff_EBP + 0xc),uVar3 * 2);
    }
    if (uVar3 <= *(uint *)(unaff_EBP + -0x18)) break;
    uVar2 = uVar3 - *(int *)(unaff_EBP + -0x18);
  }
  FUN_005530a2((void *)(unaff_EBP + -0x20),uVar3);
  this = *(undefined1 **)(unaff_EBP + 8);
  *this = *(undefined1 *)(unaff_EBP + -0x20);
  FUN_00553734(this,'\0');
  FUN_005533c1(this,(void *)(unaff_EBP + -0x20),0,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00553734((void *)(unaff_EBP + -0x20),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


