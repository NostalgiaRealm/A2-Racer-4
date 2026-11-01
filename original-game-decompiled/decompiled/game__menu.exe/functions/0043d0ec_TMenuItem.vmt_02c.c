
/* ==== TMenuItem.vmt_02c @ 0043d0ec ==== 
 * signature: int * __register TMenuItem.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 0043d0ec-0043d164
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TMenuItem_vmt_02c(int *param_1,char param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  TComponent_vmt_02c(param_1,'\0',param_3);
  *(undefined1 *)((int)param_1 + 0x32) = 1;
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  *(undefined1 *)((int)param_1 + 0x2f) = 2;
  *(undefined1 *)(param_1 + 0xc) = 2;
  uVar1 = FUN_0043cc64();
  *(short *)(param_1 + 0x11) = (short)uVar1;
  param_1[0xd] = -1;
  iVar2 = FUN_00402f6c((int *)&DAT_0043a068,'\x01',extraout_ECX_00);
  param_1[0x1b] = iVar2;
  *(int **)(iVar2 + 0xc) = param_1;
  *(code **)(iVar2 + 8) = FUN_0043f8d8;
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


