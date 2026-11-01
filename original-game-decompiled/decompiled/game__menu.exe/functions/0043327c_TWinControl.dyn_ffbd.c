
/* ==== TWinControl.dyn_ffbd @ 0043327c ==== 
 * signature: undefined __register TWinControl.dyn_ffbd(int param_1, char * param_2, undefined4 * param_3)
 * body: 0043327c-0043329f
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffbd(int param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00415a80(*(int *)(param_1 + 4),param_2);
  uVar2 = FUN_0040312c(piVar1,(int)&PTR_TControl_vmt_000_0042a694);
  *param_3 = uVar2;
  return;
}


