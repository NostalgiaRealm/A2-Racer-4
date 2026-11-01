
/* ==== TCustomGDIButton.vmt_0c0 @ 00468254 ==== 
 * signature: undefined TCustomGDIButton.vmt_0c0(void)
 * body: 00468254-00468283
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIButton_vmt_0c0(int param_1,undefined4 param_2,LONG *param_3)

{
  int iVar1;
  LONG *pLVar2;
  LONG aLStack_14 [4];
  
  pLVar2 = aLStack_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar2 = *param_3;
    param_3 = param_3 + 1;
    pLVar2 = pLVar2 + 1;
  }
  FUN_00465adc(*(int **)(param_1 + 0x120),aLStack_14,(int)PTR_DAT_004ab8d0,0);
  return;
}


