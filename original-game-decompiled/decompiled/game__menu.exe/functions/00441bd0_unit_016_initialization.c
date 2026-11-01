
/* ==== unit_016_initialization @ 00441bd0 ==== 
 * signature: undefined unit_016_initialization(void)
 * body: 00441bd0-00441c2e
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_016_initialization(undefined4 param_1,undefined4 param_2,undefined **param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  bool bVar1;
  undefined **ppuStack_8;
  
  bVar1 = _DAT_004ac7cc == 0;
  _DAT_004ac7cc = _DAT_004ac7cc + -1;
  if (bVar1) {
    ppuStack_8 = param_3;
    FUN_00403a2c((int *)&DAT_00441acc);
    ppuStack_8 = &PTR_TMenuItem_vmt_000_0043bd08;
    FUN_0040fb30(&ppuStack_8,0);
    DAT_004ac7d0 = FUN_00402f6c((int *)&DAT_0040eb28,'\x01',extraout_ECX);
    DAT_004ac7c4 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0043c774,'\x01',extraout_ECX_00);
    DAT_004ac7c8 = FUN_00420154((int *)&PTR_TStack_vmt_000_0043c7e0,'\x01',extraout_ECX_01);
  }
  return;
}


