
/* ==== FUN_004fdfb0 @ 004fdfb0 ==== 
 * signature: undefined __fastcall FUN_004fdfb0(undefined4 * param_1)
 * body: 004fdfb0-004fe04f
 */

void __fastcall FUN_004fdfb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005735da;
  local_c = ExceptionList;
  puVar1 = param_1 + 1;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0057869c;
  *puVar1 = &PTR_FUN_00578680;
  local_4 = 2;
  FUN_005000f0((int *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1),1);
  puVar2 = (undefined4 *)param_1[3];
  if (puVar2 != param_1 + 4) {
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar2);
      param_1[3] = 0;
    }
    *(undefined2 *)(param_1 + 2) = 0;
  }
  *(undefined2 *)((int)param_1 + 10) = 0;
  local_4 = 0xffffffff;
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1) = &PTR_FUN_005783a8;
  FUN_004fcfc0(param_1);
  ExceptionList = local_c;
  return;
}


