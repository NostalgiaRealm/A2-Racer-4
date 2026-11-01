
/* ==== TCustomForm.dyn_b010 @ 00447950 ==== 
 * signature: undefined TCustomForm.dyn_b010(void)
 * body: 00447950-00447997
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b010(int param_1,undefined4 param_2)

{
  int iVar1;
  
  TWinControl_dyn_b010(param_1,param_2);
  if (*(char *)(param_1 + 0x138) == '\0') {
    if (*(int *)(param_1 + 0x60) == -0x7ffffff1) {
      iVar1 = FUN_00447938(param_1);
      TGroupBox_set_Color(param_1,iVar1);
    }
  }
  else {
    iVar1 = FUN_00447938(param_1);
    if (iVar1 == *(int *)(param_1 + 0x60)) {
      TGroupBox_set_Color(param_1,-0x7ffffff1);
      return;
    }
  }
  return;
}


