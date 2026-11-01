
/* ==== FUN_004ffdb0 @ 004ffdb0 ==== 
 * signature: undefined __thiscall FUN_004ffdb0(void * this, int * param_1)
 * body: 004ffdb0-004ffdf5
 */

void __thiscall FUN_004ffdb0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (*(short *)((int)param_1 + 0xe) != 0) {
    do {
      iVar1 = *(int *)(param_1[4] + iVar3 * 4);
      FUN_00500060(this,iVar1);
      iVar2 = *(int *)(iVar1 + 0xc);
      *(void **)(iVar1 + 0x1d4) = this;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)((int)param_1 + 0xe));
  }
  FUN_005005c0(*(void **)(iVar2 + 8),param_1);
  return;
}


