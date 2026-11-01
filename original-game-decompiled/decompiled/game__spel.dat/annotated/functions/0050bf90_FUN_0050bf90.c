
/* ==== FUN_0050bf90 @ 0050bf90 ==== 
 * signature: int __fastcall FUN_0050bf90(int param_1)
 * body: 0050bf90-0050bfba
 */

int __fastcall FUN_0050bf90(int param_1)

{
  void *this;
  int iVar1;
  
  this = *(void **)(param_1 + 8);
  if (*(short *)((int)this + 0x10) != 0) {
    iVar1 = *(int *)((uint)*(ushort *)((int)this + 0xe) * 0x10 + 0xc + *(int *)((int)this + 4));
    FUN_0050e2c0(this,*(int *)(iVar1 + 4));
    return iVar1;
  }
  return 0;
}


