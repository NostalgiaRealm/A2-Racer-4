
/* ==== FUN_00546400 @ 00546400 ==== 
 * signature: undefined __thiscall FUN_00546400(void * this, int param_1, int param_2)
 * body: 00546400-00546450
 */

void __thiscall FUN_00546400(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x2c)) {
    do {
      iVar3 = iVar5 * *(int *)((int)this + 0x28);
      iVar4 = *(int *)((int)this + 0xc);
      iVar6 = param_1 + iVar3;
      iVar3 = iVar3 + param_2;
      uVar2 = *(undefined8 *)(iVar4 + iVar6 * 8);
      puVar1 = (undefined4 *)(iVar4 + iVar6 * 8);
      *puVar1 = *(undefined4 *)(iVar4 + iVar3 * 8);
      puVar1[1] = *(undefined4 *)(iVar4 + 4 + iVar3 * 8);
      iVar4 = iVar5 * *(int *)((int)this + 0x28);
      iVar5 = iVar5 + 1;
      *(undefined8 *)(*(int *)((int)this + 0xc) + (iVar4 + param_2) * 8) = uVar2;
    } while (iVar5 < *(int *)((int)this + 0x2c));
  }
  return;
}


