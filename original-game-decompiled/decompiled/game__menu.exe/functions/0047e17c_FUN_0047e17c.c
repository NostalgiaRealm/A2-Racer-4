
/* ==== FUN_0047e17c @ 0047e17c ==== 
 * signature: undefined __register FUN_0047e17c(int param_1)
 * body: 0047e17c-0047e27c
 */

void FUN_0047e17c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  code *pcStack_34;
  code *pcStack_30;
  int *local_24;
  OLECHAR local_20 [2];
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  OLECHAR local_10 [2];
  int *local_c;
  undefined4 local_8;
  
  pcStack_30 = (code *)&stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  local_10[0] = L'\0';
  local_10[1] = L'\0';
  local_14 = (int *)0x0;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20[0] = L'\0';
  local_20[1] = L'\0';
  local_24 = (int *)0x0;
  pcStack_34 = thunk_FUN_004036bc;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  piVar1 = *(int **)(param_1 + 8);
  if (*(char *)((int)piVar1 + 0x47) != '\0') {
    FUN_00405860((int *)&local_c);
    FUN_004043f8(local_10,*(LPCSTR *)(param_1 + 0xc));
    FUN_00472904(*(int *)(param_1 + 4),(int *)&local_14);
    iVar2 = (**(code **)(*local_14 + 0x1c))();
    FUN_0040595c(iVar2);
    iVar2 = (**(code **)(*local_c + 0x3c))();
    FUN_0040595c(iVar2);
    FUN_00405860((int *)&local_1c);
    FUN_004043f8(local_20,*(LPCSTR *)(param_1 + 0xc));
    FUN_00472904(*(int *)(param_1 + 4),(int *)&local_24);
    iVar2 = (**(code **)(*local_24 + 0x1c))();
    FUN_0040595c(iVar2);
    iVar2 = (**(code **)(*local_1c + 0x34))();
    FUN_0040595c(iVar2);
    FUN_0047d4d0(piVar1,(int)(short)local_18,(int)&local_8);
  }
  *in_FS_OFFSET = uStack_38;
  pcStack_30 = FUN_0047e284;
  pcStack_34 = (code *)0x47e254;
  FUN_00405860((int *)&local_24);
  pcStack_34 = (code *)0x47e25c;
  FUN_004042b4((undefined4 *)local_20);
  pcStack_34 = (code *)0x47e264;
  FUN_00405860((int *)&local_1c);
  pcStack_34 = (code *)0x47e26c;
  FUN_00405860((int *)&local_14);
  pcStack_34 = (code *)0x47e274;
  FUN_004042b4((undefined4 *)local_10);
  pcStack_34 = (code *)0x47e27c;
  FUN_00405860((int *)&local_c);
  return;
}


