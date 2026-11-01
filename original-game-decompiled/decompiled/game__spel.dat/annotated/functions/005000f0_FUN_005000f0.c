
/* ==== FUN_005000f0 @ 005000f0 ==== 
 * signature: undefined __cdecl FUN_005000f0(int * param_1, int param_2)
 * body: 005000f0-0050015c
 */

void __cdecl FUN_005000f0(int *param_1,int param_2)

{
  void *this;
  uint *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  iVar3 = *(ushort *)(iVar2 + 2) - 1;
  if (-1 < iVar3) {
    do {
      this = *(void **)(*(int *)(iVar2 + 4) + iVar3 * 4);
      FUN_00500270(this,(int)param_1);
      this_00 = *(uint **)((int)this + 0x1d4);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    if (this_00 != (uint *)0x0) {
      uVar1 = *this_00;
      *this_00 = uVar1 & 0xfffffdff | 0x100;
      if (param_2 == 0) {
        if (0x7ffffff < (int)(uVar1 * 0x1000000)) {
          FUN_005005f0(this_00,*(int *)(*(int *)this_00[4] + 0xc));
          return;
        }
        FUN_00500650((int)this_00);
      }
    }
  }
  return;
}


