
/* ==== FUN_004a859c @ 004a859c ==== 
 * signature: undefined FUN_004a859c(void)
 * body: 004a859c-004a8698;004a86a0-004a86c5
 */

void FUN_004a859c(int param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_130;
  code *pcStack_12c;
  undefined1 *puStack_128;
  undefined4 uStack_124;
  code *pcStack_120;
  code *pcStack_11c;
  uint *puStack_110;
  byte abStack_10c [256];
  int iStack_c;
  int iStack_8;
  
  pcStack_11c = (code *)&stack0xfffffffc;
  puStack_110 = (uint *)0x0;
  iStack_c = 0;
  iStack_8 = 0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  if (DAT_004ab5c4 == '\0') {
    DAT_004ab5c4 = 1;
    puStack_128 = (undefined1 *)0x4a85e7;
    FUN_0044d190(*(int *)PTR_DAT_004ab8ac,param_2,(uint)param_3);
    if (*(char *)(*(int *)PTR_DAT_004ab8ac + 0x8c) != '\0') {
      puStack_128 = (undefined1 *)0x4a85fc;
      FUN_00403b08();
    }
    pcStack_12c = thunk_FUN_004036bc;
    uStack_130 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_130;
    if (param_3 == (int *)0x0) {
      puStack_128 = &stack0xfffffffc;
      FUN_00405808(&PTR_DAT_004a8594,&iStack_8);
    }
    else {
      puStack_128 = &stack0xfffffffc;
      FUN_004a73c8(param_3,&iStack_8);
    }
    bVar1 = FUN_004a818c();
    if (bVar1) {
      iVar3 = iStack_8;
      FUN_00402ee4(param_1,abStack_10c);
      FUN_00403e80(&iStack_c,abStack_10c);
      FUN_004a86f8(param_1,iStack_c,0x4a86dc,iVar3);
    }
    uVar2 = 0;
    FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&puStack_110);
    FUN_004a7f2c(&PTR_TWinControl_vmt_000_004a7568,puStack_110,param_3,(byte)uVar2);
    *in_FS_OFFSET = uVar2;
    DAT_004ab5c4 = 0;
    return;
  }
  *in_FS_OFFSET = uStack_124;
  pcStack_11c = FUN_004a86cd;
  pcStack_120 = (code *)0x4a86b8;
  FUN_00403c5c((int *)&puStack_110);
  pcStack_120 = (code *)0x4a86c5;
  FUN_00403c80(&iStack_c,2);
  return;
}


