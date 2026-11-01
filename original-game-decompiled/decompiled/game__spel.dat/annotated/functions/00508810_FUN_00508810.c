
/* ==== FUN_00508810 @ 00508810 ==== 
 * signature: undefined __thiscall FUN_00508810(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 00508810-0050884e
 */

void __thiscall FUN_00508810(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xf0);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x178);
  }
  FUN_004f32e0(iVar1);
  *(undefined4 *)((int)this + param_1 * 4 + 0x1c) = 2;
  *(undefined4 *)((int)this + param_1 * 4 + 0x34) = param_2;
  *(undefined4 *)((int)this + param_1 * 4 + 0x4c) = param_3;
  FUN_005066c0((int)this);
  return;
}


