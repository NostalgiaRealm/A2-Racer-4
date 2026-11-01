
/* ==== TfrmCharacter.timSelectionTimer @ 0049b18c ==== 
 * signature: undefined TfrmCharacter.timSelectionTimer(void)
 * body: 0049b18c-0049b1b1
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmCharacter_timSelectionTimer(int *param_1)

{
  TTimer_set_Enabled(param_1[0xc9],'\0');
  (**(code **)(*param_1 + 0xe8))(param_1,&PTR_TWinControl_vmt_000_0049999c);
  return;
}


