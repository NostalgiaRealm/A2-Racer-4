
/* ==== TControlActionLink.vmt_020 @ 00423814 ==== 
 * signature: undefined TControlActionLink.vmt_020(void)
 * body: 00423814-0042387a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControlActionLink_vmt_020(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  uint *puStack_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  puStack_8 = (uint *)0x0;
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = TActionLink_vmt_020(param_1);
  if (cVar2 != '\0') {
    TLabel_get_Caption(*(int *)(param_1 + 0x18),(int *)&puStack_8);
    puVar1 = puStack_8;
    iVar3 = FUN_00402ea4(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0042f24c);
    FUN_00403d48(puVar1,*(uint **)(iVar3 + 0x54));
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00423882;
  pcStack_14 = (code *)0x42387a;
  FUN_004039b8((int *)&puStack_8);
  return;
}


