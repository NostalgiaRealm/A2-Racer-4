
/* ==== FUN_00483e70 @ 00483e70 ==== 
 * signature: uint __thiscall FUN_00483e70(void * this, byte * param_1)
 * body: 00483e70-00483ec2
 */

uint __thiscall FUN_00483e70(void *this,byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  uVar4 = 0xffffffff;
  uVar2 = *(uint *)((int)this + 8);
  pbVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  uVar5 = ~uVar4 - 1;
  uVar4 = uVar2;
  if (uVar5 <= uVar2) {
    uVar4 = uVar5;
  }
  bVar7 = false;
  uVar3 = 0;
  bVar8 = true;
  pbVar6 = *(byte **)((int)this + 4);
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    bVar7 = *pbVar6 < *param_1;
    bVar8 = *pbVar6 == *param_1;
    pbVar6 = pbVar6 + 1;
    param_1 = param_1 + 1;
  } while (bVar8);
  if (!bVar8) {
    uVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
  }
  if (uVar3 == 0) {
    if (uVar2 < uVar5) {
      return 0xffffffff;
    }
    uVar3 = (uint)(uVar2 != uVar5);
  }
  return uVar3;
}


