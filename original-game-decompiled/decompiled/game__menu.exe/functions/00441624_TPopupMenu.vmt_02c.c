
/* ==== TPopupMenu.vmt_02c @ 00441624 ==== 
 * signature: undefined TPopupMenu.vmt_02c(void)
 * body: 00441624-00441697
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TPopupMenu_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TMenu_vmt_02c(param_1,'\0',param_3);
  param_1[0x12] = -1;
  param_1[0x13] = -1;
  iVar1 = param_1[10];
  *(int **)(iVar1 + 0x84) = param_1;
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(*param_1 + 0x3c);
  param_1[0xb] = *(int *)(*(int *)PTR_DAT_004ab8ac + 0x24);
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  FUN_004415e0(DAT_004ac7c4,(int)param_1);
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}


