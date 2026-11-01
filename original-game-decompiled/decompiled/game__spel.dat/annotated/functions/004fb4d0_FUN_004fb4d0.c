
/* ==== FUN_004fb4d0 @ 004fb4d0 ==== 
 * signature: int * __thiscall FUN_004fb4d0(void * this, undefined4 param_1, int * param_2)
 * body: 004fb4d0-004fb5d4
 */

int * __thiscall FUN_004fb4d0(void *this,undefined4 param_1,int *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005733be;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fb420(this);
  local_4 = 0;
  FUN_00558643((void *)((int)this + 0xc),0x30,2,FUN_0043e110);
  *(undefined ***)this = &PTR_FUN_00578470;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(int *)((int)this + 0x6c) = *param_2;
  FUN_004fb360((void *)((int)this + 0xc),this,(int *)param_2[1]);
  FUN_004fb360((void *)((int)this + 0x3c),this,(int *)param_2[2]);
  pbVar1 = *(byte **)(*(int *)((int)this + 0x14) + 0xa4);
  pbVar2 = *(byte **)(*(int *)((int)this + 0x44) + 0xa4);
  if ((*pbVar1 & 0xc) == 0) {
    if (*(ushort *)((int)this + 4) <= *(ushort *)((int)this + 6)) {
      FUN_004f6060((ushort *)((int)this + 4));
    }
    *(byte **)(*(int *)((int)this + 8) + (uint)*(ushort *)((int)this + 6) * 4) = pbVar1;
    *(short *)((int)this + 6) = *(short *)((int)this + 6) + 1;
  }
  if (((*pbVar2 & 0xc) == 0) && (pbVar2 != pbVar1)) {
    if (*(ushort *)((int)this + 4) <= *(ushort *)((int)this + 6)) {
      FUN_004f6060((ushort *)((int)this + 4));
    }
    *(byte **)(*(int *)((int)this + 8) + (uint)*(ushort *)((int)this + 6) * 4) = pbVar2;
    *(short *)((int)this + 6) = *(short *)((int)this + 6) + 1;
  }
  FUN_005001a0(*(void **)(*(int *)(pbVar1 + 0xc) + 0xa0),this);
  ExceptionList = local_c;
  return this;
}


