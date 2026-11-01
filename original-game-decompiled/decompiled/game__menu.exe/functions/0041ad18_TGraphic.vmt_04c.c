
/* ==== TGraphic.vmt_04c @ 0041ad18 ==== 
 * signature: undefined __register TGraphic.vmt_04c(int * param_1, undefined * param_2)
 * body: 0041ad18-0041ad62
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGraphic_vmt_04c(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  code *pcStackY_14;
  
  pcStackY_14 = (code *)0x41ad32;
  piVar1 = FUN_004128ac((int *)&PTR_THandleStream_vmt_000_0040f0bc,'\x01',param_2,0xffff);
  pcStackY_14 = thunk_FUN_004036bc;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x54))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  pcStackY_14 = (code *)0x41ad62;
  FUN_00402f9c(piVar1);
  return;
}


