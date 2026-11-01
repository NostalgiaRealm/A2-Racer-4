
/* ==== TDockTree.vmt_020 @ 00437e18 ==== 
 * signature: undefined TDockTree.vmt_020(void)
 * body: 00437e18-00437ef2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDockTree_vmt_020(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar3;
  undefined4 *puVar4;
  byte bVar5;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar5 = 0;
  if ((((*(byte *)(*(int *)(param_1 + 0x14) + 0x20) & 1) == 0) && (*(int *)(param_1 + 100) != 0)) &&
     (iVar1 = FUN_004332a0(*(int *)(param_1 + 0x14)), 0 < iVar1)) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),&iStack_1c);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x84))(*(int **)(param_1 + 0x14),&iStack_1c);
    if ((param_2 != '\0') ||
       (uVar2 = FUN_00408298(&iStack_1c,(int *)(param_1 + 0x20),0x10), (char)uVar2 == '\0')) {
      piVar3 = &iStack_1c;
      puVar4 = (undefined4 *)(param_1 + 0x20);
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *piVar3;
        piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      iVar1 = *(int *)(param_1 + 100);
      if (*(char *)(iVar1 + 0x10) == '\x01') {
        *(int *)(iVar1 + 0x20) = iStack_14 - iStack_1c;
        *(int *)(param_1 + 0x68) = iStack_10 - iStack_18;
      }
      else if (*(char *)(iVar1 + 0x10) == '\x02') {
        *(int *)(iVar1 + 0x20) = iStack_10 - iStack_18;
        *(int *)(param_1 + 0x68) = iStack_14 - iStack_1c;
      }
      iVar1 = FUN_004332a0(*(int *)(param_1 + 0x14));
      if ((0 < iVar1) && (FUN_00438204(param_1,0,extraout_ECX), *(int *)(param_1 + 0x6c) == 0)) {
        FUN_00436c30(param_1,0,extraout_ECX_00);
      }
    }
  }
  return;
}


