
/* ==== TScrollingWinControl.vmt_084 @ 0043b1ec ==== 
 * signature: undefined __register TScrollingWinControl.vmt_084(int * param_1, undefined4 * param_2)
 * body: 0043b1ec-0043b25d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TScrollingWinControl_vmt_084(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int local_1c [4];
  
  bVar5 = 0;
  piVar4 = local_1c;
  iVar1 = TForm_get_ClientHeight(param_1);
  iVar2 = FUN_0041dda4(iVar1,*(int *)(param_1[0x7d] + 0x10));
  iVar3 = TForm_get_ClientWidth(param_1);
  iVar1 = param_1[0x7c];
  iVar3 = FUN_0041dda4(*(int *)(iVar1 + 0x10),iVar3);
  FUN_0040e5c8(-*(int *)(iVar1 + 0xc),-*(int *)(param_1[0x7d] + 0xc),iVar3,piVar4,iVar2);
  piVar4 = local_1c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *piVar4;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    param_2 = param_2 + (uint)bVar5 * -2 + 1;
  }
  TWinControl_vmt_084();
  return;
}


