
/* ==== TReader.vmt_020 @ 00415334 ==== 
 * signature: undefined TReader.vmt_020(void)
 * body: 00415334-00415349
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TReader_vmt_020(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x4a) != 0) {
    (**(code **)(param_1 + 0x48))(*(undefined4 *)(param_1 + 0x4c),param_1,param_2);
  }
  return;
}


