
/* ==== FUN_004da020 @ 004da020 ==== 
 * signature: undefined4 * __thiscall FUN_004da020(undefined4 * param_1, int param_2)
 * body: 004da020-004da16e
 */

undefined4 * __thiscall FUN_004da020(undefined4 *param_1,int param_2)

{
  undefined4 *this;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005705ab;
  local_c = ExceptionList;
  this = param_1 + 1;
  ExceptionList = &local_c;
  *(undefined1 *)this = (undefined1)param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_005778e0;
  local_4 = 0;
  if ((*(int *)(param_2 + 8) == 0) ||
     (uVar6 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 2, (int)uVar6 < 5)) {
    uVar6 = 5;
  }
  if (param_1[2] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(param_1[4] - param_1[2]) >> 2;
  }
  if (uVar2 < uVar6) {
    uVar2 = uVar6;
    if ((int)uVar6 < 0) {
      uVar2 = 0;
    }
    puVar3 = operator_new(uVar2 * 4);
    puVar1 = (undefined4 *)param_1[3];
    puVar7 = puVar3;
    for (puVar8 = (undefined4 *)param_1[2]; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      FUN_004d2770(puVar7,puVar8);
      puVar7 = puVar7 + 1;
    }
    FUN_0054b339((LPVOID)param_1[2]);
    param_1[4] = puVar3 + uVar6;
    iVar4 = FUN_00492480((int)this);
    param_1[2] = puVar3;
    param_1[3] = puVar3 + iVar4;
  }
  iVar4 = param_2;
  puVar8 = *(undefined4 **)(param_2 + 8);
  if (puVar8 != *(undefined4 **)(param_2 + 0xc)) {
    do {
      param_2 = (**(code **)(*(int *)*puVar8 + 4))();
      if (param_1[2] == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (undefined2)((int)(param_1[3] - param_1[2]) >> 2);
      }
      *(undefined2 *)(param_2 + 0x24) = uVar5;
      FUN_004a5620(this,(undefined4 *)param_1[3],1,&param_2);
      puVar8 = puVar8 + 1;
    } while (puVar8 != *(undefined4 **)(iVar4 + 0xc));
  }
  ExceptionList = local_c;
  return local_c;
}


