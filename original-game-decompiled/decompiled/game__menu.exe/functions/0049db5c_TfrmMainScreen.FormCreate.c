
/* ==== TfrmMainScreen.FormCreate @ 0049db5c ==== 
 * signature: undefined TfrmMainScreen.FormCreate(void)
 * body: 0049db5c-0049dbcd
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmMainScreen_FormCreate(int param_1)

{
  undefined4 uVar1;
  
  TGameMenuScreen_FormCreate(param_1);
  FUN_00481698(*(int *)(param_1 + 0x328),0x49dbd8);
  FUN_00481698(*(int *)(param_1 + 0x32c),0x49dbe8);
  FUN_00481698(*(int *)(param_1 + 0x330),0x49dbf8);
  FUN_00481698(*(int *)(param_1 + 0x338),0x49dc08);
  FUN_00481698(*(int *)(param_1 + 0x334),0x49dc18);
  uVar1 = func_0x00491024();
  (**(code **)(**(int **)(param_1 + 0x308) + 0x5c))(*(int **)(param_1 + 0x308),uVar1);
  return;
}


