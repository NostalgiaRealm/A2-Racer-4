
/* ==== FUN_0047df98 @ 0047df98 ==== 
 * signature: undefined __register FUN_0047df98(int param_1)
 * body: 0047df98-0047e0a7
 */

void FUN_0047df98(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  int *local_1c;
  OLECHAR local_18 [2];
  int *local_14;
  int *local_10;
  OLECHAR local_c [2];
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c[0] = L'\0';
  local_c[1] = L'\0';
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_18[0] = L'\0';
  local_18[1] = L'\0';
  local_1c = (int *)0x0;
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uVar3 = *(int *)(param_1 + 0x10) + 0x8000;
  puVar2 = &stack0xfffffffc;
  if (0xffff < uVar3) {
    thunk_FUN_00402808(uVar3);
    puVar2 = puStack_24;
  }
  puStack_24 = puVar2;
  FUN_00405860((int *)&local_8);
  FUN_004043f8(local_c,*(LPCSTR *)(param_1 + 0xc));
  FUN_00472904(*(int *)(param_1 + 4),(int *)&local_10);
  iVar4 = (**(code **)(*local_10 + 0x1c))();
  FUN_0040595c(iVar4);
  iVar4 = (**(code **)(*local_8 + 0x30))();
  FUN_0040595c(iVar4);
  uVar3 = *(int *)(param_1 + 0x14) + 0x8000;
  if (0xffff < uVar3) {
    thunk_FUN_00402808(uVar3);
  }
  FUN_00405860((int *)&local_14);
  FUN_004043f8(local_18,*(LPCSTR *)(param_1 + 0xc));
  FUN_00472904(*(int *)(param_1 + 4),(int *)&local_1c);
  iVar4 = (**(code **)(*local_1c + 0x1c))();
  FUN_0040595c(iVar4);
  piVar1 = local_14;
  iVar4 = (**(code **)(*local_14 + 0x38))();
  FUN_0040595c(iVar4);
  *in_FS_OFFSET = piVar1;
  FUN_00405860((int *)&local_1c);
  FUN_004042b4((undefined4 *)local_18);
  FUN_00405860((int *)&local_14);
  FUN_00405860((int *)&local_10);
  FUN_004042b4((undefined4 *)local_c);
  FUN_00405860((int *)&local_8);
  return;
}


