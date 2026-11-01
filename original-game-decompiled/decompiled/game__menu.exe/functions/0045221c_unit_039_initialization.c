
/* ==== unit_039_initialization @ 0045221c ==== 
 * signature: undefined unit_039_initialization(void)
 * body: 0045221c-00452241
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_039_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ac860 == 0;
  _DAT_004ac860 = _DAT_004ac860 + -1;
  if (bVar1) {
    DAT_004ac85c = TStStringResource_vmt_000
                             ((int *)&PTR_TStStringResource_vmt_000_00451d04,'\x01',DAT_004ac4dc,
                              "STSRMGR_STRINGS");
  }
  return;
}


