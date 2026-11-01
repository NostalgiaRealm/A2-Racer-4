
/* ==== TMediaPlayer.vmt_02c @ 004a1928 ==== 
 * signature: undefined TMediaPlayer.vmt_02c(void)
 * body: 004a1928-004a1a0d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TMediaPlayer_vmt_02c(int *param_1,char param_2,int *param_3)

{
  byte bVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TCustomControl_vmt_02c(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 0x40;
  FUN_004a1a8c((int)param_1);
  *(undefined2 *)(param_1 + 0xa2) = 0x1ff;
  *(undefined2 *)((int)param_1 + 0x28a) = 0x1ff;
  *(undefined2 *)(param_1 + 0xa3) = 0x1ff;
  bVar1 = 0;
  do {
    uVar3 = (uint)bVar1;
    *(undefined1 *)(param_1 + uVar3 * 4 + 0x7e) = 1;
    *(undefined1 *)((int)param_1 + uVar3 * 0x10 + 0x1f9) = 1;
    *(undefined1 *)((int)param_1 + uVar3 * 0x10 + 0x1fa) = 1;
    *(undefined1 *)((int)param_1 + uVar3 * 0x10 + 0x1fb) = 0;
    bVar1 = bVar1 + 1;
  } while (bVar1 != 9);
  TControl_set_Width(param_1,0xf0);
  TControl_set_Height(param_1,0x1e);
  *(undefined1 *)(param_1 + 0xb2) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 1;
  *(undefined1 *)((int)param_1 + 0x305) = 0;
  *(undefined1 *)((int)param_1 + 0x306) = 1;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  TGroupBox_set_TabStop((int)param_1,'\x01');
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}


