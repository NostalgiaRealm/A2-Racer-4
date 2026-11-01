
/* ==== FUN_005002e0 @ 005002e0 ==== 
 * signature: undefined __thiscall FUN_005002e0(void * this, int param_1)
 * body: 005002e0-00500322
 */

void __thiscall FUN_005002e0(void *this,int param_1)

{
  if (*(ushort *)((int)this + 0x1c8) <= *(ushort *)((int)this + 0x1ca)) {
    FUN_004f6060((ushort *)((int)this + 0x1c8));
  }
  *(int *)(*(int *)((int)this + 0x1cc) + (uint)*(ushort *)((int)this + 0x1ca) * 4) = param_1;
  *(short *)((int)this + 0x1ca) = *(short *)((int)this + 0x1ca) + 1;
  FUN_00500330(*(void **)((int)this + 0x1d4),this,param_1);
  return;
}


