
/* ==== TReader.vmt_010 @ 00413468 ==== 
 * signature: undefined TReader.vmt_010(void)
 * body: 00413468-00413487
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

uint TReader_vmt_010(int param_1,undefined4 param_2,uint param_3)

{
  uint uStack_8;
  
  uStack_8 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0x5a) != 0) {
    (**(code **)(param_1 + 0x58))(*(undefined4 *)(param_1 + 0x5c),param_1,param_2,&uStack_8);
  }
  return uStack_8 & 0xff;
}


