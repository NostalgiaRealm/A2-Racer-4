
/* ==== FUN_00546510 @ 00546510 ==== 
 * signature: undefined __fastcall FUN_00546510(int param_1)
 * body: 00546510-00546541
 */

void __fastcall FUN_00546510(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x24);
    *(undefined4 *)(iVar3 + iVar1 * 8) = *(undefined4 *)(iVar2 + iVar1 * 8);
    *(undefined4 *)(iVar3 + 4 + iVar1 * 8) = *(undefined4 *)(iVar2 + 4 + iVar1 * 8);
  }
  FUN_00546460(param_1);
  FUN_005464b0(param_1);
  return;
}


