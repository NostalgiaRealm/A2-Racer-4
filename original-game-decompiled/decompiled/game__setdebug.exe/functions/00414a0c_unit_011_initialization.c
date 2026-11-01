
/* ==== unit_011_initialization @ 00414a0c ==== 
 * signature: undefined unit_011_initialization(void)
 * body: 00414a0c-00414a7e
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
  
  bVar1 = _DAT_00447618 == 0;
  _DAT_00447618 = _DAT_00447618 + -1;
  if (bVar1) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0044762c);
    FUN_0040512c(FUN_0041494c);
    DAT_00447610 = FUN_0040bb24((int *)&DAT_0040794c,'\x01',extraout_ECX);
    DAT_0044761c = FUN_0040f234((int *)&DAT_0040da10,'\x01',extraout_ECX_00);
    DAT_00447620 = FUN_00402ce4((int *)&PTR_TPersistent_vmt_000_0040dcac,'\x01',extraout_ECX_01);
    DAT_00447624 = FUN_0040f234((int *)&DAT_0040da10,'\x01',extraout_ECX_02);
    DAT_00447628 = FUN_0040f234((int *)&DAT_0040da10,'\x01',extraout_ECX_03);
  }
  return;
}


