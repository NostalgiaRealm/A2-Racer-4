
/* ==== FUN_004a44a0 @ 004a44a0 ==== 
 * signature: undefined4 __thiscall FUN_004a44a0(void * this, float param_1, float param_2)
 * body: 004a44a0-004a4501
 */

undefined4 __thiscall FUN_004a44a0(void *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x6c))();
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      fVar3 = (float10)(**(code **)**(undefined4 **)
                                     (*(int *)(*(int *)((int)this + 0x70) + 4) + iVar2 * 4))();
      if (fVar3 == (float10)param_1) {
        fVar3 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x70) + 4) +
                                                iVar2 * 4) + 8))();
        if (fVar3 == (float10)param_2) {
          return *(undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + iVar2 * 4);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}


