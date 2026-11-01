
/* ==== FUN_0053e750 @ 0053e750 ==== 
 * signature: undefined4 * __thiscall FUN_0053e750(void * this, int param_1, undefined4 param_2)
 * body: 0053e750-0053e858
 */

undefined4 * __thiscall FUN_0053e750(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005742cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00543d90(this);
  *(undefined2 *)((int)this + 0x30) = 0x200;
  *(int *)((int)this + 0x34) = (int)this + 0x38;
  *(undefined2 *)((int)this + 0x32) = 0;
  local_4 = 0;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x2c) = param_2;
  *(undefined4 *)((int)this + 0x28) = uVar1;
  this_00 = *(void **)(*(int *)(param_1 + 4) + 0xb0);
  iVar2 = (int)*(short *)(param_1 + 0x3e) - (int)*(short *)(param_1 + 0x40);
  *(int *)((int)this + 8) = iVar2;
  uVar3 = iVar2 + 1U & 0xfffffffe;
  *(uint *)((int)this + 0xc) = uVar3;
  iVar4 = *(int *)((int)this_00 + 8);
  iVar2 = *(int *)((int)this + 8) * uVar3 * 8 + 8;
  uVar3 = iVar4 + 0x1f + iVar2 & 0xffffffe0;
  if (uVar3 < *(uint *)((int)this_00 + 0xc)) {
    *(uint *)((int)this_00 + 8) = uVar3;
  }
  else {
    iVar4 = FUN_004f5be0(this_00,iVar2);
  }
  *(int *)((int)this + 0x10) = iVar4;
  iVar2 = *(int *)((int)this_00 + 8);
  iVar4 = *(int *)((int)this + 0xc) * 8;
  uVar3 = iVar2 + 0x1f + iVar4 & 0xffffffe0;
  if (uVar3 < *(uint *)((int)this_00 + 0xc)) {
    *(uint *)((int)this_00 + 8) = uVar3;
  }
  else {
    iVar2 = FUN_004f5be0(this_00,iVar4);
  }
  *(int *)((int)this + 0x14) = iVar2;
  iVar2 = *(int *)((int)this_00 + 8);
  iVar4 = *(int *)((int)this + 0xc) * 8;
  uVar3 = iVar2 + 0x1f + iVar4 & 0xffffffe0;
  if (uVar3 < *(uint *)((int)this_00 + 0xc)) {
    *(uint *)((int)this_00 + 8) = uVar3;
  }
  else {
    iVar2 = FUN_004f5be0(this_00,iVar4);
  }
  *(int *)((int)this + 0x18) = iVar2;
  FUN_00543b00((int)this);
  ExceptionList = local_c;
  return this;
}


