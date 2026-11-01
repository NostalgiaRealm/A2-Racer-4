
/* ==== FUN_00513150 @ 00513150 ==== 
 * signature: int __fastcall FUN_00513150(int * param_1)
 * body: 00513150-0051334d
 */

int __fastcall FUN_00513150(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *this;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573f5b;
  local_c = ExceptionList;
  iVar8 = 0;
  iVar7 = 0;
  local_18 = 0;
  if ((*(int *)(param_1[0x1d] + 8) == 0) &&
     (uVar6 = (uint)*(ushort *)((int)param_1 + 0x32), uVar6 != 0)) {
    piVar4 = (int *)param_1[0xd];
    uVar5 = uVar6;
    do {
      iVar1 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar7 = iVar7 + (*(uint *)(*(int *)(iVar1 + 0x34) + 8) >> 8) * 0x10;
      iVar8 = iVar8 + *(short *)(*(int *)(iVar1 + 0x34) + 0xc);
      uVar5 = uVar5 - 1;
      local_18 = uVar6;
    } while (uVar5 != 0);
  }
  uVar6 = (uint)*(ushort *)((int)param_1 + 0x2a);
  if (uVar6 != 0) {
    piVar4 = (int *)param_1[0xb];
    local_18 = local_18 + uVar6;
    do {
      iVar1 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar7 = iVar7 + (*(uint *)(*(int *)(iVar1 + 0x34) + 8) >> 8) * 0x10;
      iVar8 = iVar8 + *(short *)(*(int *)(iVar1 + 0x34) + 0xc);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  iVar1 = param_1[2];
  ExceptionList = &local_c;
  iVar2 = FUN_004f5ad0(iVar1 * 0x1c + 0x3f + iVar7 & 0xfffffff0,0x10);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if ((local_18 < 2) || (*(int *)(param_1[0x1d] + 8) != 0)) {
    param_1[0x1f] = 0;
    param_1[0x21] = 0;
  }
  else {
    iVar2 = *(int *)(param_1[0x1d] + 0xc);
    if ((iVar2 == 1) || (iVar2 == 2)) {
      iVar2 = 2;
      for (iVar3 = iVar8; iVar3 != 0; iVar3 = iVar3 >> 1) {
        iVar2 = iVar2 << 1;
      }
      this = operator_new(0x10);
      local_4 = 0;
      if (this == (undefined4 *)0x0) {
        this = (undefined4 *)0x0;
      }
      else {
        FUN_005010f0(this,iVar2);
        *this = &PTR_FUN_00578b18;
      }
      param_1[0x21] = (int)this;
      local_4 = 0xffffffff;
      param_1[0x1f] = (local_18 + 3 + iVar8) * 0x10 + *param_1;
    }
  }
  param_1[0x20] = 0;
  param_1[0x1e] = *param_1 + 0x30;
  FUN_005134e0(param_1);
  if ((int *)param_1[0x21] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x21] + 4))(1);
    param_1[0x21] = 0;
    iVar7 = (param_1[0x20] + local_18 + iVar8) * 0x10;
  }
  *(uint *)(*param_1 + 0x1c) =
       (iVar7 + 0x30 + iVar1 * 0x1c) * 0x100 | *(uint *)(*param_1 + 0x1c) & 0xff;
  *(int *)(*param_1 + 0x20) = iVar7 + 0x30;
  *(undefined4 *)(*param_1 + 0x24) = 0;
  *(undefined4 *)(*param_1 + 0x28) = 0;
  *(undefined4 *)(*param_1 + 0x2c) = 0;
  iVar7 = *param_1;
  param_1[0x22] = *(int *)(iVar7 + 0x20) + iVar7;
  ExceptionList = local_c;
  return iVar7;
}


