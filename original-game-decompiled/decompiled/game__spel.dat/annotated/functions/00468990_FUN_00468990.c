
/* ==== FUN_00468990 @ 00468990 ==== 
 * signature: undefined __cdecl FUN_00468990(byte * param_1)
 * body: 00468990-00468a5a;00468a5e-00468b0b;00468b0f-00468b57;00468b5b-00468c08
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00468a5b-00468a5d 00468b0c-00468b0e 00468b58-00468b5a
 */

void __cdecl FUN_00468990(byte *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 *this;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int local_150;
  int iStack_148;
  CHAR local_140 [64];
  uint auStack_100 [16];
  CHAR local_c0 [64];
  byte abStack_80 [64];
  uint auStack_40 [16];
  
  this = FUN_00497960();
  iVar3 = FUN_00448c90(&DAT_006fa558,param_1);
  pcVar4 = *(char **)(iVar3 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  set_ini_filename(pcVar4);
  iVar3 = read_ini_value_setting(s_CONFIG_005a7638,s_COUNT_005a7630);
  local_150 = 0;
  if (0 < iVar3) {
    do {
      wsprintfA(local_c0,&DAT_005a7640,local_150);
      read_ini_string_setting(s_CONFIG_005a7644,local_c0,local_140,0x40);
      iVar6 = -1;
      pcVar4 = local_140;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (iVar6 == -2) {
        FUN_00448c90(&DAT_006fa558,param_1);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s___d__Couldn_t_find_animation_n_005a7670);
      }
      iVar6 = read_ini_value_setting(local_140,s_COUNT_005a76b4);
      if (iVar6 != 0) {
        iStack_148 = FUN_004b6c00(&DAT_00712130,local_140,iVar6);
      }
      iVar8 = 0;
      if (0 < iVar6) {
        do {
          wsprintfA(local_c0,&DAT_005a76bc,iVar8);
          read_ini_string_setting(local_140,local_c0,(LPSTR)abStack_80,0x40);
          iVar7 = -1;
          pbVar9 = abStack_80;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar2 != 0);
          if (iVar7 == -2) {
            FUN_00448c90(&DAT_006fa558,param_1);
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s___d__Couldn_t_find_frame__d_f_005a76e4);
          }
          iVar7 = get_ini_arguments_online(abStack_80,(uint *)0x0);
          if (iVar7 != 2) {
            FUN_00448c90(&DAT_006fa558,param_1);
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s___d__Illegal_number_of_argume_005a7744);
          }
          FUN_004c3f10(0,(char *)auStack_40,0x40);
          FUN_004c3f10(1,(char *)auStack_100,0x40);
          FUN_00448c90(&DAT_006fa558,param_1);
          FUN_004c3fa0((byte *)s_File__s__Animation__s__Adding_fr_005a778c);
          piVar5 = (int *)FUN_00498870(this,(byte *)auStack_100);
          FUN_004b6ff0(&DAT_00712130,iStack_148,auStack_40,auStack_100,piVar5);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar6);
      }
      local_150 = local_150 + 1;
    } while (local_150 < iVar3);
  }
  return;
}


