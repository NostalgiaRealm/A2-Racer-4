
/* ==== FUN_00521590 @ 00521590 ==== 
 * signature: undefined __thiscall FUN_00521590(void * this, uint * param_1)
 * body: 00521590-005215dc
 */

void __thiscall FUN_00521590(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_8;
  uint local_4;
  
  uVar1 = *param_1;
  local_4 = *(uint *)param_1[2];
  local_8 = uVar1;
  if (local_4 < uVar1) {
    local_8 = local_4;
    local_4 = uVar1;
  }
  iVar2 = FUN_00501940(*(void **)((int)this + 0x18),(byte *)&local_8);
  if (iVar2 == 0) {
    FUN_005019c0(*(void **)((int)this + 0x18),(byte *)&local_8,param_1);
  }
  return;
}


