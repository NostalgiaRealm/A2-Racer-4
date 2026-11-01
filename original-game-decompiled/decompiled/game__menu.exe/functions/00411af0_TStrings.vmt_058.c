
/* ==== TStrings.vmt_058 @ 00411af0 ==== 
 * signature: undefined TStrings.vmt_058(void)
 * body: 00411af0-00411b37
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_058(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  code *pcStackY_14;
  
  pcStackY_14 = (code *)0x411b07;
  piVar1 = FUN_004128ac((int *)&PTR_THandleStream_vmt_000_0040f0bc,'\x01',param_2,0x20);
  pcStackY_14 = thunk_FUN_004036bc;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x5c))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  pcStackY_14 = (code *)0x411b37;
  FUN_00402f9c(piVar1);
  return;
}


