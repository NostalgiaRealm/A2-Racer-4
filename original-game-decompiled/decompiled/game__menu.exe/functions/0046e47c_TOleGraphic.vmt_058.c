
/* ==== TOleGraphic.vmt_058 @ 0046e47c ==== 
 * signature: undefined TOleGraphic.vmt_058(void)
 * body: 0046e47c-0046e4ba
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleGraphic_vmt_058(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined4 *puStack_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00405808((undefined4 *)PTR_PTR_004ab60c,(int *)&puStack_8);
  FUN_0046e2dc(puStack_8);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0046e4c2;
  pcStack_14 = (code *)0x46e4ba;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


