
/* ==== FUN_00467fd0 @ 00467fd0 ==== 
 * signature: undefined __fastcall FUN_00467fd0(void * param_1)
 * body: 00467fd0-00468025
 */

void __fastcall FUN_00467fd0(void *param_1)

{
  int iVar1;
  char *pcVar2;
  byte local_40 [64];
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_System_Settings_005a7554);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  read_ini_string_setting(s_3D_Anims_005a756c,s_general_005a7564,(LPSTR)local_40,0x3f);
  FUN_00467a00(param_1,local_40,(byte *)s_General_Animations_005a7578);
  return;
}


