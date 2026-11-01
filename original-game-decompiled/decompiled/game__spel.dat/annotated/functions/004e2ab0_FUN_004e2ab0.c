
/* ==== FUN_004e2ab0 @ 004e2ab0 ==== 
 * signature: undefined1 * __thiscall FUN_004e2ab0(void * this, undefined1 * param_1)
 * body: 004e2ab0-004e2c03
 */

undefined1 * __thiscall FUN_004e2ab0(void *this,undefined1 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int local_24;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005716f8;
  pvStack_c = ExceptionList;
  puVar3 = (undefined1 *)(*(int *)((int)this + 8) + 0xc);
  local_1c[0] = *puVar3;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  FUN_004093c0(local_1c,puVar3,0,0xffffffff);
  local_4 = 0;
  local_24 = 0;
  iVar4 = (**(code **)(**(int **)((int)this + 8) + 0x40))();
  if (0 < iVar4) {
    do {
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_005b74f0;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6 - 1;
      if (-local_14 - 1 <= uVar6) {
        FUN_0054b1b4();
      }
      if (uVar6 != 0) {
        uVar1 = local_14 + uVar6;
        uVar5 = FUN_00402a00(local_1c,uVar1,'\0');
        if ((char)uVar5 != '\0') {
          puVar8 = (undefined4 *)&DAT_005b74f0;
          puVar10 = (undefined4 *)(local_14 + local_18);
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          *(undefined1 *)(local_18 + uVar1) = 0;
          local_14 = uVar1;
        }
      }
      local_24 = local_24 + 1;
      iVar4 = (**(code **)(**(int **)((int)this + 8) + 0x40))();
    } while (local_24 < iVar4);
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(param_1,local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((LPVOID)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}


