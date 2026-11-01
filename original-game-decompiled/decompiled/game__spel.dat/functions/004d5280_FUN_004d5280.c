
/* ==== FUN_004d5280 @ 004d5280 ==== 
 * signature: uint __thiscall FUN_004d5280(void * this, byte param_1)
 * body: 004d5280-004d52c7
 */

uint __thiscall FUN_004d5280(void *this,byte param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = **(uint **)((int)this + 0x20);
  if (uVar3 != 0) {
    iVar1 = **(int **)((int)this + 0x30);
    if (uVar3 < iVar1 + uVar3) {
      **(int **)((int)this + 0x30) = iVar1 + -1;
      pbVar2 = (byte *)**(int **)((int)this + 0x20);
      **(int **)((int)this + 0x20) = (int)(pbVar2 + 1);
      *pbVar2 = param_1;
      return (uint)param_1;
    }
  }
  uVar3 = (**(code **)(*(int *)this + 4))(param_1);
  return uVar3;
}


