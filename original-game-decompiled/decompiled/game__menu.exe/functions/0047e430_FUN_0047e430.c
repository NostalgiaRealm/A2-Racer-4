
/* ==== FUN_0047e430 @ 0047e430 ==== 
 * signature: undefined __register FUN_0047e430(int param_1)
 * body: 0047e430-0047e5d7
 */

void FUN_0047e430(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  code *local_3c;
  int *local_38;
  int *local_34;
  _union_2683 local_30;
  int local_20;
  int *local_1c;
  code *local_18;
  int *local_14;
  undefined4 local_c;
  int *local_8;
  
  local_14 = (int *)&stack0xfffffffc;
  iVar3 = 7;
  do {
    local_8 = (int *)0x0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_18 = thunk_FUN_004036bc;
  local_1c = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  uVar2 = *(int *)(param_1 + 0x10) + 0x8000;
  piVar1 = (int *)&stack0xfffffffc;
  if (0xffff < uVar2) {
    local_20 = 0x47e464;
    uVar2 = thunk_FUN_00402808(uVar2);
    piVar1 = local_14;
  }
  local_14 = piVar1;
  local_20 = uVar2 - 0x8000;
  local_30._12_4_ = 0x47e472;
  local_30._12_4_ = FUN_00405860((int *)&local_8);
  local_30._8_4_ = 0x47e47e;
  FUN_004043f8((BSTR)&local_c,*(LPCSTR *)(param_1 + 0xc));
  local_30._8_4_ = local_c;
  local_30.decVal.Hi32 = 0x47e48d;
  FUN_00472904(*(int *)(param_1 + 4),(int *)&stack0xfffffff0);
  local_30._0_4_ = 0x47e496;
  iVar3 = (**(code **)(*unaff_EBX + 0x1c))();
  local_30._0_4_ = 0x47e49b;
  FUN_0040595c(iVar3);
  local_30._0_4_ = local_8;
  local_34 = (int *)0x47e4a4;
  iVar3 = (**(code **)(*local_8 + 0x30))();
  local_34 = (int *)0x47e4a9;
  FUN_0040595c(iVar3);
  uVar2 = *(int *)(param_1 + 0x14) + 0x8000;
  if (0xffff < uVar2) {
    local_34 = (int *)0x47e4bd;
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  local_34 = (int *)(uVar2 - 0x8000);
  local_38 = (int *)0x47e4cb;
  local_38 = FUN_00405860((int *)&local_14);
  local_3c = (code *)0x47e4d7;
  FUN_004043f8((BSTR)&local_18,*(LPCSTR *)(param_1 + 0xc));
  local_3c = local_18;
  FUN_00472904(*(int *)(param_1 + 4),(int *)&local_1c);
  iVar3 = (**(code **)(*local_1c + 0x1c))();
  FUN_0040595c(iVar3);
  iVar3 = (**(code **)(*local_14 + 0x38))();
  FUN_0040595c(iVar3);
  FUN_00405860(&local_20);
  FUN_00404ea4((VARIANTARG *)&local_30.n2,0);
  FUN_00405860((int *)&local_34);
  FUN_004043f8((BSTR)&local_38,*(LPCSTR *)(param_1 + 0xc));
  FUN_00472904(*(int *)(param_1 + 4),(int *)&local_3c);
  iVar3 = (**(code **)(*(int *)local_3c + 0x1c))();
  FUN_0040595c(iVar3);
  piVar1 = local_34;
  iVar3 = (**(code **)(*local_34 + 0x88))();
  FUN_0040595c(iVar3);
  FUN_0047e17c(param_1);
  FUN_00449c78(*(int **)(param_1 + 8),extraout_EDX,extraout_ECX);
  *in_FS_OFFSET = piVar1;
  FUN_00405860((int *)&local_3c);
  FUN_004042b4(&local_38);
  FUN_00405860((int *)&local_34);
  FUN_00405038((VARIANTARG *)&local_30.n2);
  FUN_00405860(&local_20);
  FUN_00405860((int *)&local_1c);
  FUN_004042b4(&local_18);
  FUN_00405860((int *)&local_14);
  FUN_00405860((int *)&stack0xfffffff0);
  FUN_004042b4(&local_c);
  FUN_00405860((int *)&local_8);
  return;
}


