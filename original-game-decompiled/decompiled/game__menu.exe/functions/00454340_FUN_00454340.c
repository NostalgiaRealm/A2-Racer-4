
/* ==== FUN_00454340 @ 00454340 ==== 
 * signature: undefined __register FUN_00454340(uint param_1, undefined * param_2)
 * body: 00454340-004543a3
 */

void FUN_00454340(uint param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;
  code *pcStackY_24;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x454354;
  FUN_00404090((int)param_2);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStackY_24 = (code *)0x454373;
  puStack_14 = &stack0xfffffffc;
  piVar1 = FUN_004128ac((int *)&PTR_THandleStream_vmt_000_0040f0bc,'\x01',param_2,0);
  pcStackY_24 = thunk_FUN_004036bc;
  uStackY_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  FUN_004543d0(param_1,piVar1);
  *in_FS_OFFSET = uStackY_28;
  pcStackY_24 = (code *)0x4543a3;
  FUN_00402f9c(piVar1);
  return;
}


