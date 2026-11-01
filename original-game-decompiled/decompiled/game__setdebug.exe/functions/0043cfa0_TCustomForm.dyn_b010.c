
/* ==== TCustomForm.dyn_b010 @ 0043cfa0 ==== 
 * signature: undefined TCustomForm.dyn_b010(void)
 * body: 0043cfa0-0043cfe7
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b010(int param_1)

{
  int iVar1;
  
  TWinControl_dyn_b010(param_1);
  if (*(char *)(param_1 + 0x138) == '\0') {
    if (*(int *)(param_1 + 0x60) == -0x7ffffff1) {
      iVar1 = FUN_0043cf88(param_1);
      TLabel_set_Color(param_1,iVar1);
    }
  }
  else {
    iVar1 = FUN_0043cf88(param_1);
    if (iVar1 == *(int *)(param_1 + 0x60)) {
      TLabel_set_Color(param_1,-0x7ffffff1);
      return;
    }
  }
  return;
}


