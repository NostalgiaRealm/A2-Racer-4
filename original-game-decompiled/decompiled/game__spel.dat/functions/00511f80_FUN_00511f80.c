
/* ==== FUN_00511f80 @ 00511f80 ==== 
 * signature: undefined __thiscall FUN_00511f80(void * this, int param_1)
 * body: 00511f80-00511fda
 */

void __thiscall FUN_00511f80(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_005689a0(&DAT_0074e050,3);
    if (iVar1 != 0) {
      FUN_005689d0();
      return;
    }
  }
  else {
    if (*(ushort *)((int)this + 0x20) <= *(ushort *)((int)this + 0x22)) {
      FUN_004f6060((ushort *)((int)this + 0x20));
    }
    *(int *)(*(int *)((int)this + 0x24) + (uint)*(ushort *)((int)this + 0x22) * 4) = param_1;
    *(short *)((int)this + 0x22) = *(short *)((int)this + 0x22) + 1;
  }
  return;
}


