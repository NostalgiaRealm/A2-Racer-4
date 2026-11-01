
/* ==== FUN_00468c10 @ 00468c10 ==== 
 * signature: undefined __cdecl FUN_00468c10(LPCSTR param_1, byte * param_2)
 * body: 00468c10-00468c73;00468c77-00468c99
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00468c74-00468c76
 */

void __cdecl FUN_00468c10(LPCSTR param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  byte local_40 [64];
  
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_System_Settings_005a77d0);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  set_ini_filename(pcVar3);
  read_ini_string_setting(s_3D_Anims_005a77e0,param_1,(LPSTR)local_40,0x3f);
  iVar2 = -1;
  pbVar4 = local_40;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  if (iVar2 == -2) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Couldn_t_find_filename_f_005a7810);
  }
  FUN_004489a0(&DAT_006fa558,local_40,param_2);
  FUN_00468990(param_2);
  return;
}


