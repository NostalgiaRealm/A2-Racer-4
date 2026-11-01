
/* ==== FUN_0055409f @ 0055409f ==== 
 * signature: undefined __stdcall FUN_0055409f(void)
 * body: 0055409f-00554161
 */

void FUN_0055409f(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  bool bVar4;
  
  FUN_0055b39c();
  uVar1 = DAT_0074db70;
  bVar4 = DAT_0074db70 == 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (bVar4) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db70 = DAT_0074dafc;
    uVar1 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(void **)(unaff_EBP + 8),uVar1,'\x01');
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      iVar2 = FUN_0054caca(*(int **)(unaff_EBP + 8));
      if ((char)iVar2 != '\0') {
        if (DAT_0074db98 == 0) {
          puVar3 = operator_new(0x2c);
          *(undefined4 **)(unaff_EBP + 0x10) = puVar3;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            FUN_00554b1a();
            *puVar3 = &PTR_FUN_00579208;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074db98 = FUN_00554a5c((int)puVar3);
        }
        goto LAB_0055412d;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853((void *)(unaff_EBP + -0x18),(undefined4 *)(unaff_EBP + 0x10));
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0055412d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


