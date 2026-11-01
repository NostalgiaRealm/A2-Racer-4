
/* ==== TGraphic.vmt_048 @ 0041ac90 ==== 
 * signature: undefined TGraphic.vmt_048(void)
 * body: 0041ac90-0041acd7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGraphic_vmt_048(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  code *pcStackY_14;
  
  pcStackY_14 = (code *)0x41aca7;
  piVar1 = FUN_004128ac((int *)&PTR_THandleStream_vmt_000_0040f0bc,'\x01',param_2,0x20);
  pcStackY_14 = thunk_FUN_004036bc;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x50))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  pcStackY_14 = (code *)0x41acd7;
  FUN_00402f9c(piVar1);
  return;
}


