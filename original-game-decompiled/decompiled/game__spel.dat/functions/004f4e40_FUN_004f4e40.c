
/* ==== FUN_004f4e40 @ 004f4e40 ==== 
 * signature: undefined __fastcall FUN_004f4e40(uint * param_1)
 * body: 004f4e40-004f4f28
 */

void __fastcall FUN_004f4e40(uint *param_1)

{
  LPVOID pvVar1;
  uint *puVar2;
  uint uVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00572ef6;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_004f6f20((void *)param_1[3],param_1);
  if (((byte)*param_1 & 0xc) == 4) {
    pvVar1 = (LPVOID)param_1[0x16];
    if (pvVar1 != (LPVOID)0x0) {
      thunk_FUN_00501470((int)pvVar1);
      FUN_0054b339(pvVar1);
      param_1[0x16] = 0;
    }
  }
  else {
    uVar3 = (uint)*(ushort *)((int)param_1 + 0x1ca);
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      (**(code **)**(undefined4 **)(param_1[0x73] + uVar3 * 4))(param_1);
    }
  }
  if ((void *)param_1[0x75] != (void *)0x0) {
    FUN_004ffe50((void *)param_1[0x75],(int)param_1);
  }
  puVar2 = (uint *)param_1[0x73];
  if (puVar2 != param_1 + 0x74) {
    if (puVar2 != (uint *)0x0) {
      FUN_00559d4e(puVar2);
      param_1[0x73] = 0;
    }
    *(undefined2 *)(param_1 + 0x72) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x1ca) = 0;
  puVar2 = (uint *)param_1[0x14];
  if (puVar2 != param_1 + 0x15) {
    if (puVar2 != (uint *)0x0) {
      FUN_00559d4e(puVar2);
      param_1[0x14] = 0;
    }
    *(undefined2 *)(param_1 + 0x13) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  ExceptionList = local_c;
  return;
}


