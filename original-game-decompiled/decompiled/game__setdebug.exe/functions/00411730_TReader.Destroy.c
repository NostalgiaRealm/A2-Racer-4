
/* ==== TReader.Destroy @ 00411730 ==== 
 * signature: undefined TReader.Destroy(void)
 * body: 00411730-00411768
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TReader_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  (**(code **)(*(int *)piVar1[1] + 0xc))((int *)piVar1[1],piVar1[4] - piVar1[5],1);
  TFiler_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


