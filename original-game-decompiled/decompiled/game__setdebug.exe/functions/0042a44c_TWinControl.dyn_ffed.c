
/* ==== TWinControl.dyn_ffed @ 0042a44c ==== 
 * signature: undefined __register TWinControl.dyn_ffed(int * param_1, int param_2, int param_3)
 * body: 0042a44c-0042a49c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffed(int *param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x42a461;
  FUN_00427384((int)param_1);
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  FUN_0042a404((int)param_1,param_2,param_3);
  TControl_dyn_ffed(param_1,param_2,param_3);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0042a4a4;
  pcStack_18 = (code *)0x42a49c;
  FUN_0042738c((int)param_1);
  return;
}


