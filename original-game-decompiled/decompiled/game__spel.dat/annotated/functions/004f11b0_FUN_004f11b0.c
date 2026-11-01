
/* ==== FUN_004f11b0 @ 004f11b0 ==== 
 * signature: undefined __fastcall FUN_004f11b0(int param_1)
 * body: 004f11b0-004f11d8
 */

void __fastcall FUN_004f11b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))();
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 8) + 4) + iVar3;
      iVar3 = iVar3 + 0x28;
      iVar1 = iVar1 + -1;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 0x18);
    } while (iVar1 != 0);
  }
  return;
}


