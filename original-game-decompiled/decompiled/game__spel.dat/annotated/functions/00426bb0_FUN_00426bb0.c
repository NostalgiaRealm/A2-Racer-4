
/* ==== FUN_00426bb0 @ 00426bb0 ==== 
 * signature: undefined __thiscall FUN_00426bb0(void * this, int param_1, int param_2, int param_3)
 * body: 00426bb0-00426e9a;00426e9e-00426ed8;00426edc-00426f20;00426f26-00426f39;00426f3d-00426f57
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00426e9b-00426e9d 00426ed9-00426edb 00426f21-00426f25 00426f3a-00426f3c
 */

void __thiscall FUN_00426bb0(void *this,int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  void *this_00;
  void *pvVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  bool bVar18;
  bool bVar19;
  float fVar20;
  char local_1b1;
  int local_1b0;
  int local_1ac;
  char local_1a4 [4];
  char *local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  CHAR local_194 [4];
  void *local_190;
  char local_18c [64];
  byte local_14c [64];
  byte local_10c [256];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a100;
  pvStack_c = ExceptionList;
  iVar13 = -1;
  local_1ac = -1;
  iVar14 = 0;
  ExceptionList = &pvStack_c;
  local_190 = this;
  do {
    puVar1 = (undefined4 *)((int)this + iVar14 * 0x14 + 0x10);
    iVar6 = FUN_00425230(puVar1);
    if ((iVar6 == -1) || (iVar7 = FUN_00425230(puVar1), iVar6 = iVar14, iVar7 == param_1)) {
      iVar6 = 0xfa;
      iVar13 = iVar14;
      local_1ac = iVar14;
    }
    iVar14 = iVar6 + 1;
  } while (iVar14 < 0xfa);
  if (iVar13 == -1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Too_many_cars_added__Ma_005961b8);
  }
  iVar14 = FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Damage_Settings_0059605c);
  pcVar8 = *(char **)(iVar14 + 4);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  set_ini_filename(pcVar8);
  iVar14 = read_ini_value_setting(PTR_s_Damage_Models_00595b7c,PTR_s_count_00595b74);
  local_1b1 = '\0';
  local_1b0 = 0;
  if (0 < iVar14) {
    do {
      FUN_005587a3(local_194,&DAT_00596070);
      read_ini_string_setting(PTR_s_Damage_Models_00595b7c,local_194,(LPSTR)local_10c,0x100);
      iVar6 = get_ini_arguments_online(local_10c,(uint *)0x0);
      if (iVar6 != 7) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____The_damage_model__s_has_005960fc);
      }
      FUN_004c3f10(0,(char *)local_14c,0x40);
      pvVar2 = local_190;
      uVar10 = 0xffffffff;
      pbVar15 = local_14c;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar3 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar3 != 0);
      uVar12 = *(uint *)(param_3 + 8);
      uVar11 = ~uVar10 - 1;
      uVar10 = uVar12;
      if (uVar11 <= uVar12) {
        uVar10 = uVar11;
      }
      bVar18 = false;
      iVar6 = 0;
      bVar19 = true;
      pbVar15 = *(byte **)(param_3 + 4);
      pbVar16 = local_14c;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        bVar18 = *pbVar15 < *pbVar16;
        bVar19 = *pbVar15 == *pbVar16;
        pbVar15 = pbVar15 + 1;
        pbVar16 = pbVar16 + 1;
      } while (bVar19);
      if (!bVar19) {
        iVar6 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
      }
      if (((iVar6 == 0) && (uVar11 <= uVar12)) && (uVar12 == uVar11)) {
        this_00 = (void *)((int)local_190 + iVar13 * 0x14 + 0x10);
        FUN_00425220(this_00,param_1);
        if (param_2 == 1) {
          iVar6 = FUN_004c3ec0(4);
          fVar20 = (float)iVar6;
          iVar6 = FUN_004c3ec0(3);
        }
        else {
          iVar6 = FUN_004c3ec0(2);
          fVar20 = (float)iVar6;
          iVar6 = FUN_004c3ec0(1);
        }
        FUN_00425240(this_00,(float)iVar6,fVar20);
        uVar9 = FUN_004c3ec0(6);
        *(undefined4 *)((iVar13 + 0xde6b) * 0x10 + (int)pvVar2) = uVar9;
        FUN_004c3f10(5,local_18c,0x40);
        pvVar2 = (void *)((int)pvVar2 + iVar13 * 0xe28 + 0x1398);
        FUN_00426420(pvVar2,param_1);
        uVar10 = 0xffffffff;
        pcVar8 = local_18c;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar5 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar5 != '\0');
        uVar10 = ~uVar10 - 1;
        local_1a4[0] = local_1b1;
        local_1a0 = (char *)0x0;
        local_19c = 0;
        local_198 = 0;
        uVar9 = FUN_00402a00(local_1a4,uVar10,'\x01');
        if ((char)uVar9 != '\0') {
          pcVar8 = local_18c;
          pcVar17 = local_1a0;
          for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar12 = uVar10 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar17 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar17 = pcVar17 + 1;
          }
          FUN_004029e0(local_1a4,uVar10);
        }
        local_4 = 0;
        cVar5 = FUN_00425fb0(pvVar2,local_1a4);
        local_4 = 0xffffffff;
        if (local_1a0 != (char *)0x0) {
          cVar4 = local_1a0[-1];
          if ((cVar4 == '\0') || (cVar4 == -1)) {
            FUN_0054b339(local_1a0 + -1);
          }
          else {
            local_1a0[-1] = cVar4 + -1;
          }
        }
        local_1a0 = (char *)0x0;
        local_19c = 0;
        local_198 = 0;
        if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____Could_not_load_car_obje_00596098);
        }
        local_1b1 = '\x01';
        iVar13 = local_1ac;
        local_1b0 = iVar14;
      }
      local_1b0 = local_1b0 + 1;
    } while (local_1b0 < iVar14);
    if (local_1b1 != '\0') {
      ExceptionList = pvStack_c;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____The_damage_model__s_was_00596164);
}


