
/* ==== FUN_0050a5e0 @ 0050a5e0 ==== 
 * signature: undefined __thiscall FUN_0050a5e0(void * this, undefined4 param_1)
 * body: 0050a5e0-0050a622
 */

void __thiscall FUN_0050a5e0(void *this,undefined4 param_1)

{
  int iVar1;
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  iVar1 = *(int *)((int)this + 8);
  *(DWORD *)((int)this + 8) = local_8.s.LowPart;
  *(LONG *)((int)this + 0xc) = local_8.s.HighPart;
  *(DWORD *)((int)this + *(int *)((int)this + 0x10) * 8 + 0x18) =
       *(int *)((int)this + *(int *)((int)this + 0x10) * 8 + 0x18) + (local_8.s.LowPart - iVar1);
  *(undefined4 *)((int)this + 0x10) = param_1;
  return;
}


