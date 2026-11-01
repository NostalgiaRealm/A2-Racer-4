
/* ==== FUN_0050f950 @ 0050f950 ==== 
 * signature: int * __thiscall FUN_0050f950(void * this, int param_1)
 * body: 0050f950-0050f99d
 */

int * __thiscall FUN_0050f950(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  *(int *)this = param_1;
  do {
    if (1 << ((byte)iVar2 & 0x1f) == param_1) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  puVar1 = FUN_004f5aa0(4,param_1);
  *(undefined4 **)((int)this + 0xc) = puVar1;
  puVar1 = FUN_004f5aa0(4,*(int *)this << 1);
  *(undefined4 **)((int)this + 4) = puVar1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 **)((int)this + 8) = puVar1 + *(int *)this;
  return this;
}


