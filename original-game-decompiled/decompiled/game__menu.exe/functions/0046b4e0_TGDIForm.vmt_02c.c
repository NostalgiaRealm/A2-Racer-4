
/* ==== TGDIForm.vmt_02c @ 0046b4e0 ==== 
 * signature: int * __register TGDIForm.vmt_02c(int * param_1, char param_2, undefined4 param_3)
 * body: 0046b4e0-0046b561
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TGDIForm_vmt_02c(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  HRGN hRgn;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  piVar1 = TDaviLinkedGraphic_vmt_014((int *)&PTR_TPersistent_vmt_000_0045ca28,'\x01',param_1);
  param_1[0xb4] = (int)piVar1;
  FUN_0045d4a4((int)piVar1,extraout_EDX,extraout_ECX_00,FUN_0046b828,param_1);
  TCustomForm_vmt_02c(param_1,'\0',param_3);
  hRgn = (HRGN)param_1[0xb6];
  hWnd = (HWND)FUN_004349e0(param_1);
  GetWindowRgn(hWnd,hRgn);
  *(undefined1 *)(param_1 + 0x7a) = 1;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}


