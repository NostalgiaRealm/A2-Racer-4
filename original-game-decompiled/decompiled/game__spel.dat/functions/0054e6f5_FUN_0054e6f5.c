
/* ==== FUN_0054e6f5 @ 0054e6f5 ==== 
 * signature: undefined __stdcall FUN_0054e6f5(void)
 * body: 0054e6f5-0054e7ab
 */

void FUN_0054e6f5(void)

{
  uint uVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  uVar1 = DAT_0074db04;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (uVar1 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db04 = DAT_0074dafc;
    uVar1 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(void **)(unaff_EBP + 8),uVar1,'\x01');
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      iVar2 = FUN_0054caca(*(int **)(unaff_EBP + 8));
      if ((char)iVar2 != '\0') {
        if (DAT_0074b88c == 0) {
          this = operator_new(0x10);
          *(void **)(unaff_EBP + 0x10) = this;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (this == (void *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = FUN_004d1210(this,0);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074b88c = FUN_004d1330((int)puVar3);
        }
        goto LAB_0054e778;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853((void *)(unaff_EBP + -0x18),(undefined4 *)(unaff_EBP + 0x10));
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0054e778:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


