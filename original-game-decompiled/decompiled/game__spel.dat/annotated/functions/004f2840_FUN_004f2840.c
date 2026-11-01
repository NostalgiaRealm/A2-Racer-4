
/* ==== FUN_004f2840 @ 004f2840 ==== 
 * signature: undefined __fastcall FUN_004f2840(int param_1)
 * body: 004f2840-004f288c
 */

void __fastcall FUN_004f2840(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x24);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    iVar3 = *(short *)(iVar2 + 0x18) + iVar2;
    FUN_0053bdb0(iVar3);
    iVar2 = iVar1;
    if ((*(uint *)(iVar3 + 0x14) & 0xc000) != 0x4000) {
      this = *(void **)(*(int *)(param_1 + 0x18) + 0x10);
      FUN_0053b620(this,iVar3);
      FUN_0053a2f0(this,iVar3);
    }
  }
  return;
}


