
/* ==== TPageControl.vmt_0ac @ 00485ff0 ==== 
 * signature: undefined TPageControl.vmt_0ac(void)
 * body: 00485ff0-00486023
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPageControl_vmt_0ac(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TWinControl_vmt_000_00483258);
  if (((char)uVar1 != '\0') && (param_1 == (int *)param_2[0x7d])) {
    TPageControl_set_ActivePage(param_1,param_2);
  }
  TWinControl_vmt_0ac((int)param_1);
  return;
}


