
/* ==== TStrings.vmt_064 @ 00411d84 ==== 
 * signature: undefined __register TStrings.vmt_064(int * param_1, undefined * param_2)
 * body: 00411d84-00411dce
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_064(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  code *pcStackY_14;
  
  pcStackY_14 = (code *)0x411d9e;
  piVar1 = FUN_004128ac((int *)&PTR_THandleStream_vmt_000_0040f0bc,'\x01',param_2,0xffff);
  pcStackY_14 = thunk_FUN_004036bc;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x68))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  pcStackY_14 = (code *)0x411dce;
  FUN_00402f9c(piVar1);
  return;
}


