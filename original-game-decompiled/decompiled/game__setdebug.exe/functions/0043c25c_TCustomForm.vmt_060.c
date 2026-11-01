
/* ==== TCustomForm.vmt_060 @ 0043c25c ==== 
 * signature: undefined TCustomForm.vmt_060(void)
 * body: 0043c25c-0043c290
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_060(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  
  if ((param_2 != (int *)param_1[9]) && (param_1 != param_2)) {
    if ((int *)param_1[9] == (int *)0x0) {
      FUN_00427e1c(param_1);
      param_3 = extraout_ECX;
    }
    TControl_vmt_060(param_1,param_2,param_3);
    if (param_1[9] == 0) {
      FUN_00427fb4(param_1);
    }
  }
  return;
}


