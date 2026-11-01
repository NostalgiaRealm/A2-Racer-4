
/* ==== TfrmMainScreen.vmt_0fc @ 0049da44 ==== 
 * signature: undefined __register TfrmMainScreen.vmt_0fc(int * param_1)
 * body: 0049da44-0049db0a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TfrmMainScreen_vmt_0fc(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined4 *local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcVar1 = (code *)&stack0xfffffffc;
  if ((char)param_1[0xcf] != '\0') {
    FUN_00403f28((int *)&local_8,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
                 (undefined4 *)"static.ini");
    FUN_0048e148(*(int **)(*(int *)PTR_DAT_004ab694 + 0xcc),local_8);
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)PTR_DAT_004ab694 + 0xcc) + 8))();
    uVar4 = FUN_0045f46c();
    FUN_0045fd98(uVar4,0x49db34,piVar3);
    pcVar1 = pcStack_10;
  }
  pcStack_10 = pcVar1;
  cVar2 = (**(code **)(*(int *)param_1[0xc3] + 0xb8))();
  if (cVar2 == '\0') {
    *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) = 1;
  }
  else {
    *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) = 2;
  }
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_vmt_000_0049cca0);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0049db12;
  pcStack_14 = (code *)0x49db0a;
  FUN_00403c5c((int *)&local_8);
  return;
}


