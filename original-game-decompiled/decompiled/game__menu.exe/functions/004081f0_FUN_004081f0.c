
/* ==== FUN_004081f0 @ 004081f0 ==== 
 * signature: undefined __register FUN_004081f0(byte * param_1, int * param_2)
 * body: 004081f0-00408229
 */

void FUN_004081f0(byte *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = FUN_00403edc((int)param_1);
  FUN_00404210(param_2,uVar2);
  pbVar3 = (byte *)*param_2;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    bVar1 = *param_1;
    if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
      bVar1 = bVar1 - 0x20;
    }
    *pbVar3 = bVar1;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 1;
  }
  return;
}


