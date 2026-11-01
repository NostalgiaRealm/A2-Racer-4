
/* ==== FUN_0041caa4 @ 0041caa4 ==== 
 * signature: undefined __register FUN_0041caa4(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0041caa4-0041cb30;0041cb48-0041cb54
 */

void FUN_0041caa4(int param_1,undefined4 param_2,undefined4 param_3)

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
      puStack_20 = (undefined1 *)0x41cac7;
      FUN_00417714();
      param_3 = extraout_ECX;
    }
    puStack_20 = (undefined1 *)0x41cad3;
    local_8 = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_vmt_000_0040df58,'\x01',param_3);
    pcStack_24 = thunk_FUN_00403180;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar2 = FUN_0041c9f0(param_1);
    if (iVar2 == DAT_00447660) {
      FUN_00402a2c(&local_e,6,0);
      FUN_00410b60(local_8,&local_e,6);
    }
    else {
      pHVar3 = (HICON)FUN_0041c9f0(param_1);
      FUN_004187ac(local_8,pHVar3,'\0');
    }
    *in_FS_OFFSET = uStack_28;
    *(int **)(iVar1 + 0xc) = local_8;
  }
  return;
}


