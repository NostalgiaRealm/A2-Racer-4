
/* ==== FUN_004a73c8 @ 004a73c8 ==== 
 * signature: undefined __register FUN_004a73c8(int * param_1, int * param_2)
 * body: 004a73c8-004a74a2
 */

void FUN_004a73c8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  int local_18;
  char *local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  pcStack_24 = (code *)&stack0xfffffffc;
  local_18 = 0;
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (param_1 == (int *)0x0) {
    pcStack_24 = (code *)&stack0xfffffffc;
    FUN_00405808(&PTR_DAT_004a73c0,param_2);
  }
  else {
    uVar1 = FUN_00403114(param_1,(int)&PTR_EDavilex_vmt_000_00453ba0);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_00403114(param_1,(int)&DAT_00407624);
      if ((char)uVar1 == '\0') {
        local_14 = "TranslateMenuException: ";
        local_10 = 0xb;
        FUN_00405808(&PTR_DAT_004a73c0,&local_18);
        local_c = local_18;
        local_8 = 0xb;
        FUN_00409254((byte *)"%s: %s",&local_14,1,param_2);
      }
      else {
        FUN_00403c5c(param_2);
        iVar2 = FUN_0040312c(param_1,(int)&DAT_00407624);
        FUN_00403cb0(param_2,*(undefined4 **)(iVar2 + 4));
      }
    }
    else {
      iVar2 = FUN_0040312c(param_1,(int)&PTR_EDavilex_vmt_000_00453ba0);
      FUN_00403cb0(param_2,*(undefined4 **)(iVar2 + 0x18));
    }
  }
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_004a74aa;
  pcStack_28 = (code *)0x4a74a2;
  FUN_00403c5c(&local_18);
  return;
}


