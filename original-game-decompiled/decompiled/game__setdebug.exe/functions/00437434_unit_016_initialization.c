
/* ==== unit_016_initialization @ 00437434 ==== 
 * signature: undefined unit_016_initialization(void)
 * body: 00437434-00437492
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
  
  bVar1 = _DAT_004477bc == 0;
  _DAT_004477bc = _DAT_004477bc + -1;
  if (bVar1) {
    ppuStack_8 = param_3;
    FUN_004037a4((int *)&DAT_00437330);
    ppuStack_8 = &PTR_TMenuItem_vmt_000_00431628;
    FUN_0040e8f4(&ppuStack_8,0);
    DAT_004477c0 = FUN_00402ce4((int *)&DAT_0040da68,'\x01',extraout_ECX);
    DAT_004477b4 = FUN_00402ce4((int *)&PTR_TList_vmt_000_00432094,'\x01',extraout_ECX_00);
    DAT_004477b8 = FUN_0041d3f8((int *)&PTR_TStack_vmt_000_00432100,'\x01',extraout_ECX_01);
  }
  return;
}


