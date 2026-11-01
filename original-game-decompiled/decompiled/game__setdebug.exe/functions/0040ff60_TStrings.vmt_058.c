
/* ==== TStrings.vmt_058 @ 0040ff60 ==== 
 * signature: undefined TStrings.vmt_058(void)
 * body: 0040ff60-0040ffa7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_058(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  code *pcStackY_14;
  
  pcStackY_14 = (code *)0x40ff77;
  piVar1 = FUN_00410cf8((int *)&PTR_THandleStream_vmt_000_0040de80,'\x01',param_2,0x20);
  pcStackY_14 = thunk_FUN_00403434;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x5c))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  pcStackY_14 = (code *)0x40ffa7;
  FUN_00402d14(piVar1);
  return;
}


