
/* ==== TBalloonForm.vmt_02c @ 004779ac ==== 
 * signature: undefined TBalloonForm.vmt_02c(void)
 * body: 004779ac-00477a90
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TBalloonForm_vmt_02c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  TCustomForm_vmt_02c(param_1,'\0',param_3);
  TForm_set_BorderStyle((int)param_1,'\0');
  TForm_set_BorderIcons((int)param_1,'\0');
  TGroupBox_set_Color((int)param_1,0xffffff);
  TFont_set_Name((int *)param_1[0x16],(undefined4 *)"MS Sans Serif");
  TFont_set_Size((int *)param_1[0x16],10);
  TControl_set_Height(param_1,0xe6);
  TControl_set_Width(param_1,200);
  *(undefined1 *)(param_1 + 0xb6) = 1;
  param_1[0xb7] = 0;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  TDaviColors_set_Btn3DLight(*(int *)(param_1[0xb4] + 300),0xffffff);
  TDaviColors_set_BtnFace(*(int *)(param_1[0xb4] + 300),0xffffff);
  TDaviColors_set_BtnShadow(*(int *)(param_1[0xb4] + 300),0xffffff);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


