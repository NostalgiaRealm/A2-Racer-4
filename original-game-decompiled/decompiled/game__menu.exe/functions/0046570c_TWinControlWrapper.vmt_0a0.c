
/* ==== TWinControlWrapper.vmt_0a0 @ 0046570c ==== 
 * signature: undefined __register TWinControlWrapper.vmt_0a0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0046570c-00465737
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControlWrapper_vmt_0a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x15a) != 0) {
    (**(code **)(param_1 + 0x158))(*(undefined4 *)(param_1 + 0x15c),param_1,param_2,param_3);
  }
  return;
}


