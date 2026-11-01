
/* ==== FUN_005087b0 @ 005087b0 ==== 
 * signature: undefined __thiscall FUN_005087b0(void * this, int param_1)
 * body: 005087b0-005087de
 */

void __thiscall FUN_005087b0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xf0);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x178);
  }
  FUN_004f32e0(iVar1);
  *(undefined4 *)((int)this + param_1 * 4 + 0x1c) = 1;
  FUN_005066c0((int)this);
  return;
}


