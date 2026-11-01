
/* ==== FUN_005001a0 @ 005001a0 ==== 
 * signature: undefined __thiscall FUN_005001a0(void * this, int * param_1)
 * body: 005001a0-0050026f
 */

void __thiscall FUN_005001a0(void *this,int *param_1)

{
  byte *this_00;
  int *piVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  int *this_01;
  int *this_02;
  int iVar5;
  
  iVar3 = (**(code **)(*param_1 + 8))();
  this_01 = (int *)0x0;
  iVar5 = *(ushort *)(iVar3 + 2) - 1;
  bVar2 = false;
  bVar4 = 8;
  if (-1 < iVar5) {
    do {
      this_00 = *(byte **)(*(int *)(iVar3 + 4) + iVar5 * 4);
      this_02 = this_01;
      if ((*this_00 & 0xc) == 0) {
        piVar1 = *(int **)(this_00 + 0x1d4);
        bVar4 = bVar4 & (byte)*(undefined4 *)(this_00 + 0x5c);
        this_02 = piVar1;
        if ((this_01 != (int *)0x0) && (this_02 = this_01, piVar1 != this_01)) {
          FUN_004ffdb0(this_01,piVar1);
          if (piVar1 != (int *)0x0) {
            FUN_004fff20((int)piVar1);
            FUN_0054b339(piVar1);
          }
          bVar2 = true;
        }
        FUN_005002e0(this_00,(int)param_1);
      }
      iVar5 = iVar5 + -1;
      this_01 = this_02;
    } while (-1 < iVar5);
    if (bVar2) {
      FUN_004ffd20((int)this_02);
      FUN_004ff990(this_02);
    }
    if (bVar4 < 8) {
      FUN_005005f0(this_02,*(int *)this);
    }
  }
  return;
}


