
/* ==== FUN_00503ca0 @ 00503ca0 ==== 
 * signature: undefined __thiscall FUN_00503ca0(void * this, int param_1)
 * body: 00503ca0-00503e8c
 */

void __thiscall FUN_00503ca0(void *this,int param_1)

{
  int *piVar1;
  short *psVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 local_50;
  float local_48;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_10;
  undefined4 local_c;
  float local_8;
  
  piVar1 = *(int **)((int)this + 0x100) + 0x18;
  *(short *)piVar1 = (short)*piVar1 + (1 - (short)((**(int **)((int)this + 0x100) << 0x1c) >> 0x1e))
  ;
  piVar1 = *(int **)((int)this + 0x104) + 0x18;
  *(short *)piVar1 = (short)*piVar1 + (1 - (short)((**(int **)((int)this + 0x104) << 0x1c) >> 0x1e))
  ;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar7 = (uint)(*(double *)((int)this + 8) <= *(double *)((int)this + 0x10));
    uVar5 = (uint)(*(double *)((int)this + 0x10) < *(double *)((int)this + 8));
    if ((**(byte **)(param_1 + uVar7 * 4) & 0xc) == 0) {
      iVar6 = uVar5 * 0x10;
      local_3c = *(undefined4 *)(iVar6 + 0x3c + (int)this);
      local_38 = *(undefined4 *)(iVar6 + 0x40 + (int)this);
      local_40 = *(float *)((int)this + iVar6 + 0x38);
      local_2c = *(undefined4 *)((int)this + iVar6 + 0x5c);
      local_28 = *(undefined4 *)((int)this + iVar6 + 0x60);
      local_30 = *(float *)((int)this + iVar6 + 0x58);
      iVar6 = *(int *)((int)this + uVar7 * 4 + 0x100);
      local_1c = *(undefined4 *)(iVar6 + 0x98);
      local_18 = *(undefined4 *)(iVar6 + 0x9c);
      local_20 = *(float *)(iVar6 + 0x94);
      iVar6 = *(int *)((int)this + uVar7 * 4 + 0x100);
      local_c = *(undefined4 *)(iVar6 + 0xa8);
      local_8 = *(float *)(iVar6 + 0xac);
      local_50 = (double)local_8;
      local_10 = *(float *)(iVar6 + 0xa4);
      FUN_004f3600(*(byte **)((int)this + uVar7 * 4 + 0x100),
                   *(byte **)((int)this + uVar5 * 4 + 0x100),
                   *(float **)((int)this + uVar7 * 4 + 0x108),
                   *(float **)((int)this + uVar5 * 4 + 0x108),&local_10,&local_20,&local_30,
                   &local_40,(float *)&local_50);
      pfVar3 = *(float **)((int)this + 0x11c);
      fVar4 = (float)local_50 * *pfVar3 + local_48 * pfVar3[2] + local_50._4_4_ * pfVar3[1];
      if (uVar7 != 0) {
        fVar4 = fVar4 * -1.0;
      }
      if (fVar4 < *(float *)this * -0.8333333) {
        iVar6 = *(int *)(*(int *)((int)this + 0x100) + 0xc);
        *(int *)(iVar6 + 100) = *(int *)(iVar6 + 100) + 1;
        *(undefined4 *)(param_1 + uVar7 * 4) = 0;
        FUN_00503f10((int)this);
        FUN_00502f60(this,1 - uVar7);
        FUN_00503e90(this,uVar7);
        psVar2 = (short *)(*(int *)((int)this + uVar7 * 4 + 0x100) + 0x60);
        *psVar2 = *psVar2 + -1;
        return;
      }
    }
  }
  FUN_00503f10((int)this);
  FUN_00502f60(this,0);
  FUN_00502f60(this,1);
  return;
}


