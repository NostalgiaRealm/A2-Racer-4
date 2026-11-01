
/* ==== TIcon.vmt_014 @ 0041c998 ==== 
 * signature: undefined TIcon.vmt_014(void)
 * body: 0041c998-0041c9d3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIcon_vmt_014(int param_1,int *param_2,int *param_3)

{
  HICON hIcon;
  int cxWidth;
  int cyWidth;
  UINT istepIfAniCur;
  HBRUSH hbrFlickerFreeDraw;
  UINT diFlags;
  
  FUN_00417504(param_2,1);
  diFlags = 3;
  hbrFlickerFreeDraw = (HBRUSH)0x0;
  istepIfAniCur = 0;
  cyWidth = 0;
  cxWidth = 0;
  hIcon = (HICON)FUN_0041c9f0(param_1);
  DrawIconEx((HDC)param_2[1],*param_3,param_3[1],hIcon,cxWidth,cyWidth,istepIfAniCur,
             hbrFlickerFreeDraw,diFlags);
  return;
}


