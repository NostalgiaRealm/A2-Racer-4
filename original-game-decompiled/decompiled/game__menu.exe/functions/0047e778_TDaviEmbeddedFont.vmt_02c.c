
/* ==== TDaviEmbeddedFont.vmt_02c @ 0047e778 ==== 
 * signature: undefined TDaviEmbeddedFont.vmt_02c(void)
 * body: 0047e778-0047e7cf
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviEmbeddedFont_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
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
  TComponent_vmt_02c(param_1,'\0',param_3);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  FUN_00403c5c(param_1 + 0xd);
  FUN_00403cb0(param_1 + 0xe,(undefined4 *)&DAT_0047e7d8);
  if (cVar1 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


