
/* ==== FUN_004dee20 @ 004dee20 ==== 
 * signature: undefined4 * __thiscall FUN_004dee20(void * this, void * param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 * param_5, undefined1 param_6, undefined4 param_7)
 * body: 004dee20-004def8e
 */

undefined4 * __thiscall
FUN_004dee20(void *this,void *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 *param_5,undefined1 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_44 [4];
  char *local_40;
  uint local_3c;
  undefined4 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [16];
  undefined **appuStack_14 [2];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570fcf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_3 == DAT_0074b888) {
    local_44[0] = (undefined1)param_3;
    ExceptionList = &pvStack_c;
    FUN_004028f0(local_44,'\0');
    uVar5 = 0xffffffff;
    pcVar7 = s_Cannot_invoke_method_for_NIL_obj_005b73e4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    uVar2 = FUN_00402a00(local_44,uVar5,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar7 = s_Cannot_invoke_method_for_NIL_obj_005b73e4;
      pcVar8 = local_40;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_40[uVar5] = '\0';
      local_3c = uVar5;
    }
    local_4 = 1;
    FUN_004d6900(0xbc0,local_44,(undefined1 *)((int)this + 0xc),
                 (undefined1 *)(*(int *)((int)this + 8) + 0xc));
    if (iStack_30 != 0) {
      cVar1 = *(char *)(iStack_30 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_30 + -1));
      }
      else {
        *(char *)(iStack_30 + -1) = cVar1 + -1;
      }
    }
    iStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
  }
  pvVar3 = FUN_004decd0(this,auStack_24,param_6);
  iVar4 = (**(code **)((int)this + 0x40))(appuStack_14,param_7,pvVar3);
  FUN_004cef20(param_5,iVar4);
  *param_5 = &PTR_FUN_005778c0;
  uStack_38 = 1;
  appuStack_14[0] = &PTR_FUN_005778c0;
  FUN_004cf650(appuStack_14);
  FUN_004d29b0((int)auStack_24);
  ExceptionList = param_1;
  return param_5;
}


