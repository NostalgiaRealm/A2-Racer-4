
/* ==== TWinControl.dyn_ffed @ 00434540 ==== 
 * signature: undefined __register TWinControl.dyn_ffed(int * param_1, int param_2, int param_3)
 * body: 00434540-00434590
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffed(int *param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x434555;
  FUN_00431324((int)param_1);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  FUN_004344f8((int)param_1,param_2,param_3);
  TControl_dyn_ffed(param_1,param_2,param_3);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00434598;
  pcStack_18 = (code *)0x434590;
  FUN_0043132c((int)param_1);
  return;
}


