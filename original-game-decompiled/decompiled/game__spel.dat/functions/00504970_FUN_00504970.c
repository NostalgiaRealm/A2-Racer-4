
/* ==== FUN_00504970 @ 00504970 ==== 
 * signature: undefined __thiscall FUN_00504970(void * this, int * param_1, int param_2, void * param_3, int * param_4)
 * body: 00504970-00504a93
 */

void __thiscall FUN_00504970(void *this,int *param_1,int param_2,void *param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  pbVar1 = *(byte **)(param_4[4] + 0xa4);
  pbVar2 = *(byte **)(param_4[9] + 0xa4);
  *(undefined4 *)((int)this + 4) = 0;
  *(int *)((int)this + 0x20) = param_2;
  *(undefined4 *)this = *(undefined4 *)(*(int *)((int)param_3 + 0x2c) + 0xc);
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0xc) == 0)) {
    FUN_00504af0(this,(int)pbVar1,param_3);
  }
  pbVar1 = *(byte **)((int)param_3 + 0x2c);
  if ((*pbVar1 & 0xc) == 0) {
    if (*(ushort *)((int)this + 0x10) <= *(ushort *)((int)this + 0x12)) {
      FUN_004f6060((ushort *)((int)this + 0x10));
    }
    *(byte **)(*(int *)((int)this + 0x14) + (uint)*(ushort *)((int)this + 0x12) * 4) = pbVar1;
    *(short *)((int)this + 0x12) = *(short *)((int)this + 0x12) + 1;
  }
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0xc) == 0)) {
    FUN_00504af0(this,(int)pbVar2,param_3);
  }
  pbVar1 = *(byte **)((int)param_3 + 0x30);
  if ((*pbVar1 & 0xc) == 0) {
    if (*(ushort *)((int)this + 0x10) <= *(ushort *)((int)this + 0x12)) {
      FUN_004f6060((ushort *)((int)this + 0x10));
    }
    *(byte **)(*(int *)((int)this + 0x14) + (uint)*(ushort *)((int)this + 0x12) * 4) = pbVar1;
    *(short *)((int)this + 0x12) = *(short *)((int)this + 0x12) + 1;
  }
  FUN_00504aa0(this,param_3);
  FUN_00504910(this,(int)param_3,param_4);
  iVar4 = 0;
  iVar3 = FUN_00504bb0(this);
  do {
    if (iVar3 != 1) {
LAB_00504a7b:
      *(int *)(*(int *)this + 0x58) = *(int *)(*(int *)this + 0x58) + iVar4 + 1;
      FUN_00505110(this);
      return;
    }
    iVar4 = iVar4 + 1;
    iVar3 = *(int *)((int)this + 4) + 1;
    *(int *)((int)this + 4) = iVar3;
    if (5000 < iVar3) {
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 0x10))(1);
      }
      goto LAB_00504a7b;
    }
    iVar3 = FUN_00504bb0(this);
  } while( true );
}


