
/* ==== FUN_00486c20 @ 00486c20 ==== 
 * signature: undefined __thiscall FUN_00486c20(void * this, int param_1, float param_2)
 * body: 00486c20-00486cf9
 */

void __thiscall FUN_00486c20(void *this,int param_1,float param_2)

{
  int iVar1;
  void *this_00;
  int iVar2;
  byte *pbVar3;
  void *this_01;
  float10 fVar4;
  float10 fVar5;
  byte bVar6;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 8);
  local_10 = 0.0;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar2 = FUN_00487200((int)this);
    this_00 = *(void **)(*(int *)(*(int *)(iVar2 + 4) + 4) + iVar1 * 4);
    if (*(int *)(param_1 + 4) == 0) {
      pbVar3 = &DAT_0057629c;
    }
    else {
      pbVar3 = (byte *)(*(int *)(param_1 + 4) + iVar1);
    }
    bVar6 = *pbVar3;
    this_01 = (void *)FUN_004871c0((int)this);
    iVar2 = FUN_0047e4e0(this_01,bVar6);
    FUN_0047ce40(this_00,iVar2);
    if (*(int *)(param_1 + 4) == 0) {
      pbVar3 = &DAT_0057629c;
    }
    else {
      pbVar3 = (byte *)(*(int *)(param_1 + 4) + iVar1);
    }
    bVar6 = *pbVar3;
    iVar2 = FUN_004871c0((int)this);
    fVar4 = FUN_0047e5d0(iVar2,bVar6);
    local_8 = 0;
    local_4 = 0;
    local_c = (float)((float10)local_10 - fVar4 * (float10)param_2 * (float10)0.5);
    FUN_0047bc50(this_00,&local_c);
    iVar2 = FUN_004871c0((int)this);
    fVar5 = FUN_0047e6e0(iVar2);
    local_10 = (float)((float10)local_10 -
                      (fVar5 * (float10)param_2 + (float10)(float)(fVar4 * (float10)param_2)));
  }
  return;
}


