
/* ==== TfrmCharacter.vmt_0fc @ 0049aac4 ==== 
 * signature: undefined TfrmCharacter.vmt_0fc(void)
 * body: 0049aac4-0049ab7f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TfrmCharacter_vmt_0fc(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *in_FS_OFFSET;
  undefined4 *puVar3;
  uint uStack_11c;
  code *pcStack_118;
  undefined1 *puStack_114;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_114 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  pcStack_118 = thunk_FUN_004036bc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar3 = puStack_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar3,2);
  uVar1 = 2;
  iVar2 = FUN_0048c22c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  FUN_004806b0(*(int **)PTR_DAT_004ab694,0x49abb8,*(int *)(iVar2 + 0x10),uVar1);
  TTimer_set_Enabled(param_1[0xc9],'\x01');
  *in_FS_OFFSET = uVar1;
  FUN_00403c80(&iStack_c,2);
  return;
}


