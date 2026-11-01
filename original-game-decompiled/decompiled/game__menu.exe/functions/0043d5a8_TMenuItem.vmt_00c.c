
/* ==== TMenuItem.vmt_00c @ 0043d5a8 ==== 
 * signature: undefined __register TMenuItem.vmt_00c(int * param_1)
 * body: 0043d5a8-0043d5e3
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
    FUN_00403178(param_1,uVar2,CONCAT31((int3)((uint)extraout_ECX >> 8),1));
  }
  if ((char)param_1[0x1a] != '\0') {
    FUN_0043d5e4(param_1);
  }
  return;
}


