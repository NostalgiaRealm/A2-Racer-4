
/* ==== TfrmQuickRace.FormCreate @ 0049bd5c ==== 
 * signature: undefined TfrmQuickRace.FormCreate(void)
 * body: 0049bd5c-0049bd94
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmQuickRace_FormCreate(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  
  TGameMenuScreen_FormCreate(param_1);
  piVar1 = TBooleanList_vmt_004((int *)&DAT_0045e328,'\x01',extraout_ECX);
  *(int **)(param_1 + 0x358) = piVar1;
  FUN_0049c78c(param_1);
  *(int *)(param_1 + 0x2ec) = param_1;
  *(undefined **)(param_1 + 0x2e8) = &UNK_0049c6a0;
  return;
}


