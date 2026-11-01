
/* ==== TCustomTabControl.vmt_0b8 @ 00484adc ==== 
 * signature: undefined __register TCustomTabControl.vmt_0b8(int param_1, undefined4 param_2, RECT * param_3, undefined1 param_4)
 * body: 00484adc-00484b14
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomTabControl_vmt_0b8(int param_1,undefined4 param_2,RECT *param_3,undefined1 param_4)

{
  if (*(short *)(param_1 + 0x232) == 0) {
    FUN_0041907c(*(int **)(param_1 + 0x1f0),param_3);
  }
  else {
    (**(code **)(param_1 + 0x230))(*(undefined4 *)(param_1 + 0x234),param_1,param_2,param_4,param_3)
    ;
  }
  return;
}


