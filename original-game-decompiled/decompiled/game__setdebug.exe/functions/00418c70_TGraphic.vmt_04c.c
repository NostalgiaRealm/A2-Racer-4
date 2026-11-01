
/* ==== TGraphic.vmt_04c @ 00418c70 ==== 
 * signature: undefined __register TGraphic.vmt_04c(int * param_1, undefined * param_2)
 * body: 00418c70-00418cba
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGraphic_vmt_04c(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  code *pcStackY_14;
  
  pcStackY_14 = (code *)0x418c8a;
  piVar1 = FUN_00410cf8((int *)&PTR_THandleStream_vmt_000_0040de80,'\x01',param_2,0xffff);
  pcStackY_14 = thunk_FUN_00403434;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x54))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  pcStackY_14 = (code *)0x418cba;
  FUN_00402d14(piVar1);
  return;
}


