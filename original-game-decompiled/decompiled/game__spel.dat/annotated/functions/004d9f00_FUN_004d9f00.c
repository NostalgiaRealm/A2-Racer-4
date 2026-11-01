
/* ==== FUN_004d9f00 @ 004d9f00 ==== 
 * signature: undefined4 * __fastcall FUN_004d9f00(undefined4 * param_1)
 * body: 004d9f00-004d9ff4
 */

undefined4 * __fastcall FUN_004d9f00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_11;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pvVar3 = ExceptionList;
  pcStack_8 = FUN_0057058b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = local_11;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_005778e0;
  local_4 = 0;
  if ((param_1[2] != 0) && (4 < (uint)((int)(param_1[4] - param_1[2]) >> 2))) {
    ExceptionList = pvVar3;
    return param_1;
  }
  puVar4 = operator_new(0x14);
  puVar1 = (undefined4 *)param_1[3];
  puVar6 = puVar4;
  for (puVar5 = (undefined4 *)param_1[2]; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar5;
    }
    puVar6 = puVar6 + 1;
  }
  FUN_0054b339((LPVOID)param_1[2]);
  iVar2 = param_1[2];
  param_1[4] = puVar4 + 5;
  if (iVar2 == 0) {
    param_1[2] = puVar4;
    param_1[3] = puVar4;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[2] = puVar4;
  param_1[3] = puVar4 + (param_1[3] - iVar2 >> 2);
  ExceptionList = local_c;
  return param_1;
}


