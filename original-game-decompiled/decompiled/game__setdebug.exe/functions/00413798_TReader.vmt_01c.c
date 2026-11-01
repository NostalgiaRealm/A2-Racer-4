
/* ==== TReader.vmt_01c @ 00413798 ==== 
 * signature: undefined TReader.vmt_01c(void)
 * body: 00413798-004137bf
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TReader_vmt_01c(int param_1,int *param_2,undefined4 *param_3)

{
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1,param_2,param_3);
  }
  (**(code **)(*param_2 + 0x18))(param_2,*param_3);
  return;
}


