
/* ==== FUN_0041c720 @ 0041c720 ==== 
 * signature: uint __thiscall FUN_0041c720(void * this, uint param_1, undefined4 * param_2)
 * body: 0041c720-0041c780
 */

uint __thiscall FUN_0041c720(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  void *this_00;
  int iVar2;
  
  if ((int)*(uint *)((int)this + 4) < 1) {
    *(undefined4 *)((int)this + 8) = 0xffffffff;
    return *(uint *)((int)this + 4) & 0xffffff00;
  }
  *(uint *)((int)this + 8) = param_1;
  if ((int)param_1 < 0) {
    return param_1 & 0xffffff00;
  }
  uVar1 = *(uint *)(*(int *)((int)this + 0xc) + param_1 * 4);
  if ((int)uVar1 < 0) {
    return uVar1 & 0xffffff00;
  }
  iVar2 = 0;
  this_00 = (void *)FUN_0049eb50(&DAT_006fbb5c,uVar1);
  FUN_0049e550(this_00,iVar2);
  iVar2 = *(int *)((int)this + 0xc);
  *param_2 = *(undefined4 *)(iVar2 + *(int *)((int)this + 8) * 4);
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


