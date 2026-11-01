
/* ==== FUN_004fdd80 @ 004fdd80 ==== 
 * signature: undefined __thiscall FUN_004fdd80(void * this, int param_1, float param_2)
 * body: 004fdd80-004fddc1
 */

void __thiscall FUN_004fdd80(void *this,int param_1,float param_2)

{
  undefined4 *this_00;
  int iVar1;
  
  iVar1 = param_1 * 0x7c;
  this_00 = (undefined4 *)((int)this + iVar1 + 0x68);
  *this_00 = 0;
  *(undefined4 *)((int)this + iVar1 + 0x6c) = 0;
  *(undefined4 *)((int)this + iVar1 + 0x70) = 0;
  *(undefined4 *)((int)this + *(int *)((int)this + 0x620) * 4 + iVar1 + 0x68) = 0x3f800000;
  FUN_004f9c10(this_00,*(int *)((int)this + 0x624),param_2);
  return;
}


