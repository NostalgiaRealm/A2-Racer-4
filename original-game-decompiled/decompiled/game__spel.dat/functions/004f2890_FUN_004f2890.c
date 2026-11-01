
/* ==== FUN_004f2890 @ 004f2890 ==== 
 * signature: undefined __fastcall FUN_004f2890(int param_1)
 * body: 004f2890-004f28b8
 */

void __fastcall FUN_004f2890(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = *(void **)(*(int *)(param_1 + 0x18) + 0x10);
  iVar2 = *(int *)(param_1 + 0x20);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_0053ba40(this,(int *)(*(short *)(iVar2 + 0x18) + iVar2));
    iVar2 = iVar1;
  }
  return;
}


