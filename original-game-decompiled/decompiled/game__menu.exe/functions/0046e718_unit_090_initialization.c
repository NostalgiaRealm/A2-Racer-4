
/* ==== unit_090_initialization @ 0046e718 ==== 
 * signature: undefined unit_090_initialization(void)
 * body: 0046e718-0046e73a
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_090_initialization(void)

{
  bool bVar1;
  
  bVar1 = _DAT_004ad1c8 == 0;
  _DAT_004ad1c8 = _DAT_004ad1c8 + -1;
  if (bVar1) {
    FUN_0041b6b8(&PTR_TPicture_vmt_000_0041702c,(undefined *)0x0,(undefined4 *)0x0,
                 &PTR_TPersistent_vmt_000_0046d380);
    FUN_0046e514();
  }
  return;
}


