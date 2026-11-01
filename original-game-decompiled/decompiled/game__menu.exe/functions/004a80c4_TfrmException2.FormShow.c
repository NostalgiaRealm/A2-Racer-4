
/* ==== TfrmException2.FormShow @ 004a80c4 ==== 
 * signature: undefined __register TfrmException2.FormShow(int * param_1)
 * body: 004a80c4-004a80ed
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmException2_FormShow(int *param_1)

{
  int iVar1;
  int extraout_EDX;
  int iVar2;
  int extraout_EDX_00;
  
  iVar1 = param_1[0xf] - *(int *)(param_1[0xb9] + 0x3c);
  if (SBORROW4(param_1[0xf],*(int *)(param_1[0xb9] + 0x3c))) {
    param_1 = (int *)thunk_FUN_00402808((uint)param_1);
    iVar1 = extraout_EDX;
  }
  iVar2 = iVar1 + -8;
  if (SBORROW4(iVar1,8)) {
    param_1 = (int *)thunk_FUN_00402808((uint)param_1);
    iVar2 = extraout_EDX_00;
  }
  TControl_set_Height(param_1,iVar2);
  return;
}


