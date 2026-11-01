
/* ==== TReader.vmt_024 @ 004125f0 ==== 
 * signature: undefined __register TReader.vmt_024(int param_1, byte * param_2, int * param_3)
 * body: 004125f0-00412629
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TReader_vmt_024(int param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  *param_2 = 0;
  bVar1 = FUN_00411b50(param_1,param_2,(uint)param_3);
  if ((bVar1 & 0xf0) == 0xf0) {
    uVar2 = FUN_00413310(param_1,extraout_EDX,extraout_ECX);
    *param_2 = (byte)uVar2 & 0xf;
    if ((*param_2 & 2) != 0) {
      iVar3 = FUN_00412530(param_1,extraout_EDX_00,extraout_ECX_00);
      *param_3 = iVar3;
    }
  }
  return;
}


