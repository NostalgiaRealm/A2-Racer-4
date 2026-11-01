
/* ==== TCustomForm.dyn_0011 @ 00448ee4 ==== 
 * signature: undefined TCustomForm.dyn_0011(void)
 * body: 00448ee4-00448f0f
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0011(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xd0))();
  if (cVar1 != '\0') {
    cVar1 = FUN_0040c77c();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_00448f07;
    }
  }
  uVar2 = 0;
LAB_00448f07:
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  return;
}


