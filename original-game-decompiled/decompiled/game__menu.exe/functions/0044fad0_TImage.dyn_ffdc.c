
/* ==== TImage.dyn_ffdc @ 0044fad0 ==== 
 * signature: undefined TImage.dyn_ffdc(void)
 * body: 0044fad0-0044faea
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined4 TImage_dyn_ffdc(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x128) + 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x24))();
  }
  return uVar2;
}


