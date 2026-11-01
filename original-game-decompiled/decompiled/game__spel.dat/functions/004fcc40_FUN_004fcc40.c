
/* ==== FUN_004fcc40 @ 004fcc40 ==== 
 * signature: undefined __thiscall FUN_004fcc40(void * this, int param_1, int param_2)
 * body: 004fcc40-004fcd75
 */

void __thiscall FUN_004fcc40(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_200 [512];
  
  if (param_2 == 0) {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)((int)this + 0x3c) + 0xa0) + param_1 * 4) + 0x88) = 0;
    piVar3 = *(int **)((int)this + param_1 * 4 + 0xb0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x18))(1);
    }
    *(undefined4 *)((int)this + param_1 * 4 + 0xb0) = 0;
    return;
  }
  if (*(int *)((int)this + param_1 * 4 + 0xb0) == 0) {
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x14);
    FUN_004f5560((int)local_200);
    FUN_004f5950(local_200,iVar1);
    FUN_004f5960(local_200,*(undefined4 *)((int)this + 0x10));
    FUN_004f59b0(local_200,0);
    FUN_004f59d0(local_200,1);
    FUN_004f59d0(local_200,2);
    FUN_004f5970(local_200,0);
    FUN_004f5970(local_200,1);
    FUN_004f5970(local_200,2);
    iVar1 = *(int *)(iVar1 + 0xa4);
    iVar2 = *(int *)(*(int *)((int)this + 0x10) + 0xa4);
    *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(iVar2 + 0x94);
    *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(iVar2 + 0x98);
    *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(iVar2 + 0x9c);
    *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(iVar2 + 0xa0);
    piVar3 = FUN_004f5a10((int)local_200);
    *(int **)((int)this + param_1 * 4 + 0xb0) = piVar3;
    *(int **)(*(int *)(*(int *)(*(int *)((int)this + 0x3c) + 0xa0) + param_1 * 4) + 0x88) = piVar3;
  }
  return;
}


