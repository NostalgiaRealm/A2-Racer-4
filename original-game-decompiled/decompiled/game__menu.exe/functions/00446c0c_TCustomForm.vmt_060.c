
/* ==== TCustomForm.vmt_060 @ 00446c0c ==== 
 * signature: undefined TCustomForm.vmt_060(void)
 * body: 00446c0c-00446c40
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_060(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  
  if ((param_2 != (int *)param_1[9]) && (param_1 != param_2)) {
    if ((int *)param_1[9] == (int *)0x0) {
      FUN_00431dbc(param_1);
      param_3 = extraout_ECX;
    }
    TControl_vmt_060(param_1,param_2,param_3);
    if (param_1[9] == 0) {
      FUN_00431f54(param_1);
    }
  }
  return;
}


