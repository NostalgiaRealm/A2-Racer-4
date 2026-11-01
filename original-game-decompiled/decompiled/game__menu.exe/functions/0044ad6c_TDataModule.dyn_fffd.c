
/* ==== TDataModule.dyn_fffd @ 0044ad6c ==== 
 * signature: undefined TDataModule.dyn_fffd(void)
 * body: 0044ad6c-0044add6
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDataModule_dyn_fffd
               (int param_1,int param_2,undefined4 param_3,code *param_4,undefined4 param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  TComponent_dyn_fffd();
  if (param_1 == param_2) {
    uStack_c = FUN_00415b9c(param_1);
    if (-1 < uStack_c + -1) {
      uStack_8 = 0;
      do {
        piVar2 = (int *)FUN_00415b70(param_1,uStack_8);
        cVar1 = FUN_00403178(piVar2,extraout_EDX,extraout_ECX);
        if (cVar1 == '\0') {
          (*param_4)(param_5,piVar2);
        }
        uStack_8 = uStack_8 + 1;
        uStack_c = uStack_c + -1;
      } while (uStack_c != 0);
    }
  }
  return;
}


