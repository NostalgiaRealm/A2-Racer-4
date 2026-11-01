
/* ==== FUN_0047bd10 @ 0047bd10 ==== 
 * signature: int __thiscall FUN_0047bd10(void * this, int param_1)
 * body: 0047bd10-0047bd5d
 */

int __thiscall FUN_0047bd10(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  uVar1 = *(uint *)(param_1 + 8);
  pbVar6 = &DAT_0057629c;
  if (*(byte **)(param_1 + 4) != (byte *)0x0) {
    pbVar6 = *(byte **)(param_1 + 4);
  }
  uVar2 = *(uint *)((int)this + 0x3c);
  uVar3 = uVar2;
  if (uVar1 <= uVar2) {
    uVar3 = uVar1;
  }
  bVar7 = false;
  iVar4 = 0;
  bVar8 = true;
  pbVar5 = *(byte **)((int)this + 0x38);
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar7 = *pbVar5 < *pbVar6;
    bVar8 = *pbVar5 == *pbVar6;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  } while (bVar8);
  if (!bVar8) {
    iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
  }
  if (((iVar4 != 0) || (uVar2 < uVar1)) || (uVar2 != uVar1)) {
    this = (void *)0x0;
  }
  return (int)this;
}


