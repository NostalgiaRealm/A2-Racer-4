
/* ==== TMenuItem.vmt_00c @ 00432ec8 ==== 
 * signature: undefined __register TMenuItem.vmt_00c(int * param_1)
 * body: 00432ec8-00432f03
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuItem_vmt_00c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  TComponent_vmt_00c((int)param_1);
  iVar1 = TMenuItem_get_Action((int)param_1);
  if (iVar1 != 0) {
    uVar2 = TMenuItem_get_Action((int)param_1);
    FUN_00402ef0(param_1,uVar2,CONCAT31((int3)((uint)extraout_ECX >> 8),1));
  }
  if ((char)param_1[0x1a] != '\0') {
    FUN_00432f04(param_1);
  }
  return;
}


