
/* ==== FUN_0053bcb0 @ 0053bcb0 ==== 
 * signature: undefined4 __thiscall FUN_0053bcb0(void * this, uint param_1, uint param_2, uint param_3, uint param_4)
 * body: 0053bcb0-0053bd26
 */

undefined4 __thiscall FUN_0053bcb0(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar3 = param_1 | param_2;
  uVar5 = param_3 | param_4;
  uVar4 = uVar3;
  if ((int)uVar3 < (int)uVar5) {
    uVar4 = uVar5;
    uVar5 = uVar3;
  }
  iVar1 = *(int *)((int)this + 0x828);
  puVar6 = (uint *)((int)this + iVar1 * 8 + 0x20);
  iVar2 = iVar1;
  while( true ) {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      if (0xff < iVar1) {
        return 1;
      }
      *(uint *)((int)this + iVar1 * 8 + 0x28) = uVar4;
      *(uint *)((int)this + *(int *)((int)this + 0x828) * 8 + 0x2c) = uVar5;
      *(int *)((int)this + 0x828) = *(int *)((int)this + 0x828) + 1;
      return 0;
    }
    if ((*puVar6 == uVar4) && (puVar6[1] == uVar5)) break;
    puVar6 = puVar6 + -2;
  }
  return 1;
}


