
/* ==== FUN_0049421c @ 0049421c ==== 
 * signature: undefined __register FUN_0049421c(int param_1, int param_2)
 * body: 0049421c-004942a6;004942de-00494334
 */

void FUN_0049421c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined *local_30;
  undefined1 *puStack_2c;
  undefined4 *local_28;
  code *local_24;
  code *pcStack_20;
  
  pcStack_20 = (code *)&stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  iVar2 = 4;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_24 = thunk_FUN_004036bc;
  local_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_30 = &DAT_004942a7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  iVar2 = FUN_00462414(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c),param_2);
  FUN_00480b08(param_2,(int *)&stack0xffffffe8);
  FUN_00403f28((int *)&stack0xffffffec,(undefined4 *)"defChar",unaff_ESI);
  iVar1 = FUN_00415a80(param_1,unaff_EBX);
  *in_FS_OFFSET = uStack_34;
  if (*(int *)(iVar1 + 0xc) == 0) {
    puStack_2c = (undefined1 *)0x4942f2;
    FUN_00480b08(iVar2,(int *)&local_28);
    puStack_2c = (undefined1 *)0x494302;
    FUN_00403f28((int *)&local_24,(undefined4 *)FUN_004943b8,local_28);
    puStack_2c = (undefined1 *)0x49430d;
    FUN_00481698(iVar1,(int)local_24);
    *(undefined4 *)(iVar1 + 0xc) = 1;
  }
  *in_FS_OFFSET = local_28;
  pcStack_20 = FUN_0049433c;
  local_24 = (code *)0x494334;
  FUN_00403c80((int *)&local_28,6);
  return;
}


