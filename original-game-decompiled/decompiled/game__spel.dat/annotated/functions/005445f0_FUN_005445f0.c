
/* ==== FUN_005445f0 @ 005445f0 ==== 
 * signature: undefined __thiscall FUN_005445f0(void * this, int param_1)
 * body: 005445f0-00544623
 */

void __thiscall FUN_005445f0(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x78) == 0) {
    iVar1 = FUN_00546220((void *)((int)this + 0x80),param_1);
    if (iVar1 != 1) {
      *(undefined4 *)((int)this + 0x78) = 2;
      return;
    }
  }
  else {
    *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + -1;
  }
  return;
}


