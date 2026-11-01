
/* ==== FUN_0044c200 @ 0044c200 ==== 
 * signature: undefined __stdcall FUN_0044c200(void)
 * body: 0044c200-0044c357;0044c35b-0044c7fa
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044c358-0044c35a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044c200(void)

{
  char cVar1;
  int *this;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int unaff_EBX;
  undefined4 *puVar10;
  undefined4 local_8c [16];
  float local_4c [13];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056a50d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = FUN_00497960();
  FUN_004c3fa0((byte *)s______Entry_init_game______005a135c);
  FUN_0044c090();
  FUN_004c3fa0((byte *)s_set_game_display_____005a1378);
  FUN_0044bd10();
  FUN_004c3fa0((byte *)s_ini_load_all_____005a1390);
  FUN_004492c0();
  FUN_004c3fa0((byte *)s_init_3d_library_____005a13a4);
  FUN_0044bad0();
  if (DAT_0073b4f9 < DAT_006fb978) {
    DAT_006fb978 = DAT_0073b4f9;
  }
  FUN_004c3fa0((byte *)s_Available_texture_memory___d__Re_005a13bc);
  if (DAT_006fb944 == 0) {
    DAT_0073b4f8 = 0;
  }
  if (DAT_006fb8d4 == 0) {
    DAT_005962b4 = 5;
    DAT_005962b8 = 7;
  }
  else {
    DAT_005962b4 = 10;
    DAT_005962b8 = 0xe;
  }
  FUN_004c3fa0((byte *)s_set_game_render_states_____005a13f8);
  FUN_0044bbf0();
  puVar2 = (undefined4 *)
           FUN_004b39d0(local_4c,0.5 / _DAT_006fb974,12500.0,_DAT_006fb974 * 3.1415927);
  puVar10 = local_8c;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar2 = local_8c;
  puVar10 = &DAT_0073b3f4;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar9 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,3,&DAT_0073b3f4);
  if (iVar9 != 0) {
    FUN_004bb290(iVar9);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  FUN_004c3fa0((byte *)s_init_game_info___005a1414);
  FUN_0044c080();
  FUN_00468390();
  FUN_004c3fa0((byte *)s_init_2d_graphics_____005a1428);
  FUN_00440950();
  FUN_00498760(this);
  FUN_004c3fa0((byte *)s_init_color_key_bufferscreen___005a1440);
  FUN_0044c030();
  FUN_004c3fa0((byte *)s_init_ascii_fonts___005a1460);
  FUN_0043ce10();
  FUN_004c3fa0((byte *)s_init_moving_sky____005a1474);
  FUN_004454c0();
  FUN_004c3fa0((byte *)s_init_game_actions___005a1488);
  FUN_0043c0a0();
  FUN_004c3fa0((byte *)s_InitSndFxEngine___005a14a0);
  FUN_004506e0();
  FUN_00426a90((int *)&DAT_005d3460);
  puVar3 = FUN_0049df90(&stack0xffffff58,(byte *)s_RACER__d_005a14b4);
  uStack_10 = 0;
  iVar9 = FUN_00424660(&DAT_005d3458,(int)puVar3);
  uVar5 = *(undefined4 *)(iVar9 + 0x44);
  uStack_10 = 0xffffffff;
  if (unaff_EBX != 0) {
    cVar1 = *(char *)(unaff_EBX + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(unaff_EBX + -1));
    }
    else {
      *(char *)(unaff_EBX + -1) = cVar1 + -1;
    }
  }
  FUN_004489a0(&DAT_006fa558,(byte *)s_CAR_SND_INI_005a14d4,(byte *)s_Car_Sound_Settings_005a14c0);
  FUN_0042e990(&DAT_006fb9c0,uVar5,(byte *)s_Car_Sound_Settings_005a14e0);
  FUN_0043aa70();
  FUN_004c3fa0((byte *)s_init_3d_anim_config_____005a14f4);
  FUN_0044bbd0();
  FUN_00487f20(&DAT_007126e8,0);
  FUN_004885b0(0x7126e8);
  FUN_004415e0();
  FUN_004489a0(&DAT_006fa558,(byte *)s_ANMTYPES_INI_005a1528,
               (byte *)s_Animation_Definitions_005a1510);
  FUN_00469a50(&DAT_00712230,(byte *)s_Animation_Definitions_005a1538);
  FUN_004c3fa0((byte *)s_check_texture_copy_____005a1550);
  FUN_004c3fa0((byte *)s_rceng_init_engine_____005a1568);
  pcVar4 = (char *)FUN_00498870(this,&DAT_006fa59e + DAT_006fb898 * 0x94);
  uVar5 = FUN_004b26f0(&DAT_006fa59e + DAT_006fb898 * 0x94,DAT_006fb8d0,1,pcVar4);
  pcVar4 = (char *)FUN_00498870(this,&DAT_006fa5ac + DAT_006fb898 * 0x94);
  uVar6 = FUN_004b26f0(&DAT_006fa5ac + DAT_006fb898 * 0x94,DAT_006fb8d0,1,pcVar4);
  pcVar4 = (char *)FUN_00498870(this,&DAT_006fa5c8 + DAT_006fb898 * 0x94);
  uVar7 = FUN_004b26f0(&DAT_006fa5c8 + DAT_006fb898 * 0x94,DAT_006fb8d0,1,pcVar4);
  pcVar4 = (char *)FUN_00498870(this,&DAT_006fa5ba + DAT_006fb898 * 0x94);
  uVar8 = FUN_004b26f0(&DAT_006fa5ba + DAT_006fb898 * 0x94,DAT_006fb8d0,1,pcVar4);
  FUN_004a6a10(0x9c4,uVar5,uVar6,uVar7,uVar8);
  FUN_004415e0();
  FUN_004c3fa0((byte *)s_init_track_object_types___005a1580);
  FUN_00453440();
  FUN_004c3fa0((byte *)s_init_all_triggers___005a159c);
  FUN_00457820();
  FUN_004c3fa0((byte *)s_init_car_shadow_object_____005a15b4);
  FUN_0042a740();
  FUN_004446a0();
  FUN_004290f0();
  FUN_004c3fa0((byte *)s_rceng_load_etappe_____005a15d0);
  FUN_004691a0((char *)(&DAT_006fa590 + DAT_006fb898 * 0x25));
  FUN_004a6b10();
  FUN_004693d0();
  if (DAT_006fb8ac == 0) {
    DAT_006fb8ac = FUN_00457ae0();
  }
  FUN_004a6af0((uint)(DAT_006fb8cc == 0));
  FUN_004c3fa0((byte *)s_init_particle_emitters___005a15e8);
  FUN_004625b0();
  if (DAT_006fb970 != 0) {
    FUN_004c3fa0((byte *)s_init_radar___005a1604);
    FUN_004422f0(&DAT_006ce000,DAT_006fb8d0,DAT_006fb964);
  }
  FUN_004c3fa0((byte *)s_init_sparks___005a1614);
  FUN_004460a0();
  FUN_004c3fa0((byte *)s_init_clouds___005a1624);
  FUN_00446e80();
  FUN_004c3fa0((byte *)s_init_finish_flag___005a1634);
  FUN_00440130();
  FUN_004c3fa0((byte *)s_init_skidmarks___005a1648);
  FUN_00444f50();
  FUN_0043dd40();
  FUN_004415e0();
  FUN_004c3fa0((byte *)s_init_bkg____005a165c);
  FUN_0043d3c0();
  FUN_004c3fa0((byte *)s_init_game_cars_____005a166c);
  FUN_004294a0();
  pcVar4 = FUN_0040ebe0();
  FUN_0040ec60(pcVar4);
  FUN_004c3fa0((byte *)s_init_3d_paths___005a1680);
  FUN_00464420();
  FUN_004c3fa0((byte *)s_init_etappe_timer___005a1694);
  FUN_0044bf10();
  FUN_004415e0();
  FUN_004c3fa0((byte *)s_init_game_cameras_____005a16ac);
  FUN_00437fd0();
  FUN_004096b0();
  FUN_004a7230((float)(int)(short)(&DAT_006fa612)[DAT_006fb898 * 0x4a],
               (float)(int)(short)(&DAT_006fa614)[DAT_006fb898 * 0x4a],
               (float)(int)(short)(&DAT_006fa616)[DAT_006fb898 * 0x4a]);
  FUN_00488380(0x7126e8);
  _DAT_0071277c = 1;
  FUN_00450870();
  ExceptionList = pvStack_18;
  return;
}


