
/* ==== TCustomPanel.vmt_034 @ 00450c54 ==== 
 * signature: undefined4 __register TCustomPanel.vmt_034(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00450c54-00450c7e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TCustomPanel_vmt_034(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined3 extraout_var;
  
  if (((char)param_1[0x7e] == '\0') &&
     (cVar1 = TWinControl_vmt_034(param_1,param_2,param_3), cVar1 != '\0')) {
    return CONCAT31(extraout_var,1);
  }
  return 0;
}


