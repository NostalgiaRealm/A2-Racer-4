
/* ==== FUN_0041f4dc @ 0041f4dc ==== 
 * signature: undefined __register FUN_0041f4dc(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0041f4dc-0041f568;0041f580-0041f58c
 */

void FUN_0041f4dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  HICON pHVar3;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  undefined4 local_e;
  int *local_8;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar1 + 0xc) == 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      puStack_20 = (undefined1 *)0x41f4ff;
      FUN_004197bc();
      param_3 = extraout_ECX;
    }
    puStack_20 = (undefined1 *)0x41f50b;
    local_8 = (int *)FUN_00402f6c((int *)&PTR_TMemoryStream_vmt_000_0040f194,'\x01',param_3);
    pcStack_24 = thunk_FUN_00403408;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar2 = FUN_0041f428(param_1);
    if (iVar2 == DAT_004ac668) {
      FUN_00402c30(&local_e,6,0);
      FUN_004126f0(local_8,&local_e,6);
    }
    else {
      pHVar3 = (HICON)FUN_0041f428(param_1);
      FUN_0041a854(local_8,pHVar3,'\0');
    }
    *in_FS_OFFSET = uStack_28;
    *(int **)(iVar1 + 0xc) = local_8;
  }
  return;
}


