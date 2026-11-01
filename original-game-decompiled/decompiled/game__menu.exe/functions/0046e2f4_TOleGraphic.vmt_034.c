
/* ==== TOleGraphic.vmt_034 @ 0046e2f4 ==== 
 * signature: undefined __register TOleGraphic.vmt_034(void)
 * body: 0046e2f4-0046e331
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleGraphic_vmt_034(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  code *pcStack_c;
  undefined4 *local_8;
  
  pcStack_c = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_10 = thunk_FUN_004036bc;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00405808((undefined4 *)PTR_PTR_004ab60c,(int *)&local_8);
  FUN_0046e2dc(local_8);
  *in_FS_OFFSET = uStack_14;
  pcStack_c = FUN_0046e339;
  pcStack_10 = (code *)0x46e331;
  FUN_00403c5c((int *)&local_8);
  return;
}


