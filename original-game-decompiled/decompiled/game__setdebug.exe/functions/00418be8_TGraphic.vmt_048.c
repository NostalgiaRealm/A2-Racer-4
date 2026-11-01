
/* ==== TGraphic.vmt_048 @ 00418be8 ==== 
 * signature: undefined TGraphic.vmt_048(void)
 * body: 00418be8-00418c2f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGraphic_vmt_048(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  code *pcStackY_14;
  
  pcStackY_14 = (code *)0x418bff;
  piVar1 = FUN_00410cf8((int *)&PTR_THandleStream_vmt_000_0040de80,'\x01',param_2,0x20);
  pcStackY_14 = thunk_FUN_00403434;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x50))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  pcStackY_14 = (code *)0x418c2f;
  FUN_00402d14(piVar1);
  return;
}


