
/* ==== TDaviWave.set_Filename @ 004540a8 ==== 
 * signature: undefined TDaviWave.set_Filename(void)
 * body: 004540a8-00454112
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviWave_set_Filename(uint param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  uint *puStack_8;
  
  puStack_10 = (undefined1 *)0x4540ba;
  puStack_8 = param_2;
  FUN_00404090((int)param_2);
  bVar1 = true;
  puStack_14 = &UNK_00454113;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00403fec(*(uint **)(param_1 + 0x24),puStack_8);
  if (!bVar1) {
    FUN_00403cb0((int *)(param_1 + 0x24),puStack_8);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      FUN_00454164(param_1);
      if (puStack_8 != (uint *)0x0) {
        FUN_00454340(param_1,(undefined *)puStack_8);
      }
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_0045411a;
  puStack_14 = (undefined *)0x454112;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


