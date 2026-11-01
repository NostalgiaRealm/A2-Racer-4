
/* ==== TControl.vmt_010 @ 00423dc8 ==== 
 * signature: undefined __register TControl.vmt_010(int * param_1, int param_2, char param_3)
 * body: 00423dc8-00423e08
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_010(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  TComponent_vmt_010((int)param_1,param_2,param_3);
  if (param_3 == '\x01') {
    if (param_2 == param_1[0x1b]) {
      TLabel_set_PopupMenu(param_1,(int *)0x0);
    }
    else {
      iVar1 = TButton_get_Action((int)param_1);
      if (param_2 == iVar1) {
        TButton_set_Action(param_1,0,extraout_ECX);
      }
    }
  }
  return;
}


