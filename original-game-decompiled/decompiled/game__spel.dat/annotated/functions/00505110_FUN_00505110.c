
/* ==== FUN_00505110 @ 00505110 ==== 
 * signature: undefined __fastcall FUN_00505110(int * param_1)
 * body: 00505110-00505289
 */

void __fastcall FUN_00505110(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  double dVar3;
  void **ppvVar4;
  uint uVar5;
  byte *local_438;
  undefined8 local_434;
  double local_42c;
  int local_424;
  undefined2 local_41c;
  undefined2 local_41a;
  undefined1 *local_418;
  undefined1 local_414 [1024];
  void *local_14;
  code *pcStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_0057375b;
  uVar5 = (uint)*(ushort *)((int)param_1 + 0x12);
  ppvVar4 = &local_14;
  local_14 = ExceptionList;
  while (ExceptionList = ppvVar4, uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    iVar1 = *(int *)(param_1[5] + uVar5 * 4);
    if (*(int *)(*(int *)(iVar1 + 0x22c) + 0x30) == 0) {
      FUN_004f4a00(iVar1);
    }
    *(undefined4 *)(iVar1 + 0x22c) = 0;
    ppvVar4 = ExceptionList;
  }
  local_418 = local_414;
  dVar3 = *(double *)(*param_1 + 0x128) - *(double *)(*param_1 + 0x120);
  local_41c = 0x100;
  local_41a = 0;
  local_c = 0;
  uVar5 = (uint)*(ushort *)((int)param_1 + 10);
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    pbVar2 = *(byte **)(param_1[3] + uVar5 * 4);
    if ((*pbVar2 & 0xc) == 0) {
      local_424 = *param_1;
      if (dVar3 <= 1.000000013351432e-10) {
        local_42c = 9999999866.485682;
      }
      else {
        local_42c = 1.0 / dVar3;
      }
      local_438 = pbVar2;
      local_434 = dVar3;
      FUN_00501a40(&local_438,(double *)&local_434,&local_41c);
      pbVar2[0x22c] = 0;
      pbVar2[0x22d] = 0;
      pbVar2[0x22e] = 0;
      pbVar2[0x22f] = 0;
      FUN_00504d50(param_1,pbVar2);
    }
  }
  FUN_005024e0(*param_1,(int)&local_41c);
  local_c = 0xffffffff;
  if (local_418 != local_414) {
    if (local_418 != (undefined1 *)0x0) {
      FUN_00559d4e(local_418);
      local_418 = (undefined1 *)0x0;
    }
    local_41c = 0;
  }
  local_41a = 0;
  uVar5 = (uint)*(ushort *)((int)param_1 + 10);
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    pbVar2 = *(byte **)(param_1[3] + uVar5 * 4);
    if ((*pbVar2 & 0xc) == 0) {
      FUN_004f51e0((int)pbVar2);
    }
  }
  ExceptionList = local_14;
  return;
}


