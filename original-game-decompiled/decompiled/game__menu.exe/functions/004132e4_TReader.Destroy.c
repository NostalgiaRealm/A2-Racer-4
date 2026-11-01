
/* ==== TReader.Destroy @ 004132e4 ==== 
 * signature: undefined TReader.Destroy(void)
 * body: 004132e4-0041331c
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TReader_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  (**(code **)(*(int *)piVar1[1] + 0xc))((int *)piVar1[1],piVar1[4] - piVar1[5],1);
  TFiler_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


