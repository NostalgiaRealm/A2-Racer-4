
/* ==== TCustomForm.vmt_088 @ 00447198 ==== 
 * signature: undefined TCustomForm.vmt_088(void)
 * body: 00447198-004471d2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_088(int *param_1,undefined4 param_2,int *param_3)

{
  TScrollingWinControl_vmt_088(param_1,param_2,param_3);
  if ((HWND)param_1[0x8f] != (HWND)0x0) {
    SetWindowPos((HWND)param_1[0x8f],(HWND)0x1,*param_3,param_3[1],param_3[2] - *param_3,
                 param_3[3] - param_3[1],0x14);
  }
  return;
}


