
/* ==== FUN_0045e350 @ 0045e350 ==== 
 * signature: undefined4 * __thiscall FUN_0045e350(void * this, int param_1)
 * body: 0045e350-0045e58f
 */

undefined4 * __thiscall FUN_0045e350(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float fStack00000008;
  undefined4 uStack0000000c;
  float fStack00000010;
  float in_stack_00000048;
  float in_stack_0000004c;
  float in_stack_00000050;
  undefined4 *in_stack_00000054;
  float fVar6;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a9be;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(float *)((int)this + 0x68) = (float)param_1;
  *(float *)((int)this + 0x6c) = in_stack_00000048;
  puVar3 = &stack0x00000008;
  puVar4 = (undefined4 *)((int)this + 0x10);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined ***)this = &PTR_FUN_005768f0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x41100000;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(float *)((int)this + 0x70) = in_stack_0000004c;
  *(float *)((int)this + 0x74) = in_stack_00000050;
  *(undefined4 *)((int)this + 0x5c) = *in_stack_00000054;
  *(undefined4 *)((int)this + 0x60) = in_stack_00000054[1];
  *(undefined4 *)((int)this + 100) = in_stack_00000054[2];
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0x3f800000;
  *(undefined4 *)((int)this + 0x88) = 0x3f800000;
  *(undefined4 *)((int)this + 0x8c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x90) = 0x3f800000;
  *(undefined4 *)((int)this + 0x94) = 0x40a00000;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  in_stack_00000048 = 0.0;
  in_stack_0000004c = 10.0;
  in_stack_00000050 = 0.0;
  fStack00000008 = 0.0;
  uStack0000000c = 0;
  fStack00000010 = 0.0;
  pvVar1 = operator_new(0x70);
  local_4 = 0;
  in_stack_00000054 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    puVar3 = &stack0x00000008;
    puVar4 = &stack0x00000048;
    fVar5 = FUN_004602e0(0.5,2.0);
    fVar6 = (float)fVar5;
    fVar5 = FUN_004602e0(1.0,3.0);
    iVar2 = FUN_0045ded0(pvVar1,(float)fVar5,fVar6,puVar4,puVar3);
  }
  local_4 = 0xffffffff;
  *(int *)((int)this + 0x98) = iVar2;
  FUN_004a6980((uint)(iVar2 != 0),(byte *)s__s___d__Not_enough_mem_for_new_P_005a5adc);
  pvVar1 = *(void **)((int)this + 0x98);
  if (1 < param_1) {
    iVar2 = param_1 + -1;
    do {
      fVar5 = FUN_004602e0(-5.0,5.0);
      in_stack_00000048 = (float)fVar5;
      fVar5 = FUN_004602e0(10.0,20.0);
      in_stack_0000004c = (float)fVar5;
      fVar5 = FUN_004602e0(-5.0,5.0);
      in_stack_00000050 = (float)fVar5;
      fVar5 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
      fStack00000008 = (float)fVar5;
      fVar5 = FUN_004602e0(-*(float *)((int)this + 0x94),*(float *)((int)this + 0x94));
      fStack00000010 = (float)fVar5;
      puVar3 = &stack0x00000008;
      puVar4 = &stack0x00000048;
      fVar5 = FUN_004602e0(0.5,2.0);
      fVar6 = (float)fVar5;
      fVar5 = FUN_004602e0(1.0,3.0);
      FUN_0045df70(pvVar1,(float)fVar5,fVar6,puVar4,puVar3);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  ExceptionList = local_c;
  return this;
}


