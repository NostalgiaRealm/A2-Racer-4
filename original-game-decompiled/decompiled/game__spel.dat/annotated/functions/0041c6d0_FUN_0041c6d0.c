
/* ==== FUN_0041c6d0 @ 0041c6d0 ==== 
 * signature: uint __thiscall FUN_0041c6d0(void * this, undefined4 * param_1)
 * body: 0041c6d0-0041c719
 */

uint __thiscall FUN_0041c6d0(void *this,undefined4 *param_1)

{
  uint uVar1;
  void *this_00;
  int iVar2;
  void *local_4;
  
  local_4 = this;
  uVar1 = FUN_0041c610(this,(int *)&local_4);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  iVar2 = 0;
  this_00 = (void *)FUN_0049eb50(&DAT_006fbb5c,
                                 *(int *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8) * 4));
  FUN_0049e550(this_00,iVar2);
  *param_1 = *(undefined4 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8) * 4);
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


