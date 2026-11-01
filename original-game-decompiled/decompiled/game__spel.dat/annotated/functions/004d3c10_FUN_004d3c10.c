
/* ==== FUN_004d3c10 @ 004d3c10 ==== 
 * signature: bool __stdcall FUN_004d3c10(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 004d3c10-004d3df8
 */

bool FUN_004d3c10(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *in_stack_ffffffb0;
  int iStack_48;
  undefined1 local_44 [4];
  undefined4 *local_40;
  undefined1 local_34 [4];
  undefined4 *local_30;
  undefined1 auStack_24 [8];
  undefined **appuStack_1c [2];
  undefined1 auStack_14 [8];
  void *pvStack_c;
  code *pcStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  pcStack_8 = FUN_0056fe98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == (int *)0x0) {
    local_34[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004028f0(local_34,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_00712694;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar2 = FUN_00402a00(local_34,uVar4,'\x01');
    if ((char)uVar2 != '\0') {
      puVar6 = (undefined4 *)&DAT_00712694;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_30 = *puVar6;
        puVar6 = puVar6 + 1;
        local_30 = local_30 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)local_30 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        local_30 = (undefined4 *)((int)local_30 + 1);
      }
      FUN_004029e0(local_34,uVar4);
    }
    local_4 = (void *)0x0;
    local_44[0] = 0;
    FUN_004028f0(local_44,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_00712694;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar2 = FUN_00402a00(local_44,uVar4,'\x01');
    if ((char)uVar2 != '\0') {
      puVar6 = (undefined4 *)&DAT_00712694;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_40 = *puVar6;
        puVar6 = puVar6 + 1;
        local_40 = local_40 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)local_40 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        local_40 = (undefined4 *)((int)local_40 + 1);
      }
      FUN_004029e0(local_44,uVar4);
    }
    local_4 = (void *)CONCAT31(local_4._1_3_,1);
    FUN_004028f0(&stack0xffffffac,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = s_Call_to_NULL_event_handler_005b7048;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar2 = FUN_00402a00(&stack0xffffffac,uVar4,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar7 = s_Call_to_NULL_event_handler_005b7048;
      pcVar8 = in_stack_ffffffb0;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_004029e0(&stack0xffffffac,uVar4);
    }
    local_4 = (void *)CONCAT31(local_4._1_3_,2);
    FUN_004d6900(0xbc3,&stack0xffffffac,local_44,local_34);
    FUN_004028f0(local_44,'\x01');
    FUN_004028f0(local_34,'\x01');
    FUN_004028f0(auStack_24,'\x01');
  }
  FUN_004db1c0(param_2,in_stack_ffffffb0);
  FUN_004d92a0((void *)(iStack_48 + 0xbc),param_5);
  iVar3 = (**(code **)(*param_2 + 0x3c))(auStack_14);
  iVar3 = *(int *)(iVar3 + 0x10);
  appuStack_1c[0] = &PTR_FUN_005778c0;
  FUN_004cf650(appuStack_1c);
  ExceptionList = local_4;
  return iVar3 != 0;
}


