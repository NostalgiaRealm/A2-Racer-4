
/* ==== TButton.dyn_b007 @ 0041fbe8 ==== 
 * signature: undefined __register TButton.dyn_b007(int * param_1, int param_2)
 * body: 0041fbe8-0041fc38
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TButton_dyn_b007(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TWinControl_vmt_000_0041eb94);
  if ((char)uVar2 == '\0') {
    *(char *)((int)param_1 + 0x1fa) = (char)param_1[0x7e];
  }
  else {
    *(bool *)((int)param_1 + 0x1fa) = param_1 == piVar1;
  }
  (**(code **)(*param_1 + 0xbc))(param_1,*(undefined1 *)((int)param_1 + 0x1fa));
  TWinControl_dyn_b007((int)param_1,param_2);
  return;
}


