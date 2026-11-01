
/* ==== TWinControl.vmt_014 @ 00430b84 ==== 
 * signature: undefined __register TWinControl.vmt_014(int * param_1, int * param_2)
 * body: 00430b84-00430bc3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_014(int *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  
  pcStack_10 = (code *)0x430b96;
  FUN_00431324((int)param_1);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  TControl_vmt_014(param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00430bcb;
  pcStack_14 = (code *)0x430bc3;
  FUN_0043132c((int)param_1);
  return;
}


