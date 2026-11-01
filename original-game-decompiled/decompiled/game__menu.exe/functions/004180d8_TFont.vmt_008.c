
/* ==== TFont.vmt_008 @ 004180d8 ==== 
 * signature: undefined TFont.vmt_008(void)
 * body: 004180d8-00418175;0041819a-004181a9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TFont_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4180f3;
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00416a80);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x418103;
    FUN_00417d98((int)param_1);
    pcStack_18 = thunk_FUN_004036bc;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    pcStack_20 = (code *)0x41811b;
    puStack_14 = &stack0xfffffffc;
    FUN_00417d98((int)param_2);
    pcStack_24 = thunk_FUN_004036bc;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    pcStack_20 = (code *)&stack0xfffffffc;
    FUN_00417878(DAT_004ac69c,param_1,(undefined4 *)param_2[4]);
    TFont_set_Color(param_1,param_2[6],extraout_ECX);
    if (param_1[7] != param_2[7]) {
      iVar2 = TFont_get_Size((int)param_2);
      TFont_set_Size(param_1,iVar2);
    }
    *in_FS_OFFSET = uStack_28;
    pcStack_20 = FUN_0041817d;
    pcStack_24 = (code *)0x418175;
    FUN_00417da8((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x4181a5;
  TPersistent_vmt_008(param_1,param_2);
  return;
}


