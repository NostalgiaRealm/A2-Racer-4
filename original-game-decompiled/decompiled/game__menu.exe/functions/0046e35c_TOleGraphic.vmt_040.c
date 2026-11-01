
/* ==== TOleGraphic.vmt_040 @ 0046e35c ==== 
 * signature: undefined TOleGraphic.vmt_040(void)
 * body: 0046e35c-0046e399
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleGraphic_vmt_040(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  code *pcStack_c;
  undefined4 *puStack_8;
  
  pcStack_c = (code *)&stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  pcStack_10 = thunk_FUN_004036bc;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00405808((undefined4 *)PTR_PTR_004ab60c,(int *)&puStack_8);
  FUN_0046e2dc(puStack_8);
  *in_FS_OFFSET = uStack_14;
  pcStack_c = FUN_0046e3a1;
  pcStack_10 = (code *)0x46e399;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


