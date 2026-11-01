
/* ==== FUN_00492730 @ 00492730 ==== 
 * signature: undefined __thiscall FUN_00492730(void * this, undefined4 param_1, undefined4 param_2)
 * body: 00492730-004928ad
 */

void __thiscall FUN_00492730(void *this,undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e050;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00484f60(*(void **)this,param_1);
  *(undefined4 *)((int)this + 4) = uVar2;
  local_2c[0] = (undefined1)param_1;
  uVar5 = 0xffffffff;
  pcVar7 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005aceb4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  uVar2 = FUN_00402a00(local_2c,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar7 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005aceb4;
    pcVar8 = local_28;
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
    FUN_004029e0(local_2c,uVar5);
  }
  local_4 = 0;
  puVar3 = FUN_0049df90(local_1c,(byte *)s_Element__s_not_found_005acee0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00487bc0(*(int *)((int)this + 4),puVar3,(int)local_2c);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0xffffffff;
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  puVar4 = (undefined4 *)FUN_0047bc20(*(int *)((int)this + 4));
  *(undefined4 *)((int)this + 0xc) = *puVar4;
  *(undefined4 *)((int)this + 0x10) = puVar4[1];
  *(undefined4 *)((int)this + 0x14) = puVar4[2];
  *(undefined4 *)((int)this + 0x18) = *puVar4;
  *(undefined4 *)((int)this + 0x1c) = puVar4[1];
  *(undefined4 *)((int)this + 0x20) = puVar4[2];
  *(undefined4 *)((int)this + 0x58) = param_2;
  ExceptionList = local_c;
  return;
}


