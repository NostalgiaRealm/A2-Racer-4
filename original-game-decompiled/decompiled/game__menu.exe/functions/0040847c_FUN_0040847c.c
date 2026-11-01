
/* ==== FUN_0040847c @ 0040847c ==== 
 * signature: undefined __register FUN_0040847c(byte * param_1, int * param_2)
 * body: 0040847c-00408547
 */

void FUN_0040847c(byte *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  iVar2 = FUN_00403edc((int)param_1);
  pbVar5 = param_1 + iVar2;
  iVar2 = 0;
  for (pbVar3 = param_1; pbVar3 < pbVar5; pbVar3 = pbVar3 + 1) {
    bVar1 = *pbVar3;
    if (bVar1 == 10) {
      iVar2 = iVar2 + 1;
    }
    else if (bVar1 == 0xd) {
      if (pbVar3[1] == 10) {
        pbVar3 = pbVar3 + 1;
      }
      else {
        iVar2 = iVar2 + 1;
      }
    }
    else if (((byte)(&DAT_004aa118)[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0) {
      pbVar3 = pbVar3 + 1;
    }
  }
  if (iVar2 == 0) {
    FUN_00403cb0(param_2,(undefined4 *)param_1);
  }
  else {
    FUN_00403d44(param_2,(undefined4 *)0x0,(uint)(pbVar5 + (iVar2 - (int)param_1)));
    pbVar3 = (byte *)*param_2;
    while (pbVar4 = param_1, pbVar4 < pbVar5) {
      bVar1 = *pbVar4;
      if (bVar1 == 10) {
        *pbVar3 = 0xd;
        pbVar3[1] = 10;
        pbVar3 = pbVar3 + 2;
        param_1 = pbVar4 + 1;
      }
      else if (bVar1 == 0xd) {
        *pbVar3 = 0xd;
        pbVar3[1] = 10;
        pbVar3 = pbVar3 + 2;
        param_1 = pbVar4 + 1;
        if (pbVar4[1] == 10) {
          param_1 = pbVar4 + 2;
        }
      }
      else {
        if (((byte)(&DAT_004aa118)[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0) {
          *pbVar3 = bVar1;
          pbVar3 = pbVar3 + 1;
          pbVar4 = pbVar4 + 1;
        }
        *pbVar3 = *pbVar4;
        pbVar3 = pbVar3 + 1;
        param_1 = pbVar4 + 1;
      }
    }
  }
  return;
}


