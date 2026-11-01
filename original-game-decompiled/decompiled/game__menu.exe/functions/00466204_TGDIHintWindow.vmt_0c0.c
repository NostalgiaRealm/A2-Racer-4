
/* ==== TGDIHintWindow.vmt_0c0 @ 00466204 ==== 
 * signature: undefined __register TGDIHintWindow.vmt_0c0(int * param_1, undefined4 param_2, undefined * param_3, LPRECT param_4, int * param_5)
 * body: 00466204-00466241
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGDIHintWindow_vmt_0c0
               (int *param_1,undefined4 param_2,undefined *param_3,LPRECT param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = FUN_00465ffc(param_1,param_5);
  param_1[0x81] = iVar1;
  iVar1 = FUN_00465fd0(param_1);
  FUN_00466a44(iVar1,param_2,param_3,param_4,param_5);
  return;
}


