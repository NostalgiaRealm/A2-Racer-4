
/* ==== TCustomForm.dyn_ffb7 @ 0044a424 ==== 
 * signature: undefined TCustomForm.dyn_ffb7(void)
 * body: 0044a424-0044a459
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_ffb7(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20c) == 0) {
    TWinControl_dyn_ffb7(param_1,param_2);
  }
  else {
    uVar1 = FUN_0042f720(*(int *)(param_1 + 0x20c),0xb043,*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = uVar1;
  }
  return;
}


