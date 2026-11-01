
/* ==== FUN_0049fc40 @ 0049fc40 ==== 
 * signature: undefined __fastcall FUN_0049fc40(void * param_1)
 * body: 0049fc40-0049ff51
 */

void __fastcall FUN_0049fc40(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 local_170 [4];
  uint *local_16c;
  undefined1 local_160 [4];
  uint *local_15c;
  CHAR local_150 [12];
  undefined4 local_144;
  undefined4 local_140;
  uint local_13c;
  int local_138;
  int local_134;
  int local_130;
  undefined1 local_12c [16];
  undefined1 local_11c [16];
  uint local_10c [64];
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ec21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049f360(&local_144);
  iVar6 = 0;
  local_4 = 0;
  iVar1 = read_ini_value_setting(s_SndTypes_005aef90,s_count_005aeeec);
  if (0 < iVar1) {
    do {
      wsprintfA(local_150,&DAT_005aeedc,iVar6);
      read_ini_string_setting(s_SndTypes_005aef90,local_150,(LPSTR)local_10c,0xff);
      iVar3 = -1;
      puVar7 = local_10c;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        uVar4 = *puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
      } while ((char)uVar4 != '\0');
      FUN_004a0100((uint)(iVar3 != -2),(byte *)s__s__d__Can_t_find_sound_type__d_s_005aef64);
      iVar3 = get_ini_arguments_online((byte *)local_10c,(uint *)0x0);
      FUN_004a0100((uint)(iVar3 == 7),(byte *)s__s___d__Incorrect_number_of_argu_005aef04);
      FUN_004c3f10(0,(char *)local_10c,0xff);
      FUN_004028f0(local_160,'\0');
      uVar4 = 0xffffffff;
      puVar7 = local_10c;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        uVar5 = *puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
      } while ((char)uVar5 != '\0');
      uVar4 = ~uVar4 - 1;
      uVar2 = FUN_00402a00(local_160,uVar4,'\x01');
      if ((char)uVar2 != '\0') {
        puVar7 = local_10c;
        puVar8 = local_15c;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar8 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        FUN_004029e0(local_160,uVar4);
      }
      local_4._0_1_ = 1;
      FUN_004093c0(local_11c,local_160,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_160,'\x01');
      FUN_004c3f10(1,(char *)local_10c,0xff);
      FUN_004028f0(local_170,'\0');
      uVar4 = 0xffffffff;
      puVar7 = local_10c;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        uVar5 = *puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
      } while ((char)uVar5 != '\0');
      uVar4 = ~uVar4 - 1;
      uVar2 = FUN_00402a00(local_170,uVar4,'\x01');
      if ((char)uVar2 != '\0') {
        puVar7 = local_10c;
        puVar8 = local_16c;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar8 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        FUN_004029e0(local_170,uVar4);
      }
      local_4._0_1_ = 2;
      FUN_004093c0(local_12c,local_170,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_170,'\x01');
      local_140 = FUN_004c3ec0(2);
      iVar3 = FUN_004c3ec0(3);
      FUN_004a00b0(iVar3,0,100);
      local_134 = iVar3;
      iVar3 = FUN_004c3ec0(4);
      FUN_004a00b0(iVar3,0,4000);
      local_138 = iVar3;
      iVar3 = FUN_004c3ec0(5);
      FUN_004a00b0(iVar3,0,100);
      local_130 = iVar3;
      FUN_004c3f10(6,(char *)local_10c,0xff);
      local_13c = FUN_0049f9a0(param_1,local_10c);
      FUN_0049f030((void *)((int)param_1 + 0x14),(uint)&local_144);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  local_4 = 0xffffffff;
  FUN_0049f4c0(&local_144);
  ExceptionList = local_c;
  return;
}


