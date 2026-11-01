
/* ==== FUN_00500160 @ 00500160 ==== 
 * signature: undefined __stdcall FUN_00500160(int * param_1)
 * body: 00500160-0050019f
 */

void FUN_00500160(int *param_1)

{
  int *this;
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  if (*(short *)(iVar1 + 2) != 0) {
    this = *(int **)(**(int **)(iVar1 + 4) + 0x1d4);
    if (0x7ffffff < *this * 0x1000000) {
      FUN_005005f0(this,*(int *)(*(int *)this[4] + 0xc));
      return;
    }
    FUN_00500650((int)this);
  }
  return;
}


