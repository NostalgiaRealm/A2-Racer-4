
/* ==== TWinControl.dyn_ffbd @ 00429188 ==== 
 * signature: undefined __register TWinControl.dyn_ffbd(int param_1, char * param_2, undefined4 * param_3)
 * body: 00429188-004291ab
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffbd(int param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00413ecc(*(int *)(param_1 + 4),param_2);
  uVar2 = FUN_00402ea4(piVar1,(int)&PTR_TControl_vmt_000_00420b14);
  *param_3 = uVar2;
  return;
}


