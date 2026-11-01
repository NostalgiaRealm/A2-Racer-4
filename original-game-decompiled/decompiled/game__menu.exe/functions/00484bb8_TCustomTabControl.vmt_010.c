
/* ==== TCustomTabControl.vmt_010 @ 00484bb8 ==== 
 * signature: undefined __register TCustomTabControl.vmt_010(int * param_1, int param_2, char param_3)
 * body: 00484bb8-00484be5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomTabControl_vmt_010(int *param_1,int param_2,char param_3)

{
  TControl_vmt_010(param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == param_1[0x7f])) {
    TPageControl_set_Images((int)param_1,0);
  }
  return;
}


