
/* ==== FUN_0049bd30 @ 0049bd30 ==== 
 * signature: undefined __thiscall FUN_0049bd30(void * this, void * param_1)
 * body: 0049bd30-0049bd9c
 */

void __thiscall FUN_0049bd30(void *this,void *param_1)

{
  bool bVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  
  pvVar2 = param_1;
  bVar1 = false;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    piVar3 = *(int **)(*(int *)((int)this + 0x1c) + 4);
    do {
      if (*piVar3 == 0) {
        bVar1 = true;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)((int)this + 0x14));
  }
  FUN_00499380(param_1,this);
  if (bVar1) {
    *(void **)(*(int *)(*(int *)((int)this + 0x1c) + 4) + iVar4 * 4) = pvVar2;
    return;
  }
  param_1 = pvVar2;
  FUN_004a5620(*(void **)((int)this + 0x1c),*(undefined4 **)((int)*(void **)((int)this + 0x1c) + 8),
               1,&param_1);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  return;
}


