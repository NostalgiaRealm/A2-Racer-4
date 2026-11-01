
/* ==== TControl.vmt_00c @ 0043044c ==== 
 * signature: undefined __register TControl.vmt_00c(int * param_1)
 * body: 0043044c-00430481
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_00c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  TComponent_vmt_00c((int)param_1);
  iVar1 = TButton_get_Action((int)param_1);
  if (iVar1 != 0) {
    uVar2 = TButton_get_Action((int)param_1);
    FUN_00403178(param_1,uVar2,CONCAT31((int3)((uint)extraout_ECX >> 8),1));
  }
  FUN_0042de78((int)param_1);
  return;
}


