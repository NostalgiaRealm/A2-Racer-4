
/* ==== FUN_0050fa50 @ 0050fa50 ==== 
 * signature: undefined __thiscall FUN_0050fa50(void * this, int param_1, int param_2)
 * body: 0050fa50-0050fb0b
 */

void __thiscall FUN_0050fa50(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(*(int *)((int)this + 0xc) + param_2 * 4);
  if (puVar7 != (undefined4 *)0x0) {
    for (puVar1 = (undefined4 *)*puVar7; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1
        ) {
      if ((*(double *)(puVar1 + 2) < *(double *)(puVar7 + 2)) ||
         ((*(double *)(puVar1 + 2) == *(double *)(puVar7 + 2) && ((int)puVar1[4] < (int)puVar7[4])))
         ) {
        puVar7 = puVar1;
      }
    }
  }
  *(undefined4 **)(*(int *)((int)this + 8) + param_2 * 4) = puVar7;
  uVar2 = *(uint *)this;
  iVar6 = param_2 + uVar2;
  while( true ) {
    uVar2 = uVar2 >> 1;
    if (uVar2 == 0) {
      return;
    }
    iVar3 = *(int *)((int)this + 4);
    iVar6 = iVar6 >> 1;
    if (param_1 != *(int *)(iVar3 + iVar6 * 4)) break;
    iVar4 = *(int *)(iVar3 + iVar6 * 8);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + iVar6 * 4) = *(undefined4 *)(iVar3 + 4 + iVar6 * 8);
    }
    else {
      iVar5 = *(int *)(iVar3 + 4 + iVar6 * 8);
      if (((iVar5 == 0) || (*(double *)(iVar4 + 8) < *(double *)(iVar5 + 8))) ||
         ((*(double *)(iVar4 + 8) == *(double *)(iVar5 + 8) &&
          (*(int *)(iVar4 + 0x10) < *(int *)(iVar5 + 0x10))))) {
        *(int *)(iVar3 + iVar6 * 4) = iVar4;
      }
      else {
        *(int *)(iVar3 + iVar6 * 4) = iVar5;
      }
    }
  }
  return;
}


