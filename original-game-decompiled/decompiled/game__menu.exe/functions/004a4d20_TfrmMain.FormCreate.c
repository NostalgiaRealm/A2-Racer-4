
/* ==== TfrmMain.FormCreate @ 004a4d20 ==== 
 * signature: undefined TfrmMain.FormCreate(void)
 * body: 004a4d20-004a4e07
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmMain_FormCreate(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HWND pHVar4;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  uint *puStack_8;
  
  puStack_14 = &stack0xfffffffc;
  puStack_8 = (uint *)0x0;
  puStack_18 = &UNK_004a4e08;
  puStack_1c = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,(undefined4 *)"FormCreate",0);
  *(undefined1 *)(param_1 + 0xb4) = 1;
  uVar2 = FUN_0044b100();
  uVar3 = FUN_0044b0f4();
  (**(code **)(*param_1 + 0x7c))(param_1,0,0,uVar3,uVar2);
  FUN_0044cea8(*(int *)PTR_DAT_004ab8ac,*(uint **)(PTR_DAT_004ab8b4 + 0x10));
  FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&puStack_8);
  TGroupBox_set_Caption((int)param_1,puStack_8);
  pHVar4 = FindWindowA(PTR_s_Progman_004ab5bc,(LPCSTR)0x0);
  param_1[0xb5] = (int)pHVar4;
  pHVar4 = FindWindowA(PTR_s_Shell_TrayWnd_004ab5c0,(LPCSTR)0x0);
  param_1[0xb6] = (int)pHVar4;
  ShowWindow((HWND)param_1[0xb5],0);
  ShowWindow((HWND)param_1[0xb6],0);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = uVar3;
  puStack_1c = &UNK_004a4e0f;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


