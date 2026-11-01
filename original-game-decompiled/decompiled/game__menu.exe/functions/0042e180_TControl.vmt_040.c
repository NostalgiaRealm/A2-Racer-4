
/* ==== TControl.vmt_040 @ 0042e180 ==== 
 * signature: undefined TControl.vmt_040(void)
 * body: 0042e180-0042e195
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


