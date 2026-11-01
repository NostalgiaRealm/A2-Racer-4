
/* ==== FUN_00467960 @ 00467960 ==== 
 * signature: undefined __stdcall FUN_00467960(byte * param_1)
 * body: 00467960-004679f4
 */

void FUN_00467960(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte local_70 [8];
  byte local_68 [8];
  byte local_60 [32];
  byte local_40 [64];
  
  FUN_0055942f(param_1,local_68,local_40,local_60,local_70);
  uVar2 = 0xffffffff;
  pbVar5 = local_60;
  do {
    pbVar6 = pbVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pbVar6 = pbVar5 + 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar6;
  } while (bVar1 != 0);
  uVar2 = ~uVar2;
  pbVar5 = pbVar6 + -uVar2;
  pbVar6 = param_1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar6 = pbVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar6 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  if (DAT_006fb8d0 == 0) {
    iVar4 = -1;
    do {
      pbVar5 = param_1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pbVar5 = param_1 + 1;
      bVar1 = *param_1;
      param_1 = pbVar5;
    } while (bVar1 != 0);
    *(undefined4 *)(pbVar5 + -1) = DAT_005a72e8;
    pbVar5[3] = DAT_005a72ec;
    return;
  }
  iVar4 = -1;
  do {
    pbVar5 = param_1;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pbVar5 = param_1 + 1;
    bVar1 = *param_1;
    param_1 = pbVar5;
  } while (bVar1 != 0);
  *(undefined4 *)(pbVar5 + -1) = DAT_005a72e0;
  pbVar5[3] = DAT_005a72e4;
  return;
}


