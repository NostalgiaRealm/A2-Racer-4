
/* ==== FUN_004c4fa0 @ 004c4fa0 ==== 
 * signature: undefined __stdcall FUN_004c4fa0(void)
 * body: 004c4fa0-004c506e;004c5072-004c50a4;004c50a8-004c51b5;004c51b9-004c5229;004c522d-004c525f;004c5263-004c5314;004c5318-004c53c6;004c53ca-004c5429;004c542d-004c54d1;004c54d5-004c5514;004c5518-004c5549;004c554d-004c557b;004c557f-004c55b5
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c506f-004c5071 004c50a5-004c50a7 004c51b6-004c51b8 004c522a-004c522c 004c5260-004c5262 004c5315-004c5317 004c53c7-004c53c9 004c542a-004c542c 004c54d2-004c54d4 004c5515-004c5517 004c554a-004c554c 004c557c-004c557e
 */

void FUN_004c4fa0(void)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  int *local_7c;
  undefined4 local_6c [5];
  int local_58;
  undefined4 local_4;
  
  local_7c = (int *)0x0;
  cVar1 = FUN_004c3f70();
  if (cVar1 != '\0') {
    DAT_005b37a8 = 0;
  }
  if (DAT_007408d0 == 0) {
    while( true ) {
      puVar5 = local_6c;
      for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_6c[0] = 0x6c;
      if (DAT_005b37a8 == 0) {
        local_4 = 0x2200;
        local_6c[1] = 1;
      }
      else {
        local_6c[1] = 0x21;
        local_4 = 0x2218;
      }
      local_58 = DAT_005b37a8;
      FUN_004c3fa0((byte *)s_creating_005b452c);
      iVar4 = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c);
      if (iVar4 != 0) {
        FUN_004c4400(iVar4);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____could_not_create_primar_005b44f8);
      }
      iVar4 = (**(code **)*DAT_007408ac)(DAT_007408ac,&DAT_00578d60,&DAT_00740840);
      if (iVar4 != 0) {
        FUN_004c4400(iVar4);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____could_not_create_dd2_su_005b44c4);
      }
      FUN_004c3fa0((byte *)s_locking_005b44b8);
      bVar2 = FUN_004c4ce0(0);
      if (CONCAT31(extraout_var,bVar2) != 0) break;
      if ((DAT_005b37a8 == 0) || (DAT_007408e0 != 0)) goto LAB_004c5131;
      (**(code **)(*DAT_007408ac + 8))(DAT_007408ac);
      (**(code **)(*DAT_00740840 + 8))(DAT_00740840);
      DAT_005b37a8 = 0;
    }
    DAT_007408bc = 1;
    uVar3 = FUN_004c48f0(DAT_007408ac);
    FUN_004c3fa0((byte *)s_locking_inter_005b44a8);
    FUN_004c4a20(DAT_007408ac,uVar3);
    FUN_004c3fa0((byte *)s_locking_done_005b4498);
LAB_004c5131:
    FUN_004c3fa0((byte *)s_getting_pixel_format_005b4480);
    FUN_004c8540();
    if (DAT_007409cc != 0) {
      if (DAT_007409cc == 4) {
        FUN_004c81b0(DAT_007408f0,0x18);
      }
      else {
        FUN_004c81b0((uint)DAT_005b3940,8);
      }
    }
    iVar4 = (**(code **)(*DAT_007408ac + 0x74))(DAT_007408ac,8,&stack0xffffff70);
    if (iVar4 != 0) {
      FUN_004c4400(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____failed_to_set_color_key_005b4458);
    }
    DAT_007408d0 = 1;
  }
  if (DAT_007408d4 != 0) goto LAB_004c53d0;
  if (DAT_005b37a8 == 0) {
    FUN_004c3fa0((byte *)s_back_screen2_005b43d0);
    cVar1 = FUN_004c3f70();
    DAT_007408b0 = (int *)FUN_004c4b00(DAT_005b3798,DAT_005b379c,
                                       (-(uint)(cVar1 != '\0') & 0x3800) + 0x800 | 0x2000);
    iVar4 = (**(code **)*DAT_007408b0)();
    if (iVar4 != 0) {
      FUN_004c4400(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____unable_to_create_attach_005b4414);
    }
    bVar2 = FUN_004c4ce0(1);
    if (CONCAT31(extraout_var_01,bVar2) != 0) {
      DAT_007408c0 = 1;
      uVar3 = FUN_004c48f0(DAT_007408b0);
      FUN_004c4a20(DAT_007408b0,uVar3);
      pcVar6 = s_back_screen_locking_done2_005b43b4;
      goto LAB_004c534d;
    }
  }
  else {
    FUN_004c3fa0((byte *)s_back_screen_1_005b4448);
    iVar4 = (**(code **)(*DAT_007408ac + 0x30))();
    if (iVar4 != 0) {
      FUN_004c4400(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____unable_to_create_attach_005b4414);
    }
    iVar4 = (**(code **)*DAT_007408b0)(DAT_007408b0,&DAT_00578d60);
    if (iVar4 != 0) {
      FUN_004c4400(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____unable_to_create_attach_005b4414);
    }
    FUN_004c3fa0((byte *)s_back_screen_locking_1_005b43fc);
    bVar2 = FUN_004c4ce0(1);
    if (CONCAT31(extraout_var_00,bVar2) != 0) {
      DAT_007408c0 = 1;
      uVar3 = FUN_004c48f0(DAT_007408b0);
      FUN_004c4a20(DAT_007408b0,uVar3);
      pcVar6 = s_back_screen_locking_done1_005b43e0;
LAB_004c534d:
      FUN_004c3fa0((byte *)pcVar6);
    }
  }
  if (DAT_007409cc != 0) {
    if (DAT_007409cc == 4) {
      FUN_004c81b0(DAT_007408f0,0x18);
    }
    else {
      FUN_004c81b0((uint)DAT_005b3940,8);
    }
  }
  iVar4 = (**(code **)(*DAT_007408b0 + 0x74))(DAT_007408b0,8,&stack0xffffff74);
  if (iVar4 != 0) {
    FUN_004c4400(iVar4);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____failed_to_set_color_key_005b4458);
  }
  DAT_007408d4 = 1;
LAB_004c53d0:
  if (DAT_007408d8 == 0) {
    DAT_00740890 = (int *)FUN_004c4b00(DAT_005b3798,DAT_005b379c,0x2800);
    iVar4 = (**(code **)*DAT_00740890)();
    if (iVar4 != 0) {
      FUN_004c4400(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____query_interface_for_sur_005b4380);
    }
    bVar2 = FUN_004c4ce0(2);
    if (CONCAT31(extraout_var_02,bVar2) != 0) {
      DAT_007408c4 = 1;
      uVar3 = FUN_004c48f0(DAT_00740890);
      FUN_004c4a20(DAT_00740890,uVar3);
    }
    local_7c = DAT_005b3940;
    if (DAT_007409cc != 0) {
      if (DAT_007409cc == 4) {
        local_7c = (int *)FUN_004c81b0(DAT_007408f0,0x18);
      }
      else {
        local_7c = (int *)FUN_004c81b0((uint)DAT_005b3940,8);
      }
    }
    iVar4 = (**(code **)(*DAT_00740890 + 0x74))(DAT_00740890,8);
    if (iVar4 != 0) {
      FUN_004c4400(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____failed_to_set_color_key_005b4458);
    }
    DAT_007408d8 = 1;
  }
  cVar1 = FUN_004c3f70();
  if (cVar1 != '\0') {
    iVar4 = DirectDrawCreateClipper();
    if (iVar4 != 0) {
      FUN_004c4400(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____failed_create_Clipper_o_005b4350);
    }
    piVar7 = (int *)0x0;
    iVar4 = (**(code **)(*local_7c + 0x20))();
    if (iVar4 != 0) {
      FUN_004c4400(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____failed_set_Clipper_HWND_005b4328);
    }
    iVar4 = (**(code **)(*DAT_007408ac + 0x70))(DAT_007408ac);
    if (iVar4 != 0) {
      FUN_004c4400(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____failed_set_Prim_surf_Cl_005b42f8);
    }
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  FUN_004c3fa0((byte *)s_init_palette_done_005b42e4);
  FUN_004c9c90();
  FUN_004c4f70(2,0);
  FUN_004c4f70(1,0);
  FUN_004c41e0();
  return;
}


