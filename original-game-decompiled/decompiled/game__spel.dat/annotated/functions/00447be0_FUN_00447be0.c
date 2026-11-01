
/* ==== FUN_00447be0 @ 00447be0 ==== 
 * signature: undefined __stdcall FUN_00447be0(void)
 * body: 00447be0-00447ce1
 */

void FUN_00447be0(void)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  CHAR local_308 [256];
  byte local_208 [260];
  byte local_104 [260];
  
  iVar2 = FUN_00458b90(0x20);
  FUN_004cd370(&DAT_006fd14c + iVar2 * 0x100);
  FUN_004cd3b0(s__DATA_0059e874);
  FUN_004c3fa0((byte *)s_init_fileio_0059e87c);
  pbVar3 = FUN_004cd4a0(local_208,(byte *)&DAT_0059db6d);
  pbVar4 = FUN_004cd4a0(local_104,(byte *)&DAT_0059db5d);
  rc_init((LPCSTR)pbVar4,(LPCSTR)pbVar3);
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059e88c);
  pcVar5 = *(char **)(iVar2 + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  set_ini_filename(pcVar5);
  iVar2 = read_ini_value_setting(s_CDCHECK_0059e8a4,&DAT_0059e89c);
  read_ini_string_setting(s_CDCHECK_0059e8b4,&DAT_0059e8ac,local_308,199);
  if (iVar2 != 0) {
    iVar6 = -1;
    pcVar5 = local_308;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (iVar6 != -2) {
      FUN_004c3fa0((byte *)s__Checking_cdrom__0059e8bc);
      FUN_00447a80(iVar2);
      return;
    }
  }
  FUN_004c3fa0((byte *)s__Not_checking_cdrom__0059e8d0);
  return;
}


