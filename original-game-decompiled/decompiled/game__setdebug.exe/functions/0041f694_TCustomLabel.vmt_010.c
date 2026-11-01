
/* ==== TCustomLabel.vmt_010 @ 0041f694 ==== 
 * signature: undefined __register TCustomLabel.vmt_010(int * param_1, int param_2, char param_3)
 * body: 0041f694-0041f6c0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomLabel_vmt_010(int *param_1,int param_2,char param_3)

{
  TControl_vmt_010(param_1,param_2,param_3);
  if ((param_3 == '\x01') && (param_2 == param_1[0x4a])) {
    param_1[0x4a] = 0;
  }
  return;
}


