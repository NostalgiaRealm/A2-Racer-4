
/* ==== TFont.vmt_008 @ 00416450 ==== 
 * signature: undefined TFont.vmt_008(void)
 * body: 00416450-004164ed;00416512-00416521
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
  
  puStack_14 = (undefined1 *)0x41646b;
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_vmt_000_00414ecc);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x41647b;
    FUN_00416110((int)param_1);
    pcStack_18 = thunk_FUN_00403434;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    pcStack_20 = (code *)0x416493;
    puStack_14 = &stack0xfffffffc;
    FUN_00416110((int)param_2);
    pcStack_24 = thunk_FUN_00403434;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    pcStack_20 = (code *)&stack0xfffffffc;
    FUN_00415bf0(DAT_00447694,param_1,(undefined4 *)param_2[4]);
    TFont_set_Color(param_1,param_2[6],extraout_ECX);
    if (param_1[7] != param_2[7]) {
      iVar2 = TFont_get_Size((int)param_2);
      TFont_set_Size(param_1,iVar2);
    }
    *in_FS_OFFSET = uStack_28;
    pcStack_20 = FUN_004164f5;
    pcStack_24 = (code *)0x4164ed;
    FUN_00416120((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x41651d;
  TPersistent_vmt_008(param_1,param_2);
  return;
}


