
/* ==== FUN_0053f010 @ 0053f010 ==== 
 * signature: uint __thiscall FUN_0053f010(void * this, void * param_1)
 * body: 0053f010-0053f074
 */

uint __thiscall FUN_0053f010(void *this,void *param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)((int)this + 2);
  iVar2 = uVar3 - 1;
  if (iVar2 < 0) {
    return uVar3;
  }
  do {
    this_00 = *(int **)(*(int *)((int)this + 4) + iVar2 * 4);
    FUN_00505cc0(this_00);
    iVar1 = this_00[0x10];
    FUN_00504690(this_00,iVar1);
    if ((*(uint *)(iVar1 + 0x5c) & 0x300) == 0x100) {
      uVar3 = uVar3 - 1;
      FUN_0053e860(param_1,this_00);
    }
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar3;
}


