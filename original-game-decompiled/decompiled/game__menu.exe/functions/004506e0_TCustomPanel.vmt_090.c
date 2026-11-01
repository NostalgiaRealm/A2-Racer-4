
/* ==== TCustomPanel.vmt_090 @ 004506e0 ==== 
 * signature: undefined TCustomPanel.vmt_090(void)
 * body: 004506e0-00450731
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomPanel_vmt_090(int *param_1,int *param_2)

{
  TWinControl_vmt_090(param_1,param_2);
  param_2[1] = param_2[1] | *(uint *)(&DAT_004aaa6c + (uint)*(byte *)(param_1 + 0x81) * 4);
  if (((*PTR_DAT_004ab7d4 != '\0') && ((char)param_1[0x4e] != '\0')) &&
     ((char)param_1[0x81] == '\x01')) {
    param_2[1] = param_2[1] & 0xff7fffff;
    param_2[2] = param_2[2] | 0x200;
  }
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}


