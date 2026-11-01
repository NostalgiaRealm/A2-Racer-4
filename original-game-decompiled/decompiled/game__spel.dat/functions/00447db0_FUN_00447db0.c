
/* ==== FUN_00447db0 @ 00447db0 ==== 
 * signature: undefined __cdecl FUN_00447db0(byte * param_1)
 * body: 00447db0-00447f64;00447f68-004480ee
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00447f65-00447f67
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00447db0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  byte *pbVar5;
  CHAR local_140 [32];
  CHAR local_120 [32];
  byte local_100 [256];
  
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059e96c);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  FUN_004c3cd0(s_ETAPPE_0059e964,s_ETAPPE_0059e97c);
  iVar2 = FUN_00448c90(&DAT_006fa558,param_1);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  uVar4 = FUN_004c3cd0(s_PROGRAM_0059e934,s_RESOLUTION_0059e984);
  FUN_00447330(uVar4);
  FUN_004c3d10(s_PROGRAM_0059e934,&DAT_0059e990,local_140,0x1f);
  FUN_00447380(local_140);
  iVar2 = FUN_004c3cd0(s_PROGRAM_0059e934,s_FOCUS_0059e998);
  FUN_004477b0(iVar2);
  iVar2 = FUN_004c3cd0(s_PROGRAM_0059e934,s_WINDOWED_0059e9a0);
  FUN_00447740(iVar2);
  iVar2 = FUN_004c3cd0(s_MOUSE_0059e95c,&DAT_0059e9ac);
  FUN_00447490(iVar2);
  uVar4 = FUN_004c3cd0(s_SOUND_0059e93c,s_BUFFERS_0059e9b4);
  FUN_00447550(uVar4);
  iVar2 = FUN_004c3cd0(s_SOUND_0059e93c,&DAT_0059e9bc);
  FUN_00447500(iVar2);
  uVar4 = FUN_004c3cd0(s_SOUND_0059e93c,s_MUSICVOLUME_0059e9c0);
  FUN_004475a0(uVar4);
  uVar4 = FUN_004c3cd0(s_SOUND_0059e93c,s_SFXVOLUME_0059e9cc);
  FUN_004475c0(uVar4);
  uVar4 = FUN_004c3cd0(s_SOUND_0059e93c,s_POLICEVOLUME_0059e9d8);
  FUN_004475e0(uVar4);
  FUN_004c3d10((LPCSTR)&PTR_FUN_0059e958,s_RCSFILE_0059e9e8,local_140,0x1f);
  FUN_004473d0(local_140);
  FUN_005587a3(local_120,(byte *)s_etappe_d_0059e9f0);
  FUN_004c3d10(s_PALET_0059e950,local_120,(LPSTR)local_100,199);
  iVar2 = FUN_004c3d60(local_100,(uint *)0x0);
  if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__load_palette_info___s__d____Inv_0059ea20);
  }
  FUN_004c3f10(0,local_140,0xc);
  FUN_004c3f10(1,local_120,0xc);
  FUN_00447600(local_140,local_120);
  FUN_004c3fa0((byte *)s_etappe_nummer_for_palet____d___s_0059ea64);
  iVar2 = FUN_004c3cd0(s_PALET_0059e950,&DAT_0059ea8c);
  FUN_00447660(iVar2);
  iVar2 = FUN_004c3cd0(s_HELPDESK_0059e944,s_DEBUGON_0059ea94);
  FUN_004476d0(iVar2);
  FUN_004c3d10(s_DIRECTX_0059eaa4,s_INDEX_0059ea9c,(LPSTR)local_100,199);
  FUN_004c3d60(local_100,(uint *)0x0);
  DAT_0059dbcc = FUN_004c3ec0(0);
  FUN_004c3d10(s_DIRECTX_0059eab4,&DAT_0059eaac,&DAT_0059dbe0,199);
  FUN_004c3d10(s_DIRECTX_0059eac4,&DAT_0059eabc,(LPSTR)local_100,199);
  iVar2 = -1;
  pbVar5 = local_100;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  if (iVar2 != -2) {
    FUN_004c3d60(local_100,(uint *)0x0);
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


