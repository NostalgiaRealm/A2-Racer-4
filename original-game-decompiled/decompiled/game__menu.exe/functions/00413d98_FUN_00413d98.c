
/* ==== FUN_00413d98 @ 00413d98 ==== 
 * signature: undefined __register FUN_00413d98(int * param_1, int * param_2, uint param_3)
 * body: 00413d98-00413df2;00413dfa-00413e07
 */

void FUN_00413d98(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  if (param_1[0xc] == 0) {
    puStack_10 = (undefined1 *)0x413db7;
    iVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',param_3);
    param_1[0xc] = iVar1;
    pcStack_14 = thunk_FUN_004036bc;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_00413e08(param_1,param_2,extraout_ECX);
    FUN_0041356c(param_1);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x413e04;
    pcStack_14 = (code *)0x413df2;
    FUN_004136b0((int)param_1);
    return;
  }
  puStack_10 = (undefined1 *)0x413e04;
  FUN_00413e08(param_1,param_2,param_3);
  return;
}


