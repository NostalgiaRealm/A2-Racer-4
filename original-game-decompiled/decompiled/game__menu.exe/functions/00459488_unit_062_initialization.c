
/* ==== unit_062_initialization @ 00459488 ==== 
 * signature: undefined unit_062_initialization(void)
 * body: 00459488-004594af
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_062_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ac8f4 == 0;
  _DAT_004ac8f4 = _DAT_004ac8f4 + -1;
  if (bVar1) {
    FUN_0041b6b8(&PTR_TPicture_vmt_000_0041702c,&DAT_004594d4,(undefined4 *)"Truevision Targa",
                 &PTR_TPersistent_vmt_000_00458968);
  }
  return;
}


