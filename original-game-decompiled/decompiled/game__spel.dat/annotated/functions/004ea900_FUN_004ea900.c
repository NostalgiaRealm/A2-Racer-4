
/* ==== FUN_004ea900 @ 004ea900 ==== 
 * signature: int __thiscall FUN_004ea900(void * this, int param_1)
 * body: 004ea900-004ea950
 */

int __thiscall FUN_004ea900(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x58))();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_004ec540(*(int *)(*(int *)((int)this + 0x5c) + 4) + iVar3 * 8);
      iVar2 = FUN_004edd30(iVar2);
      if (iVar2 == param_1) {
        return *(int *)(*(int *)((int)this + 0x5c) + 4) + iVar3 * 8;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


