
/* ==== TWinControlWrapper.vmt_09c @ 004656e8 ==== 
 * signature: undefined __register TWinControlWrapper.vmt_09c(int param_1, undefined4 param_2)
 * body: 004656e8-0046570a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControlWrapper_vmt_09c(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x152) != 0) {
    (**(code **)(param_1 + 0x150))(*(undefined4 *)(param_1 + 0x154),param_1,param_2);
  }
  return;
}


