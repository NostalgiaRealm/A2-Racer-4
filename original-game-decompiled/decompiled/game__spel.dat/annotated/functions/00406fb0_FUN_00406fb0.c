
/* ==== FUN_00406fb0 @ 00406fb0 ==== 
 * signature: undefined4 __thiscall FUN_00406fb0(void * this, byte * param_1)
 * body: 00406fb0-00407020
 */

undefined4 __thiscall FUN_00406fb0(void *this,byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  int local_4;
  
  local_4 = 0;
  puVar6 = (uint *)((int)this + 8);
  do {
    uVar3 = 0xffffffff;
    pbVar7 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    uVar2 = *puVar6;
    uVar4 = ~uVar3 - 1;
    uVar3 = uVar2;
    if (uVar4 <= uVar2) {
      uVar3 = uVar4;
    }
    bVar9 = false;
    iVar5 = 0;
    bVar10 = true;
    pbVar7 = (byte *)puVar6[-1];
    pbVar8 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar9 = *pbVar7 < *pbVar8;
      bVar10 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    } while (bVar10);
    if (!bVar10) {
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
    }
    if (((iVar5 == 0) && (uVar4 <= uVar2)) && (uVar2 == uVar4)) break;
    puVar6 = puVar6 + 6;
    local_4 = local_4 + 1;
  } while (local_4 < 10);
  return CONCAT31((int3)((uint)local_4 >> 8),local_4 != 10);
}


