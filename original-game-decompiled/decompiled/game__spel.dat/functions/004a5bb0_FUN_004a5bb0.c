
/* ==== FUN_004a5bb0 @ 004a5bb0 ==== 
 * signature: undefined4 * __thiscall FUN_004a5bb0(void * this, int param_1, int * param_2)
 * body: 004a5bb0-004a5c47
 */

undefined4 * __thiscall FUN_004a5bb0(void *this,int param_1,int *param_2)

{
  undefined4 local_4;
  
  FUN_004fb4d0(this,*(undefined4 *)(param_1 + 0x14),param_2);
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(int *)((int)this + 0x70) = param_1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined ***)this = &PTR_FUN_00577324;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = local_4;
  return this;
}


