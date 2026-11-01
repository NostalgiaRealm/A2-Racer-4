
/* ==== FUN_004ebb30 @ 004ebb30 ==== 
 * signature: undefined __fastcall FUN_004ebb30(undefined4 * param_1)
 * body: 004ebb30-004ebca5
 */

void __fastcall FUN_004ebb30(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 uStack_5d;
  undefined4 *local_5c;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined **appuStack_28 [3];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005724bb;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  local_5c = param_1;
  iVar2 = (**(code **)*param_1)();
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = (**(code **)*param_1)();
      if (iVar3 < 1) {
        puVar4 = FUN_0049df90(auStack_58,(byte *)s_Illegal_object_index_to_remove___005af54c);
        local_4._0_1_ = 2;
        puVar5 = FUN_0049df90(auStack_48,(byte *)s_FacMan_exception_in___s___d__005af2bc);
        local_4._0_1_ = 3;
        puVar4 = FUN_0047c9a0(auStack_38,puVar5,(int)puVar4);
        local_4._0_1_ = 4;
        FUN_00558826(appuStack_28);
        local_4._0_1_ = 5;
        FUN_00424980(auStack_1c,&uStack_5d);
        local_4._0_1_ = 6;
        appuStack_28[0] = &PTR_FUN_005772f4;
        FUN_004093c0(auStack_1c,puVar4,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(appuStack_28,&DAT_00583558);
      }
      if ((undefined4 *)**(int **)(param_1[1] + 4) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)**(int **)(param_1[1] + 4))(1);
      }
      FUN_004ecd90(param_1,0,1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  pvVar1 = (LPVOID)param_1[3];
  param_1[2] = &PTR_FUN_005781fc;
  if (pvVar1 != (LPVOID)0x0) {
    local_5c = *(undefined4 **)((int)pvVar1 + 4);
    FUN_0054b339(local_5c);
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  param_1[3] = 0;
  pvVar1 = (LPVOID)param_1[1];
  *param_1 = &PTR_FUN_005781ec;
  if (pvVar1 != (LPVOID)0x0) {
    local_5c = *(undefined4 **)((int)pvVar1 + 4);
    FUN_0054b339(local_5c);
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  param_1[1] = 0;
  ExceptionList = pvStack_c;
  return;
}


