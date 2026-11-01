
/* ==== TCustomForm.dyn_0011 @ 0043e534 ==== 
 * signature: undefined TCustomForm.dyn_0011(void)
 * body: 0043e534-0043e55f
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0011(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xd0))();
  if (cVar1 != '\0') {
    cVar1 = FUN_0040ba8c();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_0043e557;
    }
  }
  uVar2 = 0;
LAB_0043e557:
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  return;
}


