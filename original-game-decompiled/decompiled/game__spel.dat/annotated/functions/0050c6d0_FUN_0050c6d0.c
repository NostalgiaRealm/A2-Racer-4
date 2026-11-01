
/* ==== FUN_0050c6d0 @ 0050c6d0 ==== 
 * signature: uint __stdcall FUN_0050c6d0(int param_1)
 * body: 0050c6d0-0050c712
 */

uint FUN_0050c6d0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  uVar2 = 0xffffffff;
  pbVar5 = *(byte **)(param_1 + 4);
  uVar4 = 0xffffffff;
  pbVar6 = pbVar5;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  iVar3 = ~uVar2 - 1;
  if (-1 < (int)(~uVar2 - 2)) {
    do {
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_005b8f94 + ((bVar1 ^ uVar4) & 0xff) * 4);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar4 | 0x80000000;
}


