
/* ==== FUN_00513d30 @ 00513d30 ==== 
 * signature: undefined __fastcall FUN_00513d30(int * param_1)
 * body: 00513d30-00513e78
 */

void __fastcall FUN_00513d30(int *param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  void *local_44;
  int *local_40;
  int local_3c [12];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573fdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_44 = operator_new(0x10);
  local_4 = 0;
  if (local_44 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_005018c0(local_44,500,8,0);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)(*param_1 + 0x18) = puVar2;
  pcVar3 = FUN_00521000((int *)*param_1);
  pvVar1 = *(LPVOID *)(*param_1 + 0x18);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_005018f0((int)pvVar1);
    FUN_0054b339(pvVar1);
  }
  *(undefined4 *)(*param_1 + 0x18) = 0;
  if (pcVar3 == (char *)0x0) {
    for (iVar4 = *(int *)(*param_1 + 0x30); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
      FUN_0051fe50(iVar4);
    }
    FUN_00521740(*param_1);
    local_44 = (void *)0x0;
    local_40 = (int *)0x0;
    local_4 = 1;
    FUN_00513e80(param_1,(ushort *)&local_44);
    FUN_005217f0(local_3c);
    local_4._0_1_ = 2;
    iVar4 = FUN_00521840(local_3c,(int)&local_44);
    piVar5 = (int *)FUN_004f5ad0(iVar4,0x10);
    FUN_00521bb0(local_3c,piVar5);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00521c80(local_3c);
    if ((local_40 != local_3c) && (local_40 != (int *)0x0)) {
      FUN_00559d4e(local_40);
    }
    param_1[1] = (int)piVar5;
    ExceptionList = local_c;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  ExceptionList = local_c;
  return;
}


