
/* ==== FUN_004f24b0 @ 004f24b0 ==== 
 * signature: undefined __fastcall FUN_004f24b0(int param_1)
 * body: 004f24b0-004f2507
 */

void __fastcall FUN_004f24b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *this;
  
  iVar3 = *(int *)(param_1 + 0x20);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    piVar1 = (int *)(*(short *)(iVar3 + 0x18) + 0x28 + iVar3);
    this = (void *)(*(short *)(iVar3 + 0x18) + iVar3);
    iVar3 = iVar2;
    if ((*(int *)(*(int *)(*piVar1 + 0xa4) + 0x230) !=
         *(int *)(*(int *)(*(int *)((int)this + 0x44) + 0xa4) + 0x230)) &&
       (FUN_0053bf10(this), (*(uint *)((int)this + 0x14) & 0xc000) == 0)) {
      FUN_0053ac00(this,0,2);
    }
  }
  return;
}


