
/* ==== FUN_00508a70 @ 00508a70 ==== 
 * signature: undefined __thiscall FUN_00508a70(void * this, int param_1)
 * body: 00508a70-00508a9e
 */

void __thiscall FUN_00508a70(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xf0);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x178);
  }
  FUN_004f32e0(iVar1);
  *(undefined4 *)((int)this + param_1 * 4 + 0x28) = 1;
  FUN_005067a0((int)this);
  return;
}


