
/* ==== TButton.dyn_b007 @ 00428be0 ==== 
 * signature: undefined __register TButton.dyn_b007(int * param_1, int param_2)
 * body: 00428be0-00428c30
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TButton_dyn_b007(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TWinControl_vmt_000_00424244);
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


