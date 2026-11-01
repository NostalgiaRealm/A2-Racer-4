
/* ==== TControlScrollBar.vmt_008 @ 00439fec ==== 
 * signature: undefined TControlScrollBar.vmt_008(void)
 * body: 00439fec-0043a03a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControlScrollBar_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_vmt_000_0043753c);
  if ((char)uVar1 == '\0') {
    TPersistent_vmt_008(param_1,param_2);
  }
  else {
    TControlScrollBar_set_Visible((int)param_1,(char)param_2[7]);
    TControlScrollBar_set_Range((int)param_1,param_2[4]);
    TControlScrollBar_set_Position((int)param_1,param_2[3]);
    *(short *)(param_1 + 2) = (short)param_2[2];
  }
  return;
}


