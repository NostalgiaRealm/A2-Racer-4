
/* ==== TMenuItem.vmt_010 @ 00435188 ==== 
 * signature: undefined __register TMenuItem.vmt_010(int * param_1, int param_2, char param_3)
 * body: 00435188-004351b8
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuItem_vmt_010(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  TComponent_vmt_010((int)param_1,param_2,param_3);
  if (param_3 == '\x01') {
    iVar1 = TMenuItem_get_Action((int)param_1);
    if (param_2 == iVar1) {
      TMenuItem_set_Action(param_1,0,extraout_ECX);
    }
  }
  return;
}


