
/* ==== FUN_004e4210 @ 004e4210 ==== 
 * signature: undefined __thiscall FUN_004e4210(void * this, void * param_1, void * param_2)
 * body: 004e4210-004e4555
 */

void __thiscall FUN_004e4210(void *this,void *param_1,void *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_EBX;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 auStack_a4 [4];
  undefined4 *puStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined1 auStack_90 [8];
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  auStack_a4[0] = (undefined1)((uint)unaff_EBX >> 0x18);
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571a0e;
  pvStack_c = ExceptionList;
  if (*(int *)((int)this + 8) == -2) {
    ExceptionList = &pvStack_c;
    puVar2 = FUN_004e4580(local_7c,*(int *)((int)this + 0xc));
    local_4 = 0;
    puVar2 = FUN_004797e0(local_6c,&DAT_005b7514,(int)puVar2);
    local_4._0_1_ = 1;
    FUN_004093c0(param_1,puVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_6c,'\x01');
    puVar2 = local_7c;
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_004e4580(local_6c,*(int *)((int)this + 0xc));
    local_4 = 2;
    puVar2 = FUN_004d7610(local_7c);
    local_4._0_1_ = 3;
    FUN_004093c0(param_1,puVar2,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004028f0(local_7c,'\x01');
    puVar2 = local_6c;
  }
  local_4 = 0xffffffff;
  FUN_004028f0(puVar2,'\x01');
  piVar3 = (int *)(**(code **)(*(int *)this + 0x10))();
  iVar4 = (**(code **)(*piVar3 + 4))(auStack_1c);
  pcStack_8 = (code *)0x4;
  FUN_004028f0(auStack_a4,'\0');
  uVar7 = 0xffffffff;
  pcVar10 = (char *)&DAT_005b36c4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  uStack_94 = uVar7;
  uVar5 = FUN_00402a00(auStack_a4,uVar7,'\x01');
  if ((char)uVar5 != '\0') {
    puVar9 = (undefined4 *)&DAT_005b36c4;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puStack_a0 = *puVar9;
      puVar9 = puVar9 + 1;
      puStack_a0 = puStack_a0 + 1;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puStack_a0 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puStack_a0 = (undefined4 *)((int)puStack_a0 + 1);
    }
    FUN_004029e0(auStack_a4,uVar7);
  }
  pcStack_8 = (code *)CONCAT31(pcStack_8._1_3_,5);
  iVar6 = FUN_004e48f0(auStack_90,*(int *)((int)this + 0x14));
  piVar3 = (int *)(**(code **)(*(int *)this + 0x18))();
  puVar2 = (undefined1 *)(**(code **)(*piVar3 + 4))(auStack_38);
  local_4._0_1_ = 7;
  puVar2 = FUN_0047c9a0(auStack_4c,puVar2,iVar6);
  local_4._0_1_ = 8;
  puVar2 = FUN_0047c9a0(auStack_5c,puVar2,(int)&puStack_a0);
  local_4._0_1_ = 9;
  puVar2 = FUN_0047c9a0(auStack_2c,puVar2,iVar4);
  local_4._0_1_ = 10;
  FUN_004093c0(param_2,puVar2,0,0xffffffff);
  local_4._0_1_ = 9;
  FUN_004028f0(auStack_2c,'\x01');
  local_4._0_1_ = 8;
  FUN_004028f0(auStack_5c,'\x01');
  local_4._0_1_ = 7;
  FUN_004028f0(auStack_4c,'\x01');
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004028f0(auStack_3c,'\x01');
  if (iStack_88 != 0) {
    cVar1 = *(char *)(iStack_88 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_88 + -1));
    }
    else {
      *(char *)(iStack_88 + -1) = cVar1 + -1;
    }
  }
  iStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  if (iStack_9c != 0) {
    cVar1 = *(char *)(iStack_9c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_9c + -1));
    }
    else {
      *(char *)(iStack_9c + -1) = cVar1 + -1;
    }
  }
  iStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}


