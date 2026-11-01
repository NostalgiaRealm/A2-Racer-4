
/* ==== FUN_00508aa0 @ 00508aa0 ==== 
 * signature: undefined __thiscall FUN_00508aa0(void * this, int param_1)
 * body: 00508aa0-00508ace
 */

void __thiscall FUN_00508aa0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xf0);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x178);
  }
  FUN_004f32e0(iVar1);
  *(undefined4 *)((int)this + param_1 * 4 + 0x28) = 0;
  FUN_005067a0((int)this);
  return;
}


