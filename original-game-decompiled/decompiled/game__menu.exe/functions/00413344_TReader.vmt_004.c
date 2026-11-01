
/* ==== TReader.vmt_004 @ 00413344 ==== 
 * signature: undefined __register TReader.vmt_004(int param_1, char * param_2)
 * body: 00413344-00413377
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TReader_vmt_004(int param_1,char *param_2)

{
  undefined4 uVar1;
  code *in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  uVar1 = FUN_0040830c(param_2,*(char **)(param_1 + 0x70));
  if (((char)uVar1 != '\0') && (in_stack_0000000c._2_2_ != 0)) {
    (*in_stack_0000000c)(in_stack_00000010,param_1);
    FUN_00403c5c((int *)(param_1 + 0x70));
  }
  return;
}


