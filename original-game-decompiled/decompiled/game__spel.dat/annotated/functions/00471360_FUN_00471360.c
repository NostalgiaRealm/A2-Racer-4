
/* ==== FUN_00471360 @ 00471360 ==== 
 * signature: undefined __thiscall FUN_00471360(void * this, undefined1 * param_1)
 * body: 00471360-004713ba
 */

void __thiscall FUN_00471360(void *this,undefined1 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = *(int **)((int)this + 0xc);
  piVar5 = (int *)piVar1[1];
  piVar2 = operator_new(0x18);
  piVar4 = piVar1;
  if (piVar1 == (int *)0x0) {
    piVar4 = piVar2;
  }
  *piVar2 = (int)piVar4;
  if (piVar5 == (int *)0x0) {
    piVar5 = piVar2;
  }
  piVar2[1] = (int)piVar5;
  piVar1[1] = (int)piVar2;
  *(int **)piVar2[1] = piVar2;
  FUN_00468770((undefined1 *)(piVar2 + 2),param_1);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  iVar3 = (*(code *)**(undefined4 **)((int)this + 4))();
  *(int *)((int)this + 0x24) = iVar3 + -1;
  return;
}


