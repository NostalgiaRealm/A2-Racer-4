
/* ==== FUN_005542dc @ 005542dc ==== 
 * signature: undefined __stdcall FUN_005542dc(void)
 * body: 005542dc-00554392
 */

void FUN_005542dc(void)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_0055b39c();
  uVar1 = DAT_0074db6c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (uVar1 == 0) {
    DAT_0074dafc = DAT_0074dafc + 1;
    DAT_0074db6c = DAT_0074dafc;
    uVar1 = DAT_0074dafc;
  }
  iVar2 = FUN_0054ca8b(*(void **)(unaff_EBP + 8),uVar1,'\x01');
  if (iVar2 == 0) {
    if (*(char *)(unaff_EBP + 0x10) != '\0') {
      iVar2 = FUN_0054caca(*(int **)(unaff_EBP + 8));
      if ((char)iVar2 != '\0') {
        if (DAT_0074dba4 == 0) {
          pvVar3 = operator_new(0xc);
          *(void **)(unaff_EBP + 0x10) = pvVar3;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (pvVar3 == (void *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = FUN_00554708();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          DAT_0074dba4 = FUN_00554ace((int)puVar4);
        }
        goto LAB_0055435f;
      }
    }
    *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_005b6f34;
    FUN_00558853((void *)(unaff_EBP + -0x18),(undefined4 *)(unaff_EBP + 0x10));
    *(undefined ***)(unaff_EBP + -0x18) = &PTR_FUN_0057915c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_00584188);
  }
LAB_0055435f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


