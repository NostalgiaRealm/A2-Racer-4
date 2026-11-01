
/* ==== TReader.vmt_018 @ 00413488 ==== 
 * signature: int __register TReader.vmt_018(int param_1, int * param_2, undefined4 * param_3)
 * body: 00413488-004134ed
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int TReader_vmt_018(int param_1,int *param_2,undefined4 *param_3)

{
  int local_114;
  char local_110 [4];
  byte local_10c [256];
  
  FUN_00403eb8(local_10c,param_3,0xff);
  local_114 = FUN_004031fc(*param_2,local_10c);
  local_110[0] = local_114 == 0;
  if (*(short *)(param_1 + 0x3a) != 0) {
    (**(code **)(param_1 + 0x38))
              (*(undefined4 *)(param_1 + 0x3c),param_1,param_3,local_110,&local_114);
  }
  if (local_110[0] != '\0') {
    FUN_004132b4();
  }
  return local_114;
}


