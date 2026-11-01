
/* ==== FUN_0047d1f0 @ 0047d1f0 ==== 
 * signature: undefined __thiscall FUN_0047d1f0(void * this, undefined4 * param_1)
 * body: 0047d1f0-0047d5a1
 */

void __thiscall FUN_0047d1f0(void *this,undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  void **ppvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  undefined1 local_121;
  void *local_120;
  int local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined **local_e8 [3];
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056bcb7;
  local_c = ExceptionList;
  iVar8 = *(int *)((int)this + 0x44);
  ppvVar4 = &local_c;
  local_120 = this;
  if (iVar8 != -1) {
    iVar10 = DAT_0073b0d0 + iVar8 + iVar8 * 0xa8;
    iVar8 = *(int *)(DAT_0073b0d0 + iVar8 + iVar8 * 0xa8);
    if (iVar8 == 1) {
      uVar3 = *param_1;
      piVar1 = (int *)(DAT_0073b5c8 + *(int *)(iVar10 + 0x99) * 0xac);
      ppvVar4 = &local_c;
      if ((*piVar1 == 2) && (iVar8 = 0, ppvVar4 = &local_c, 0 < piVar1[0x21])) {
        iVar10 = 0;
        ExceptionList = &local_c;
        do {
          iVar8 = iVar8 + 1;
          *(undefined4 *)(piVar1[0x20] + 0x10 + iVar10) = uVar3;
          iVar10 = iVar10 + 0x20;
          ppvVar4 = ExceptionList;
        } while (iVar8 < piVar1[0x21]);
      }
    }
    else {
      if (iVar8 != 2) {
        ExceptionList = &local_c;
        puVar5 = FUN_004873b0(local_2c);
        local_108[0] = local_121;
        local_4 = 0;
        FUN_004028f0(local_108,'\0');
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_005a9cec;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_00402940(local_108,(undefined4 *)&DAT_005a9cec,~uVar9 - 1);
        local_4._0_1_ = 1;
        puVar6 = FUN_004873b0(local_1c);
        local_4._0_1_ = 2;
        local_118[0] = local_121;
        FUN_004028f0(local_118,'\0');
        uVar9 = 0xffffffff;
        pcVar12 = s_C__Work_A2IV_Game_prog_Hud_Eleme_005a9cf4;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_00402940(local_118,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Eleme_005a9cf4,~uVar9 - 1)
        ;
        local_f8[0] = local_121;
        local_4._0_1_ = 3;
        FUN_004028f0(local_f8,'\0');
        uVar9 = 0xffffffff;
        pcVar12 = s_HeadUp_Display_exception_in__005a9d1c;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_00402940(local_f8,(undefined4 *)s_HeadUp_Display_exception_in__005a9d1c,~uVar9 - 1);
        local_4._0_1_ = 4;
        puVar7 = FUN_0047c9a0(local_ac,local_f8,(int)local_118);
        local_4._0_1_ = 5;
        puVar7 = FUN_004796b0(local_cc,puVar7,&DAT_005a9cf0);
        local_4._0_1_ = 6;
        puVar6 = FUN_0047c9a0(local_8c,puVar7,(int)puVar6);
        local_4._0_1_ = 7;
        puVar6 = FUN_0047c9a0(local_4c,puVar6,(int)local_108);
        local_4._0_1_ = 8;
        puVar6 = FUN_004796b0(local_6c,puVar6,s_Unreachable_code_reached__005a9cd0);
        local_4._0_1_ = 9;
        iVar8 = FUN_0047bc10((int)local_120);
        puVar6 = FUN_0047c9a0(local_bc,puVar6,iVar8);
        local_4._0_1_ = 10;
        puVar6 = FUN_004796b0(local_9c,puVar6,s___Unknown_object_type___005a9cb8);
        local_4._0_1_ = 0xb;
        puVar5 = FUN_0047c9a0(local_7c,puVar6,(int)puVar5);
        local_4._0_1_ = 0xc;
        puVar5 = FUN_004796b0(local_5c,puVar5,&DAT_005a9cb4);
        local_4._0_1_ = 0xd;
        puVar5 = FUN_004796b0(local_3c,puVar5,&DAT_005a9cb0);
        local_4._0_1_ = 0xe;
        FUN_00558826(local_e8);
        local_4._0_1_ = 0xf;
        FUN_00424980(local_dc,&local_121);
        local_4._0_1_ = 0x10;
        local_e8[0] = &PTR_FUN_00576b14;
        FUN_004093c0(local_dc,puVar5,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,0xe);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_e8,&DAT_0057f730);
      }
      iVar13 = 0;
      iVar8 = *(int *)(iVar10 + 4) * 9;
      local_11c = *(int *)(iVar8 + DAT_0073b168);
      ExceptionList = &local_c;
      ppvVar4 = &local_c;
      if (0 < local_11c) {
        do {
          uVar3 = *param_1;
          piVar1 = (int *)(DAT_0073b5c8 +
                          *(int *)(*(int *)(*(int *)(iVar8 + 4 + DAT_0073b168) + iVar13 * 4) * 0x10
                                  + DAT_0073b120) * 0xac);
          if ((*piVar1 == 2) && (iVar10 = 0, 0 < piVar1[0x21])) {
            iVar11 = 0;
            do {
              iVar10 = iVar10 + 1;
              *(undefined4 *)(iVar11 + 0x10 + piVar1[0x20]) = uVar3;
              iVar11 = iVar11 + 0x20;
            } while (iVar10 < piVar1[0x21]);
          }
          iVar13 = iVar13 + 1;
          ppvVar4 = ExceptionList;
        } while (iVar13 < local_11c);
      }
    }
  }
  ExceptionList = ppvVar4;
  FUN_0047bdc0(this,param_1);
  ExceptionList = local_c;
  return;
}


