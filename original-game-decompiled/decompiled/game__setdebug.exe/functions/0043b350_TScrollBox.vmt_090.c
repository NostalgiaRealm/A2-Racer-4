
/* ==== TScrollBox.vmt_090 @ 0043b350 ==== 
 * signature: undefined TScrollBox.vmt_090(void)
 * body: 0043b350-0043b39d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TScrollBox_vmt_090(int *param_1,int *param_2)

{
  TScrollingWinControl_vmt_090(param_1,param_2);
  param_2[1] = param_2[1] | *(uint *)(&DAT_004468e8 + (uint)*(byte *)(param_1 + 0x82) * 4);
  if (((*PTR_DAT_00446be0 != '\0') && ((char)param_1[0x4e] != '\0')) &&
     ((char)param_1[0x82] == '\x01')) {
    param_2[1] = param_2[1] & 0xff7fffff;
    param_2[2] = param_2[2] | 0x200;
  }
  return;
}


