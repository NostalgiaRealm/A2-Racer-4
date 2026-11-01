
/* ==== TScrollingWinControl.vmt_090 @ 0043ab84 ==== 
 * signature: undefined __register TScrollingWinControl.vmt_090(int * param_1, int * param_2)
 * body: 0043ab84-0043ab93
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TScrollingWinControl_vmt_090(int *param_1,int *param_2)

{
  TWinControl_vmt_090(param_1,param_2);
  param_2[9] = param_2[9] & 0xfffffffc;
  return;
}


