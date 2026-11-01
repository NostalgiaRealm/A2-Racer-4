
/* ==== FUN_00467f60 @ 00467f60 ==== 
 * signature: undefined __fastcall FUN_00467f60(void * param_1)
 * body: 00467f60-00467fca
 */

void __fastcall FUN_00467f60(void *param_1)

{
  int iVar1;
  char *pcVar2;
  CHAR local_50 [16];
  byte local_40 [64];
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_System_Settings_005a7518);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  FUN_005587a3(local_50,(byte *)s_LEAGUE_d_005a7528);
  read_ini_string_setting(s_3D_Anims_005a7534,local_50,(LPSTR)local_40,0x3f);
  FUN_00467a00(param_1,local_40,(byte *)s_League_Animations_005a7540);
  return;
}


