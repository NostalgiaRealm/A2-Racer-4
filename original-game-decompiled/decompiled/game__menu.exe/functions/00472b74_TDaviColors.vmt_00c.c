
/* ==== TDaviColors.vmt_00c @ 00472b74 ==== 
 * signature: undefined __register TDaviColors.vmt_00c(int * param_1, char param_2, int param_3)
 * body: 00472b74-00472c35
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviColors_vmt_00c(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_130;
  code *pcStackY_12c;
  code *pcStackY_128;
  undefined4 in_stack_fffffedc;
  undefined4 in_stack_fffffee0;
  byte local_108 [256];
  int local_8;
  
  local_8 = 0;
  if (param_2 != '\0') {
    pcStackY_128 = (code *)0x472b91;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffedc,in_stack_fffffee0);
    param_3 = extraout_ECX;
  }
  pcStackY_12c = thunk_FUN_004036bc;
  uStackY_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_130;
  iVar1 = param_3;
  pcStackY_128 = (code *)&stack0xfffffffc;
  if (param_3 == 0) {
    pcStackY_128 = (code *)&stack0xfffffffc;
    FUN_00402ee4(*param_1,local_108);
    FUN_00403e80(&local_8,local_108);
    FUN_00403ee4(&local_8,(undefined4 *)".Create: aControl must be assigned");
    FUN_00403c40(local_8);
    iVar1 = extraout_ECX_00;
  }
  FUN_00402f6c(param_1,'\0',iVar1);
  param_1[1] = param_3;
  param_1[2] = -0x7ffffff1;
  param_1[3] = -0x7ffffff0;
  param_1[4] = -0x7fffffec;
  param_1[5] = -0x7fffffea;
  param_1[6] = -0x7fffffeb;
  param_1[7] = -0x7fffffea;
  param_1[8] = -0x7ffffff0;
  *in_FS_OFFSET = uStackY_130;
  pcStackY_128 = FUN_00472c3d;
  pcStackY_12c = (code *)0x472c35;
  FUN_00403c5c(&local_8);
  return;
}


