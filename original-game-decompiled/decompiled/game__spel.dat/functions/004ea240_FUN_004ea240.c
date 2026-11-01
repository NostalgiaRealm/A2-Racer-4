
/* ==== FUN_004ea240 @ 004ea240 ==== 
 * signature: undefined __thiscall FUN_004ea240(void * this, int param_1)
 * body: 004ea240-004ea2ba
 */

void __thiscall FUN_004ea240(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iStack_c;
  int local_8;
  int iStack_4;
  
  FUN_004eddd0((int)&local_8);
  local_8 = (*(code *)**(undefined4 **)((int)this + 4))();
  local_8 = local_8 + -1;
  iStack_c = (*(code *)**(undefined4 **)(param_1 + 4))();
  if (0 < iStack_c) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 8) + 4) + iVar3;
      uVar1 = (*(code *)**(undefined4 **)((int)this + 0x58))();
      *(undefined4 *)(iVar2 + 0x10) = uVar1;
      iStack_4 = iVar2;
      FUN_004ecac0(*(void **)((int)this + 0x5c),
                   *(undefined4 **)((int)*(void **)((int)this + 0x5c) + 8),1,&local_8);
      iVar3 = iVar3 + 0x28;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  return;
}


