
/* ==== TControl.vmt_040 @ 00424240 ==== 
 * signature: undefined TControl.vmt_040(void)
 * body: 00424240-00424255
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_040(int param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = *(undefined4 *)(param_1 + 0x38);
  param_2[3] = *(undefined4 *)(param_1 + 0x3c);
  return;
}


