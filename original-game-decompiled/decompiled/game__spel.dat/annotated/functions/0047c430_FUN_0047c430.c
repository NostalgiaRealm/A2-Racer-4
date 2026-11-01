
/* ==== FUN_0047c430 @ 0047c430 ==== 
 * signature: int __thiscall FUN_0047c430(void * this, int param_1)
 * body: 0047c430-0047c4af
 */

int __thiscall FUN_0047c430(void *this,int param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  pbVar2 = *(byte **)((int)this + 0x38);
  if (pbVar2 == (byte *)0x0) {
    pbVar2 = &DAT_0057629c;
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar5 = *(uint *)((int)this + 0x3c);
  if (uVar1 < *(uint *)((int)this + 0x3c)) {
    uVar5 = uVar1;
  }
  bVar8 = false;
  iVar3 = 0;
  bVar9 = true;
  pbVar6 = *(byte **)(param_1 + 4);
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar8 = *pbVar6 < *pbVar2;
    bVar9 = *pbVar6 == *pbVar2;
    pbVar6 = pbVar6 + 1;
    pbVar2 = pbVar2 + 1;
  } while (bVar9);
  if (!bVar9) {
    iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
  }
  if (((iVar3 == 0) && (*(uint *)((int)this + 0x3c) <= uVar1)) &&
     (uVar1 == *(uint *)((int)this + 0x3c))) {
    return (int)this;
  }
  iVar3 = (*(code *)**(undefined4 **)((int)this + 0x74))();
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x78) + 4) + iVar7 * 4) + 0xc))
                        (param_1);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  return 0;
}


