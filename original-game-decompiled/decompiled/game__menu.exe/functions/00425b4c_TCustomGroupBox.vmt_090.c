
/* ==== TCustomGroupBox.vmt_090 @ 00425b4c ==== 
 * signature: undefined TCustomGroupBox.vmt_090(void)
 * body: 00425b4c-00425b5b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGroupBox_vmt_090(int *param_1,int *param_2)

{
  TWinControl_vmt_090(param_1,param_2);
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}


