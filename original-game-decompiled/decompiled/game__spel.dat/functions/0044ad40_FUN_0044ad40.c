
/* ==== FUN_0044ad40 @ 0044ad40 ==== 
 * signature: undefined __stdcall FUN_0044ad40(void)
 * body: 0044ad40-0044ada5;0044adae-0044ae09;0044ae0d-0044ae70
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044ada6-0044adad 0044ae0a-0044ae0c
 */

void FUN_0044ad40(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  CHAR local_38 [4];
  CHAR aCStack_34 [52];
  
  FUN_004c3fa0((byte *)s_load_music_info_005a093c);
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_System_Settings_005a0950);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  DAT_006fb6e4 = FUN_004c3cd0(s_MUSIC_005a0968,s_COUNT_005a0960);
  if ((DAT_006fb6e4 < 1) || (0x1e < DAT_006fb6e4)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__load_music_info___s__d____Inval_005a0994);
  }
  iVar2 = 0;
  if (0 < DAT_006fb6e4) {
    pcVar3 = &DAT_006fb6e8;
    do {
      FUN_005587a3(local_38,&DAT_005a09c8);
      FUN_004c3d10(s_MUSIC_005a09cc,local_38,aCStack_34,0x31);
      iVar4 = -1;
      pcVar5 = aCStack_34;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (iVar4 == -2) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__load_music_info___s__d____No_va_005a09f8);
      }
      _strncpy(pcVar3,aCStack_34,0xd);
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xe;
    } while (iVar2 < DAT_006fb6e4);
  }
  iVar2 = FUN_004c3cd0(s_MUSIC_005a0a40,&DAT_005a0a38);
  DAT_006fb88c = iVar2 + 1;
  if ((int)DAT_006fb88c < 0) {
    DAT_006fb88c = 0;
  }
  if (DAT_006fb6e4 <= (int)DAT_006fb88c) {
    DAT_006fb88c = 0;
  }
  FUN_004c3c70(s_MUSIC_005a0a50,&DAT_005a0a48,DAT_006fb88c);
  return;
}


