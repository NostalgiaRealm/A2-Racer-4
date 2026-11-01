
/* ==== TWinControlWrapper.vmt_098 @ 004656bc ==== 
 * signature: undefined __register TWinControlWrapper.vmt_098(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 004656bc-004656e7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControlWrapper_vmt_098(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x14a) != 0) {
    (**(code **)(param_1 + 0x148))(*(undefined4 *)(param_1 + 0x14c),param_1,param_2,param_3);
  }
  return;
}


