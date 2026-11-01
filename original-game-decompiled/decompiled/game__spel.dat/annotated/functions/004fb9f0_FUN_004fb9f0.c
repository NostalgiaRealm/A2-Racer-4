
/* ==== FUN_004fb9f0 @ 004fb9f0 ==== 
 * signature: int * __thiscall FUN_004fb9f0(void * this, undefined4 param_1, int * param_2)
 * body: 004fb9f0-004fbad4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_004fb9f0(void *this,undefined4 param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005734a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fb4d0(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_005784f8;
  *(int *)((int)this + 0x70) = param_2[5];
  *(undefined4 *)((int)this + 0x94) = 0;
  iVar2 = param_2[7];
  local_4 = 0;
  *(int *)((int)this + 0x90) = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  if (*(int *)(*(int *)((int)this + 0x14) + 0xac) != *(int *)(*(int *)((int)this + 0x44) + 0xac)) {
    FUN_0055ab10((byte *)s_Both_Anchors_of_a_Torque_Actuato_005b8f3c);
    _DAT_00000000 = 0;
  }
  *(float *)((int)this + 0x78) = *(float *)((int)this + 0x58) - *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x7c) = *(float *)((int)this + 0x5c) - *(float *)((int)this + 0x2c);
  *(float *)((int)this + 0x80) = *(float *)((int)this + 0x60) - *(float *)((int)this + 0x30);
  FUN_004f9780((float *)((int)this + 0x78));
  fVar1 = (float)param_2[3];
  *(float *)((int)this + 0x74) = fVar1;
  if (fVar1 != 0.0) {
    FUN_004fb810(this);
  }
  ExceptionList = local_c;
  return this;
}


