
/* ==== TCustomTabControl.vmt_090 @ 00484954 ==== 
 * signature: undefined TCustomTabControl.vmt_090(void)
 * body: 00484954-00484a47
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomTabControl_vmt_090(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00484114();
  TWinControl_vmt_090(param_1,param_2);
  FUN_00431844(param_1,(int)param_2,"SysTabControl32");
  uVar1 = FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  param_2[1] = *(uint *)(&DAT_004ab4a4 +
                        (uint)*(byte *)((int)param_1 + 0x20e) * 4 + (uVar1 & 0x7f) * 0x10) |
               param_2[1] | 0x2000000U |
               *(uint *)(&DAT_004ab4c4 + (uint)*(byte *)((int)param_1 + 0x20d) * 4) |
               *(uint *)(&DAT_004ab4d0 + (uint)*(byte *)((int)param_1 + 0x203) * 4);
  if ((char)param_1[0x5d] == '\0') {
    param_2[1] = param_2[1] | 0x8000;
  }
  if ((char)param_1[0x80] != '\0') {
    param_2[1] = param_2[1] | 0x200;
  }
  if (*(char *)((int)param_1 + 0x201) != '\0') {
    param_2[1] = param_2[1] | 4;
  }
  if (*(char *)((int)param_1 + 0x202) != '\0') {
    param_2[1] = param_2[1] | 0x2000;
  }
  if ((short)param_1[0x85] != 0) {
    param_2[1] = param_2[1] | 0x400;
  }
  if (((char)param_1[0x7d] != '\0') && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    param_2[1] = param_2[1] | 0x40;
  }
  if ((char)param_1[0x83] != '\0') {
    param_2[1] = param_2[1] | 1;
  }
  param_2[9] = param_2[9] & 0xfffffffcU | 8;
  return;
}


