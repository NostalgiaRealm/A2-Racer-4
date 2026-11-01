
/* ==== TGameMenuScreen.vmt_0ec @ 0049e868 ==== 
 * signature: undefined TGameMenuScreen.vmt_0ec(void)
 * body: 0049e868-0049e8a7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGameMenuScreen_vmt_0ec(int *param_1)

{
  int *piVar1;
  
  if (param_1[0xb9] != 0) {
    piVar1 = (int *)FUN_0048f760(param_1[0xb9]);
    piVar1 = (int *)FUN_0040312c(piVar1,(int)&PTR_TWinControl_vmt_000_0049e19c);
    (**(code **)(*piVar1 + 0xf4))();
    (**(code **)(*param_1 + 0xf0))();
    FUN_00449d0c(param_1);
  }
  return;
}


