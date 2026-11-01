
/* ==== FUN_004869e0 @ 004869e0 ==== 
 * signature: undefined __thiscall FUN_004869e0(void * this, int param_1, float param_2)
 * body: 004869e0-00486ac1
 */

void __thiscall FUN_004869e0(void *this,int param_1,float param_2)

{
  void *this_00;
  int iVar1;
  byte *pbVar2;
  void *this_01;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  byte bVar6;
  float local_10;
  float local_c [3];
  
  uVar3 = 0;
  local_10 = 0.0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar1 = FUN_00487200((int)this);
      this_00 = *(void **)(*(int *)(*(int *)(iVar1 + 4) + 4) + uVar3 * 4);
      if (*(int *)(param_1 + 4) == 0) {
        pbVar2 = &DAT_0057629c;
      }
      else {
        pbVar2 = (byte *)(*(int *)(param_1 + 4) + uVar3);
      }
      bVar6 = *pbVar2;
      this_01 = (void *)FUN_004871c0((int)this);
      iVar1 = FUN_0047e4e0(this_01,bVar6);
      FUN_0047ce40(this_00,iVar1);
      if (*(int *)(param_1 + 4) == 0) {
        pbVar2 = &DAT_0057629c;
      }
      else {
        pbVar2 = (byte *)(*(int *)(param_1 + 4) + uVar3);
      }
      bVar6 = *pbVar2;
      iVar1 = FUN_004871c0((int)this);
      fVar4 = FUN_0047e5d0(iVar1,bVar6);
      local_c[1] = 0.0;
      local_c[2] = 0.0;
      local_c[0] = (float)(fVar4 * (float10)param_2 * (float10)0.5 + (float10)local_10);
      FUN_0047bc50(this_00,local_c);
      iVar1 = FUN_004871c0((int)this);
      fVar5 = FUN_0047e6e0(iVar1);
      uVar3 = uVar3 + 1;
      local_10 = (float)(fVar5 * (float10)param_2 + (float10)(float)(fVar4 * (float10)param_2) +
                        (float10)local_10);
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return;
}


