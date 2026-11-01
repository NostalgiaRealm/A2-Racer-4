
/* ==== TApplication.vmt_02c @ 00440f28 ==== 
 * signature: int * __register TApplication.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 00440f28-004410b0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TApplication_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  HICON pHVar3;
  char *pcVar4;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffee0;
  undefined4 in_stack_fffffee4;
  byte local_105;
  CHAR aCStack_104 [255];
  char local_5;
  
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403014((int)param_1,param_2,param_3,in_stack_fffffee0,in_stack_fffffee4);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  TComponent_vmt_02c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 10) = 0;
  iVar1 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX_00);
  param_1[0x20] = iVar1;
  iVar1 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX_01);
  param_1[0x26] = iVar1;
  param_1[0x14] = 0;
  param_1[0x1d] = 0;
  param_1[0x13] = -0x7fffffe8;
  param_1[0x1a] = 500;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x1c] = 0;
  param_1[0x19] = 0x9c4;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x8d) = 1;
  piVar2 = TIcon_vmt_00c((int *)&PTR_TPersistent_vmt_000_0041585c,'\x01',extraout_ECX_02);
  param_1[0x22] = (int)piVar2;
  pHVar3 = LoadIconA(*(HINSTANCE *)PTR_DAT_00446b5c,"MAINICON");
  FUN_0041cc84(piVar2,pHVar3);
  iVar1 = param_1[0x22];
  *(int **)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_004428f8;
  GetModuleFileNameA(*(HMODULE *)PTR_DAT_00446b5c,(LPSTR)&local_105,0x100);
  OemToCharA((LPCSTR)&local_105,(LPSTR)&local_105);
  pcVar4 = FUN_0040b54c(&local_105,'\\');
  if (pcVar4 != (char *)0x0) {
    FUN_00408088((char *)&local_105,pcVar4 + 1);
  }
  pcVar4 = FUN_0040b574(&local_105,'.');
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  CharLowerA(aCStack_104);
  FUN_00403be8(param_1 + 0x1f,(char *)&local_105,0x100);
  if (*PTR_DAT_00446a6c == '\0') {
    FUN_004411a0((int)param_1);
  }
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  *(undefined1 *)((int)param_1 + 0x4a) = 1;
  *(undefined1 *)((int)param_1 + 0x4b) = 1;
  *(undefined1 *)((int)param_1 + 0x8e) = 1;
  param_1[0x24] = 0;
  if (local_5 != '\0') {
    FUN_0040306c(param_1);
    *in_FS_OFFSET = in_stack_fffffee0;
  }
  return param_1;
}


