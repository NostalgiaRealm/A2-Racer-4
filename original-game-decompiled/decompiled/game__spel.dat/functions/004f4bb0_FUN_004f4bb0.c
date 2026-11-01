
/* ==== FUN_004f4bb0 @ 004f4bb0 ==== 
 * signature: undefined __thiscall FUN_004f4bb0(void * this, int param_1)
 * body: 004f4bb0-004f4c82
 */

void __thiscall FUN_004f4bb0(void *this,int param_1)

{
  ushort *puVar1;
  uint *puVar2;
  void *this_00;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572eab;
  local_c = ExceptionList;
  puVar4 = this;
  ExceptionList = &local_c;
  for (iVar3 = 0x8e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar1 = (ushort *)((int)this + 0x4c);
  *puVar1 = 1;
  *(int *)((int)this + 0x50) = (int)this + 0x54;
  if (*puVar1 <= *(ushort *)((int)this + 0x4e)) {
    FUN_004f6060(puVar1);
  }
  *(int *)(*(int *)((int)this + 0x50) + (uint)*(ushort *)((int)this + 0x4e) * 4) = param_1;
  *(short *)((int)this + 0x4e) = *(short *)((int)this + 0x4e) + 1;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0x18);
  puVar2 = operator_new(0x24);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)FUN_004fffb0(puVar2);
  }
  local_4 = 0xffffffff;
  *(void **)((int)this + 0x1d4) = this_00;
  FUN_00500060(this_00,this);
  **(uint **)((int)this + 0x1d4) = **(uint **)((int)this + 0x1d4) & 0xffffff08 | 8;
  FUN_005002e0(this,**(int **)((int)this + 0xc));
  *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) & 0xffffff08 | 8;
  ExceptionList = local_c;
  return;
}


