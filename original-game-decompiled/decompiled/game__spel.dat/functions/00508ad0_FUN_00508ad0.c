
/* ==== FUN_00508ad0 @ 00508ad0 ==== 
 * signature: undefined __thiscall FUN_00508ad0(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 00508ad0-00508b0e
 */

void __thiscall FUN_00508ad0(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xf0);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x178);
  }
  FUN_004f32e0(iVar1);
  *(undefined4 *)((int)this + param_1 * 4 + 0x28) = 2;
  *(undefined4 *)((int)this + param_1 * 4 + 0x40) = param_2;
  *(undefined4 *)((int)this + param_1 * 4 + 0x58) = param_3;
  FUN_005067a0((int)this);
  return;
}


