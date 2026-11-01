
/* ==== TDaviEmbeddedFont.set_FaceName @ 0047e900 ==== 
 * signature: undefined TDaviEmbeddedFont.set_FaceName(void)
 * body: 0047e900-0047e940
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviEmbeddedFont_set_FaceName(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  undefined4 *puStack_8;
  
  puStack_10 = (undefined1 *)0x47e912;
  puStack_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_14 = &UNK_0047e941;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00403cb0((int *)(param_1 + 0x34),puStack_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_0047e948;
  puStack_14 = (undefined *)0x47e940;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


