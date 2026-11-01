
/* ==== unit_101_initialization @ 00464f80 ==== 
 * signature: undefined unit_101_initialization(void)
 * body: 00464f80-00464fa2
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_101_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ad16c == 0;
  _DAT_004ad16c = _DAT_004ad16c + -1;
  if (bVar1) {
    DAT_004ab02c = TMultiCaster_vmt_02c
                             ((int *)&PTR_TPersistent_vmt_000_004644b4,'\x01',
                              *(int **)PTR_DAT_004ab8ac);
  }
  return;
}


