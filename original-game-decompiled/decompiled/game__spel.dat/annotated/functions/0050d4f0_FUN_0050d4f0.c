
/* ==== FUN_0050d4f0 @ 0050d4f0 ==== 
 * signature: undefined4 * __thiscall FUN_0050d4f0(void * this, undefined4 param_1, int * param_2)
 * body: 0050d4f0-0050d5e8
 */

undefined4 * __thiscall FUN_0050d4f0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573b56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fb4d0(this,param_1,param_2);
  *(undefined2 *)((int)this + 0x90) = 0;
  *(undefined2 *)((int)this + 0x92) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined ***)this = &PTR_FUN_0057896c;
  *(int *)((int)this + 0x74) = param_2[3];
  *(int *)((int)this + 0x88) = param_2[9];
  *(int *)((int)this + 0x8c) = param_2[8];
  *(undefined4 *)((int)this + 0x70) = param_1;
  local_4 = 1;
  iVar1 = *(int *)(*(int *)((int)this + 0x14) + 0xa4);
  iVar2 = *(int *)(*(int *)((int)this + 0x44) + 0xa4);
  *(undefined4 *)((int)this + 0x78) = 0x3f800000;
  if (param_2[4] != 0) {
    fVar3 = FUN_004f3aa0(iVar1,(float *)((int)this + 0x28),(float *)0x0);
    fVar4 = FUN_004f3aa0(iVar2,(float *)((int)this + 0x58),(float *)0x0);
    *(float *)((int)this + 0x78) =
         (float)((fVar4 * (float10)(double)fVar3) / (fVar4 + (float10)(double)fVar3));
  }
  *(float *)((int)this + 0x7c) = (float)param_2[5] * *(float *)((int)this + 0x78);
  *(float *)((int)this + 0x80) = (float)param_2[6] * *(float *)((int)this + 0x78);
  *(float *)((int)this + 0x84) = (float)param_2[7] * *(float *)((int)this + 0x78);
  ExceptionList = local_c;
  return this;
}


