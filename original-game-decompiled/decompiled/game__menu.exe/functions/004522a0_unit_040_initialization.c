
/* ==== unit_040_initialization @ 004522a0 ==== 
 * signature: undefined unit_040_initialization(void)
 * body: 004522a0-004522c5
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_040_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ac868 == 0;
  _DAT_004ac868 = _DAT_004ac868 + -1;
  if (bVar1) {
    DAT_004ac864 = TStStringResource_vmt_000
                             ((int *)&PTR_TStStringResource_vmt_000_00451d04,'\x01',DAT_004ac4dc,
                              "SYSTOOLS_STRINGS_ENGLISH");
  }
  return;
}


