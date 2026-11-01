
/* ==== FUN_004a21d0 @ 004a21d0 ==== 
 * signature: undefined __thiscall FUN_004a21d0(void * this, int param_1)
 * body: 004a21d0-004a223f
 */

void __thiscall FUN_004a21d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  FUN_004a2040(&param_1,param_1);
  iVar1 = *(int *)(iVar1 + 8);
  iVar2 = *(int *)(iVar1 + 0x40);
  if (*(int *)((int)this + 8) == iVar2) {
    iVar2 = *(int *)(iVar2 + 0xb0);
    iVar3 = *(int *)(*(int *)(iVar1 + 0x44) + 0xb0);
  }
  else {
    iVar3 = *(int *)(iVar2 + 0xb0);
    iVar2 = *(int *)(*(int *)(iVar1 + 0x44) + 0xb0);
  }
  if ((iVar2 != 0) && (*(code **)(iVar2 + 0x18) != (code *)0x0)) {
    (**(code **)(iVar2 + 0x18))(&param_1,iVar2);
  }
  if ((iVar3 != 0) && (*(code **)(iVar3 + 0x18) != (code *)0x0)) {
    (**(code **)(iVar3 + 0x18))(&param_1,iVar3);
  }
  return;
}


