
/* ==== FUN_005135a0 @ 005135a0 ==== 
 * signature: int * __thiscall FUN_005135a0(void * this, int param_1)
 * body: 005135a0-00513652
 */

int * __thiscall FUN_005135a0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)((int)this + 0x88);
  *(int **)((int)this + 0x88) = piVar1 + 7;
  iVar2 = 0;
  piVar1[2] = (int)(float)*(double *)(param_1 + 8);
  piVar1[3] = (int)(float)*(double *)(param_1 + 0x10);
  piVar1[4] = (int)(float)*(double *)(param_1 + 0x18);
  piVar1[5] = (int)(float)*(double *)(param_1 + 0x28);
  do {
    *(undefined1 *)((int)piVar1 + iVar2 + 0x18) = *(undefined1 *)(param_1 + 0x30 + iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  *(undefined1 *)((int)piVar1 + 0x1b) = 0;
  iVar2 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x38) != 0) {
    if (iVar2 == 0) {
      piVar1[1] = 0;
    }
    else {
      piVar1[1] = iVar2 - (int)piVar1;
      *(int *)(*(int *)(param_1 + 0x34) + 4) = (int)piVar1 - *(int *)(param_1 + 0x34);
      *(uint *)(*(int *)(param_1 + 0x34) + 8) =
           *(uint *)(*(int *)(param_1 + 0x34) + 8) & 0xfffffffd | 1;
    }
    FUN_005135a0(this,*(int *)(param_1 + 0x38));
    piVar3 = FUN_005135a0(this,*(int *)(param_1 + 0x3c));
    *piVar1 = (int)piVar3 - (int)piVar1;
    return piVar1;
  }
  *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffc;
  iVar2 = *(int *)(param_1 + 0x34);
  *piVar1 = 0;
  piVar1[1] = iVar2 - (int)piVar1;
  return piVar1;
}


