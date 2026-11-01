
/* ==== TMenu.vmt_02c @ 004401a8 ==== 
 * signature: int * __register TMenu.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 004401a8-0044023d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TMenu_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  piVar1 = TMenuItem_vmt_02c((int *)&PTR_TMenuItem_vmt_000_0043bd08,'\x01',param_1);
  param_1[10] = (int)piVar1;
  piVar1[0x1f] = (int)param_1;
  piVar1[0x1e] = *(int *)(*param_1 + 0x38);
  piVar1[0x19] = (int)param_1;
  iVar2 = FUN_00402f6c((int *)&DAT_0043a068,'\x01',extraout_ECX_00);
  param_1[0xe] = iVar2;
  *(int **)(iVar2 + 0xc) = param_1;
  *(code **)(iVar2 + 8) = FUN_00440a08;
  *(undefined1 *)((int)param_1 + 0x35) = 1;
  TComponent_vmt_02c(param_1,'\0',param_3);
  iVar2 = param_1[10];
  *(undefined1 *)(iVar2 + 0x2f) = 0;
  *(undefined1 *)(iVar2 + 0x30) = 0;
  FUN_00440e1c(param_1);
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}


