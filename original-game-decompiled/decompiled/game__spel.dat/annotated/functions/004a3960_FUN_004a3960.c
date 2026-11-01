
/* ==== FUN_004a3960 @ 004a3960 ==== 
 * signature: undefined __thiscall FUN_004a3960(void * this, float param_1)
 * body: 004a3960-004a3fb8
 */

void __thiscall FUN_004a3960(void *this,float param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *this_00;
  void *pvVar6;
  int *this_01;
  uint uVar7;
  char *pcVar8;
  undefined1 local_170 [28];
  undefined1 local_154 [28];
  undefined1 local_138 [28];
  undefined1 local_11c [28];
  undefined1 local_100 [28];
  undefined1 local_e4 [28];
  int local_c8 [4];
  undefined4 local_b8;
  void *local_b4;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [19];
  undefined1 local_29;
  int local_28;
  undefined1 local_24 [16];
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056f0d1;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe68;
  local_8 = 0;
  local_24[0] = param_1._3_1_;
  ExceptionList = &local_10;
  FUN_004028f0(local_24,'\0');
  uVar7 = 0xffffffff;
  pcVar8 = s_MapObject_005af204;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,(undefined4 *)s_MapObject_005af204,~uVar7 - 1);
  local_8._0_1_ = 1;
  FUN_004093c0((void *)((int)this + 0x2c),local_24,0,0xffffffff);
  local_8._0_1_ = 0;
  FUN_004028f0(local_24,'\x01');
  local_24[0] = param_1._3_1_;
  FUN_004028f0(local_24,'\0');
  uVar7 = 0xffffffff;
  pcVar8 = s_RealObject_005af178;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,(undefined4 *)s_RealObject_005af178,~uVar7 - 1);
  local_8._0_1_ = 2;
  FUN_004093c0((void *)((int)this + 0x40),local_24,0,0xffffffff);
  local_8._0_1_ = 0;
  FUN_004028f0(local_24,'\x01');
  local_24[0] = param_1._3_1_;
  FUN_004028f0(local_24,'\0');
  uVar7 = 0xffffffff;
  pcVar8 = s_VehicleObject_005af338;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,(undefined4 *)s_VehicleObject_005af338,~uVar7 - 1);
  local_8._0_1_ = 3;
  FUN_004093c0((void *)((int)this + 0x54),local_24,0,0xffffffff);
  local_8._0_1_ = 0;
  FUN_004028f0(local_24,'\x01');
  local_28 = (int)this + 0x28;
  pvVar6 = (void *)((int)this + 0x18);
  if (local_28 == 0) {
    puVar2 = FUN_004900f0(local_24,s_NULL_pointer_passed_as_a_creator_005af314,
                          (undefined1 *)((int)&param_1 + 3));
    local_8._0_1_ = 4;
    puVar3 = FUN_0049df90(local_3c,(byte *)s_FacMan_exception_in___s___d__005af2bc);
    local_8._0_1_ = 5;
    puVar4 = (undefined4 *)FUN_0047c9a0(local_4c,puVar3,(int)puVar2);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_004a5260(local_e4,puVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_e4,&DAT_00583558);
  }
  iVar5 = FUN_004eced0(pvVar6,(int)this + 0x2c);
  if (iVar5 != -1) {
    puVar2 = FUN_004900f0(local_4c,s_Trying_to_add_creator_that_alrea_005af290,
                          (undefined1 *)((int)&param_1 + 3));
    local_8._0_1_ = 7;
    puVar3 = FUN_0049df90(local_3c,(byte *)s_FacMan_exception_in___s___d__005af2bc);
    local_8._0_1_ = 8;
    puVar4 = (undefined4 *)FUN_0047c9a0(local_24,puVar3,(int)puVar2);
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_004a5260(local_170,puVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_170,&DAT_00583558);
  }
  FUN_004ecea0((void *)((int)this + 0x20),&local_28);
  local_28 = (int)this + 0x3c;
  if (local_28 == 0) {
    puVar2 = FUN_004900f0(local_4c,s_NULL_pointer_passed_as_a_creator_005af314,
                          (undefined1 *)((int)&param_1 + 3));
    local_8._0_1_ = 10;
    puVar3 = FUN_0049df90(local_3c,(byte *)s_FacMan_exception_in___s___d__005af2bc);
    local_8._0_1_ = 0xb;
    puVar4 = (undefined4 *)FUN_0047c9a0(local_24,puVar3,(int)puVar2);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_004a5260(local_154,puVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_154,&DAT_00583558);
  }
  iVar5 = FUN_004eced0(pvVar6,(int)this + 0x40);
  if (iVar5 != -1) {
    puVar2 = FUN_004900f0(local_4c,s_Trying_to_add_creator_that_alrea_005af290,
                          (undefined1 *)((int)&param_1 + 3));
    local_8._0_1_ = 0xd;
    puVar3 = FUN_0049df90(local_3c,(byte *)s_FacMan_exception_in___s___d__005af2bc);
    local_8._0_1_ = 0xe;
    puVar4 = (undefined4 *)FUN_0047c9a0(local_24,puVar3,(int)puVar2);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    FUN_004a5260(local_11c,puVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_11c,&DAT_00583558);
  }
  FUN_004ecea0((void *)((int)this + 0x20),&local_28);
  local_28 = (int)this + 0x50;
  if (local_28 == 0) {
    puVar2 = FUN_004900f0(local_4c,s_NULL_pointer_passed_as_a_creator_005af314,
                          (undefined1 *)((int)&param_1 + 3));
    local_8._0_1_ = 0x10;
    puVar3 = FUN_0049df90(local_3c,(byte *)s_FacMan_exception_in___s___d__005af2bc);
    local_8._0_1_ = 0x11;
    puVar4 = (undefined4 *)FUN_0047c9a0(local_24,puVar3,(int)puVar2);
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_004a5260(local_138,puVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_138,&DAT_00583558);
  }
  iVar5 = FUN_004eced0(pvVar6,(int)this + 0x54);
  if (iVar5 != -1) {
    puVar2 = FUN_004900f0(local_4c,s_Trying_to_add_creator_that_alrea_005af290,
                          (undefined1 *)((int)&param_1 + 3));
    local_8._0_1_ = 0x13;
    puVar3 = FUN_0049df90(local_3c,(byte *)s_FacMan_exception_in___s___d__005af2bc);
    local_8._0_1_ = 0x14;
    puVar4 = (undefined4 *)FUN_0047c9a0(local_24,puVar3,(int)puVar2);
    local_8 = CONCAT31(local_8._1_3_,0x15);
    FUN_004a5260(local_100,puVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_100,&DAT_00583558);
  }
  FUN_004ecea0((void *)((int)this + 0x20),&local_28);
  local_8 = 0xffffffff;
  this_00 = FUN_004f8370();
  FUN_004fd100(local_c8);
  pvVar6 = operator_new(8);
  if (pvVar6 == (void *)0x0) {
    local_b8 = 0;
  }
  else {
    local_b8 = FUN_004a35d0(pvVar6,1);
  }
  local_b4 = this;
  this_01 = FUN_004f82a0(this_00,local_c8,s_davilex_005af288,-0x3cc078d9);
  *(int **)((int)this + 0x14) = this_01;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0x51eb851f;
  local_70 = 0x40239eb8;
  local_6c = 0;
  local_68 = 0;
  FUN_004f7f30(this_01,(double *)&local_7c);
  FUN_004a4160(this,param_1);
  local_24[0] = param_1._3_1_;
  FUN_004028f0(local_24,'\0');
  uVar7 = 0xffffffff;
  pcVar8 = s_Rubber_005af280;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,(undefined4 *)s_Rubber_005af280,~uVar7 - 1);
  local_8 = 0x1e;
  FUN_004a4510(this,local_24,0.95,0.9);
  local_8 = 0xffffffff;
  FUN_004028f0(local_24,'\x01');
  local_24[0] = param_1._3_1_;
  FUN_004028f0(local_24,'\0');
  uVar7 = 0xffffffff;
  pcVar8 = s_Steel_005af278;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,(undefined4 *)s_Steel_005af278,~uVar7 - 1);
  local_8 = 0x1f;
  FUN_004a4510(this,local_24,0.7,0.75);
  local_8 = 0xffffffff;
  FUN_004028f0(local_24,'\x01');
  local_24[0] = param_1._3_1_;
  FUN_004028f0(local_24,'\0');
  uVar7 = 0xffffffff;
  pcVar8 = s_Stone_005af270;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,(undefined4 *)s_Stone_005af270,~uVar7 - 1);
  local_8 = 0x20;
  FUN_004a4510(this,local_24,0.5,0.6);
  local_8 = 0xffffffff;
  FUN_004028f0(local_24,'\x01');
  local_24[0] = param_1._3_1_;
  FUN_004028f0(local_24,'\0');
  uVar7 = 0xffffffff;
  pcVar8 = &DAT_005af268;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_24,(undefined4 *)&DAT_005af268,~uVar7 - 1);
  local_8 = 0x21;
  FUN_004a4510(this,local_24,0.4,0.4);
  local_8 = 0xffffffff;
  FUN_004028f0(local_24,'\x01');
  FUN_004900f0(local_24,&DAT_005af260,(undefined1 *)((int)&param_1 + 3));
  local_8 = 0x22;
  FUN_004a4510(this,local_24,0.2,0.95);
  local_8 = 0xffffffff;
  FUN_004028f0(local_24,'\x01');
  FUN_004900f0(local_5c,s_Plastic_005af258,&local_29);
  local_8 = 0x23;
  FUN_004a4510(this,local_5c,0.1,0.4);
  local_8 = 0xffffffff;
  FUN_004028f0(local_5c,'\x01');
  ExceptionList = local_10;
  return;
}


