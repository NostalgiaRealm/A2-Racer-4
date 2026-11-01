
/* ==== TGameMenuScreen.vmt_0e8 @ 0049e81c ==== 
 * signature: undefined TGameMenuScreen.vmt_0e8(void)
 * body: 0049e81c-0049e864
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGameMenuScreen_vmt_0e8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0048f760(param_2);
  piVar1 = (int *)FUN_0040312c(piVar1,(int)&PTR_TWinControl_vmt_000_0049e19c);
  iVar2 = FUN_00402ee0(param_1);
  piVar1[0xb9] = iVar2;
  (**(code **)(*param_1 + 0xf0))();
  (**(code **)(*piVar1 + 0xf4))();
  FUN_00449d0c(param_1);
  return;
}


