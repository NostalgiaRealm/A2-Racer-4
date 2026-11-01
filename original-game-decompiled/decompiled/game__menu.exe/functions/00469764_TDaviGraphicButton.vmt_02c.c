
/* ==== TDaviGraphicButton.vmt_02c @ 00469764 ==== 
 * signature: int * __register TDaviGraphicButton.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 00469764-004697e3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviGraphicButton_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TButton_vmt_02c(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] & 0xffffffbf;
  piVar1 = FUN_00418b34((int *)&PTR_TPersistent_vmt_000_00416dc0,'\x01',extraout_ECX_00);
  param_1[0x80] = (int)piVar1;
  param_1[0x82] = 0;
  param_1[0x83] = 0xc0c0c0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


