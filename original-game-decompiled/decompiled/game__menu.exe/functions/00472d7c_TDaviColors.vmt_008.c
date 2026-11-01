
/* ==== TDaviColors.vmt_008 @ 00472d7c ==== 
 * signature: undefined TDaviColors.vmt_008(void)
 * body: 00472d7c-00472ee5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviColors_vmt_008(int *param_1,int *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  code *pcStack_120;
  code *pcStack_11c;
  int iStack_10c;
  byte abStack_108 [256];
  int iStack_8;
  
  pcStack_11c = (code *)&stack0xfffffffc;
  iStack_10c = 0;
  iStack_8 = 0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  pcVar1 = (code *)&stack0xfffffffc;
  if (param_2 == (int *)0x0) {
    FUN_00402ee4(*param_1,abStack_108);
    FUN_00403e80(&iStack_8,abStack_108);
    FUN_00403ee4(&iStack_8,(undefined4 *)".Assign: aSource not assigned.");
    FUN_00403c40(iStack_8);
    pcVar1 = pcStack_11c;
  }
  pcStack_11c = pcVar1;
  uVar2 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00472a1c);
  if ((char)uVar2 == '\0') {
    FUN_00402ee4(*param_1,abStack_108);
    FUN_00403e80(&iStack_10c,abStack_108);
    FUN_00403ee4(&iStack_10c,(undefined4 *)".Assign: aSource not a TDaviColors.");
    FUN_00403c40(iStack_10c);
  }
  iVar3 = FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_00472a1c);
  param_1[2] = *(int *)(iVar3 + 8);
  FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_00472a1c);
  param_1[3] = *(int *)(iVar3 + 0xc);
  FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_00472a1c);
  param_1[4] = *(int *)(iVar3 + 0x10);
  FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_00472a1c);
  param_1[5] = *(int *)(iVar3 + 0x14);
  FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_00472a1c);
  param_1[6] = *(int *)(iVar3 + 0x18);
  FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_00472a1c);
  param_1[7] = *(int *)(iVar3 + 0x1c);
  FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_00472a1c);
  param_1[8] = *(int *)(iVar3 + 0x20);
  FUN_00472cb0((int)param_1);
  *in_FS_OFFSET = uStack_124;
  pcStack_11c = FUN_00472eed;
  pcStack_120 = (code *)0x472edd;
  FUN_00403c5c(&iStack_10c);
  pcStack_120 = (code *)0x472ee5;
  FUN_00403c5c(&iStack_8);
  return;
}


