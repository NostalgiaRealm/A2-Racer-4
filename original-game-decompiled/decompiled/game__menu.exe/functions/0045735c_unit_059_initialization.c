
/* ==== unit_059_initialization @ 0045735c ==== 
 * signature: undefined unit_059_initialization(void)
 * body: 0045735c-00457397
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_059_initialization(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = _DAT_004ac8e0 == 0;
  _DAT_004ac8e0 = _DAT_004ac8e0 + -1;
  if (bVar1) {
    FUN_0041b6dc(&PTR_TPicture_vmt_000_0041702c,CONCAT22((short)((uint)param_2 >> 0x10),8),
                 (int)&PTR_TPersistent_vmt_000_00454aa4);
    FUN_0041b6b8(&PTR_TPicture_vmt_000_0041702c,&DAT_004573c4,
                 (undefined4 *)"Device Independent Bitmap",&PTR_TPersistent_vmt_000_00454aa4);
  }
  return;
}


