
/* ==== FUN_00486ad0 @ 00486ad0 ==== 
 * signature: undefined __thiscall FUN_00486ad0(void * this, float param_1, float param_2)
 * body: 00486ad0-00486c10
 */

void __thiscall FUN_00486ad0(void *this,float param_1,float param_2)

{
  int *piVar1;
  void *this_00;
  float fVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  void *this_01;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  byte bVar9;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar2 = param_1;
  iVar3 = FUN_004871c0((int)this);
  fVar7 = FUN_0047e6e0(iVar3);
  iVar3 = *(int *)((int)param_1 + 8);
  fVar7 = fVar7 * (float10)(*(int *)((int)this + 0x98) + -1) * (float10)param_2;
  while( true ) {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) break;
    if (*(int *)((int)param_1 + 4) == 0) {
      pbVar4 = &DAT_0057629c;
    }
    else {
      pbVar4 = (byte *)(*(int *)((int)param_1 + 4) + iVar3);
    }
    bVar9 = *pbVar4;
    iVar5 = FUN_004871c0((int)this);
    fVar8 = FUN_0047e5d0(iVar5,bVar9);
    fVar7 = fVar8 * (float10)param_2 + (float10)(float)fVar7;
  }
  piVar1 = (int *)((int)param_1 + 8);
  uVar6 = 0;
  param_1 = (float)fVar7 * -0.5;
  if (*piVar1 != 0) {
    do {
      iVar3 = FUN_00487200((int)this);
      this_00 = *(void **)(*(int *)(*(int *)(iVar3 + 4) + 4) + uVar6 * 4);
      if (*(int *)((int)fVar2 + 4) == 0) {
        pbVar4 = &DAT_0057629c;
      }
      else {
        pbVar4 = (byte *)(*(int *)((int)fVar2 + 4) + uVar6);
      }
      bVar9 = *pbVar4;
      this_01 = (void *)FUN_004871c0((int)this);
      iVar3 = FUN_0047e4e0(this_01,bVar9);
      FUN_0047ce40(this_00,iVar3);
      if (*(int *)((int)fVar2 + 4) == 0) {
        pbVar4 = &DAT_0057629c;
      }
      else {
        pbVar4 = (byte *)(*(int *)((int)fVar2 + 4) + uVar6);
      }
      bVar9 = *pbVar4;
      iVar3 = FUN_004871c0((int)this);
      fVar7 = FUN_0047e5d0(iVar3,bVar9);
      local_8 = 0;
      local_4 = 0;
      local_c = (float)(fVar7 * (float10)param_2 * (float10)0.5 + (float10)param_1);
      FUN_0047bc50(this_00,&local_c);
      iVar3 = FUN_004871c0((int)this);
      fVar8 = FUN_0047e6e0(iVar3);
      uVar6 = uVar6 + 1;
      param_1 = (float)(fVar8 * (float10)param_2 + (float10)(float)(fVar7 * (float10)param_2) +
                       (float10)param_1);
    } while (uVar6 < *(uint *)((int)fVar2 + 8));
  }
  return;
}


