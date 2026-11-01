
/* ==== unit_011_initialization @ 004165c0 ==== 
 * signature: undefined unit_011_initialization(void)
 * body: 004165c0-00416632
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_011_initialization(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  bool bVar1;
  
  bVar1 = _DAT_004ac620 == 0;
  _DAT_004ac620 = _DAT_004ac620 + -1;
  if (bVar1) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004ac634);
    FUN_0040569c(FUN_00416500);
    DAT_004ac618 = FUN_0040c814((int *)&DAT_004080a0,'\x01',extraout_ECX);
    DAT_004ac624 = FUN_004105f8((int *)&DAT_0040ead0,'\x01',extraout_ECX_00);
    DAT_004ac628 = FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',extraout_ECX_01);
    DAT_004ac62c = FUN_004105f8((int *)&DAT_0040ead0,'\x01',extraout_ECX_02);
    DAT_004ac630 = FUN_004105f8((int *)&DAT_0040ead0,'\x01',extraout_ECX_03);
  }
  return;
}


