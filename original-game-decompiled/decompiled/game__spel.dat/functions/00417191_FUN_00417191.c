
/* ==== FUN_00417191 @ 00417191 ==== 
 * signature: int __thiscall FUN_00417191(void * this, undefined4 param_1, int param_2)
 * body: 00417191-004171d7
 */

int __thiscall FUN_00417191(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x18))();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      if (*(int *)(*(int *)(*(int *)((int)this + 0x1c) + 4) + iVar1) == param_2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x18;
      iVar2 = (*(code *)**(undefined4 **)((int)this + 0x18))();
    } while (iVar3 < iVar2);
  }
  return -1;
}


