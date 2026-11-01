
/* ==== FUN_0047e2e0 @ 0047e2e0 ==== 
 * signature: undefined __register FUN_0047e2e0(int param_1, undefined4 param_2)
 * body: 0047e2e0-0047e37b
 */

void FUN_0047e2e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  int *local_10;
  OLECHAR local_c [2];
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c[0] = L'\0';
  local_c[1] = L'\0';
  local_10 = (int *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar3 = *(int *)(param_1 + 0x10) + 0x8000;
  puVar2 = &stack0xfffffffc;
  if (0xffff < uVar3) {
    thunk_FUN_00402808(uVar3);
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  FUN_00405860((int *)&local_8);
  FUN_004043f8(local_c,*(LPCSTR *)(param_1 + 0xc));
  FUN_00472904(*(int *)(param_1 + 4),(int *)&local_10);
  iVar4 = (**(code **)(*local_10 + 0x1c))();
  FUN_0040595c(iVar4);
  piVar1 = local_8;
  iVar4 = (**(code **)(*local_8 + 0x30))();
  FUN_0040595c(iVar4);
  *in_FS_OFFSET = piVar1;
  FUN_00405860((int *)&local_10);
  FUN_004042b4((undefined4 *)local_c);
  FUN_00405860((int *)&local_8);
  return;
}


