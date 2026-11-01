
/* ==== FUN_00447d8e @ 00447d8e ==== 
 * signature: undefined __fastcall FUN_00447d8e(char * param_1, char param_2, LPCSTR param_3)
 * body: 00447d8e-00447d8f
 */

/* WARNING: Instruction at (ram,0x00447de7) overlaps instruction at (ram,0x00447de3)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00447d8e(char *param_1,char param_2,LPCSTR param_3)

{
  char cVar1;
  char cVar5;
  int in_EAX;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char cVar6;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_EDI;
  LPCSTR unaff_retaddr;
  byte *in_stack_0000014c;
  
  *(uint *)(unaff_EBP + 0x44) = *(uint *)(unaff_EBP + 0x44) & unaff_EDI;
  cVar1 = *param_1;
  cVar5 = (char)((uint)in_EAX >> 8);
  *param_1 = *param_1 + cVar5;
  if (SCARRY1(cVar1,cVar5) == *param_1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = *param_1;
  *param_1 = *param_1 + cVar5;
  if (SCARRY1(cVar1,cVar5) == *param_1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = *param_1;
  cVar6 = (char)((uint)unaff_EBX >> 8);
  *param_1 = *param_1 + cVar6;
  if (SCARRY1(cVar1,cVar6) != *param_1 < '\0') {
    cVar1 = *param_1;
    *param_1 = *param_1 + cVar6;
    if (SCARRY1(cVar1,cVar6) == *param_1 < '\0') {
      *(char *)(unaff_EBX + -0xf74f33c) = *(char *)(unaff_EBX + -0xf74f33c) + (char)in_EAX;
      goto code_r0x00447ded;
    }
    cVar1 = *param_1;
    *param_1 = *param_1 + cVar5;
    if (SCARRY1(cVar1,cVar5) == *param_1 < '\0') goto code_r0x00447ded;
    *(char *)(in_EAX + -0x6f6f6f70) = *(char *)(in_EAX + -0x6f6f6f70) + param_2;
    iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059e96c);
    pcVar3 = *(char **)(iVar2 + 4);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    set_ini_filename(pcVar3);
  }
  read_ini_value_setting(unaff_retaddr,param_3);
code_r0x00447ded:
  iVar2 = FUN_00448c90(&DAT_006fa558,in_stack_0000014c);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  set_ini_filename(pcVar3);
  uVar4 = read_ini_value_setting(s_PROGRAM_0059e934,s_RESOLUTION_0059e984);
  FUN_00447330(uVar4);
  read_ini_string_setting(s_PROGRAM_0059e934,&DAT_0059e990,&stack0x00000008,0x1f);
  FUN_00447380(&stack0x00000008);
  iVar2 = read_ini_value_setting(s_PROGRAM_0059e934,s_FOCUS_0059e998);
  FUN_004477b0(iVar2);
  iVar2 = read_ini_value_setting(s_PROGRAM_0059e934,s_WINDOWED_0059e9a0);
  FUN_00447740(iVar2);
  iVar2 = read_ini_value_setting(s_MOUSE_0059e95c,&DAT_0059e9ac);
  FUN_00447490(iVar2);
  uVar4 = read_ini_value_setting(s_SOUND_0059e93c,s_BUFFERS_0059e9b4);
  FUN_00447550(uVar4);
  iVar2 = read_ini_value_setting(s_SOUND_0059e93c,&DAT_0059e9bc);
  FUN_00447500(iVar2);
  uVar4 = read_ini_value_setting(s_SOUND_0059e93c,s_MUSICVOLUME_0059e9c0);
  FUN_004475a0(uVar4);
  uVar4 = read_ini_value_setting(s_SOUND_0059e93c,s_SFXVOLUME_0059e9cc);
  FUN_004475c0(uVar4);
  uVar4 = read_ini_value_setting(s_SOUND_0059e93c,s_POLICEVOLUME_0059e9d8);
  FUN_004475e0(uVar4);
  read_ini_string_setting((LPCSTR)&PTR_FUN_0059e958,s_RCSFILE_0059e9e8,&stack0x00000008,0x1f);
  FUN_004473d0(&stack0x00000008);
  FUN_005587a3(&stack0x00000028,(byte *)s_etappe_d_0059e9f0);
  read_ini_string_setting(s_PALET_0059e950,&stack0x00000028,&stack0x00000048,199);
  iVar2 = get_ini_arguments_online(&stack0x00000048,(uint *)0x0);
  if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__load_palette_info___s__d____Inv_0059ea20);
  }
  FUN_004c3f10(0,&stack0x00000008,0xc);
  FUN_004c3f10(1,&stack0x00000028,0xc);
  FUN_00447600(&stack0x00000008,&stack0x00000028);
  FUN_004c3fa0((byte *)s_etappe_nummer_for_palet____d___s_0059ea64);
  iVar2 = read_ini_value_setting(s_PALET_0059e950,&DAT_0059ea8c);
  FUN_00447660(iVar2);
  iVar2 = read_ini_value_setting(s_HELPDESK_0059e944,s_DEBUGON_0059ea94);
  FUN_004476d0(iVar2);
  read_ini_string_setting(s_DIRECTX_0059eaa4,s_INDEX_0059ea9c,&stack0x00000048,199);
  get_ini_arguments_online(&stack0x00000048,(uint *)0x0);
  DAT_0059dbcc = FUN_004c3ec0(0);
  read_ini_string_setting(s_DIRECTX_0059eab4,&DAT_0059eaac,&DAT_0059dbe0,199);
  read_ini_string_setting(s_DIRECTX_0059eac4,&DAT_0059eabc,&stack0x00000048,199);
  iVar2 = -1;
  pcVar3 = &stack0x00000048;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    get_ini_arguments_online(&stack0x00000048,(uint *)0x0);
    _DAT_0059dbd0 = FUN_004c3ec0(0);
    _DAT_0059dbd4 = FUN_004c3ec0(1);
    _DAT_0059dbd6 = FUN_004c3ec0(2);
    DAT_0059dbd8 = FUN_004c3ec0(3);
    DAT_0059dbd9 = FUN_004c3ec0(4);
    DAT_0059dbda = FUN_004c3ec0(5);
    DAT_0059dbdb = FUN_004c3ec0(6);
    DAT_0059dbdc = FUN_004c3ec0(7);
    DAT_0059dbdd = FUN_004c3ec0(8);
    DAT_0059dbde = FUN_004c3ec0(9);
    DAT_0059dbdf = FUN_004c3ec0(10);
  }
  return;
}


