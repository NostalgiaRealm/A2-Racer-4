
/* ==== TCustomDockForm.dyn_0084 @ 0043fc94 ==== 
 * signature: undefined TCustomDockForm.dyn_0084(void)
 * body: 0043fc94-0043fcb8
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomDockForm_dyn_0084(int *param_1,int param_2)

{
  TWinControl_dyn_0084(param_1,param_2);
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && (*(int *)(param_2 + 0xc) == 1)) {
    *(undefined4 *)(param_2 + 0xc) = 2;
  }
  return;
}


