
/* ==== FUN_004f2910 @ 004f2910 ==== 
 * signature: undefined __thiscall FUN_004f2910(void * this, int param_1)
 * body: 004f2910-004f297a
 */

void __thiscall FUN_004f2910(void *this,int param_1)

{
  int iVar1;
  int *this_00;
  byte *pbVar2;
  int iVar3;
  
  while (iVar1 = *(int *)((int)this + 0x28), iVar1 != 0) {
    iVar3 = (int)*(short *)(iVar1 + 0xc);
    this_00 = *(int **)(iVar3 + 0x70 + iVar1);
    pbVar2 = *(byte **)(*(int *)(iVar3 + 0x24 + iVar1) + 0xa8);
    if (param_1 == 0) {
      FUN_004f5390(*(byte **)(((int *)(iVar3 + iVar1))[4] + 0xa8));
      FUN_004f5390(pbVar2);
    }
    FUN_0053e860(this_00,(int *)(iVar3 + iVar1));
    if ((*(short *)((int)this_00 + 0x3e) == 0) && (this_00 != (int *)0x0)) {
      (**(code **)(*this_00 + 0x18))(1);
    }
  }
  return;
}


