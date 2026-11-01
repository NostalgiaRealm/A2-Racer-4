
/* ==== FUN_00467a00 @ 00467a00 ==== 
 * signature: undefined __thiscall FUN_00467a00(void * this, byte * param_1, byte * param_2)
 * body: 00467a00-00467ac6;00467aca-00467b41;00467b45-00467b76;00467b7a-00467c2b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00467ac7-00467ac9 00467b42-00467b44 00467b77-00467b79
 */

void __thiscall FUN_00467a00(void *this,byte *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *this_00;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int local_160;
  CHAR local_150 [8];
  CHAR aCStack_148 [8];
  CHAR local_140 [64];
  byte abStack_100 [64];
  char acStack_c0 [64];
  byte abStack_80 [128];
  
  this_00 = FUN_00497960();
  FUN_004489a0(&DAT_006fa558,param_1,param_2);
  iVar4 = FUN_00448c90(&DAT_006fa558,param_2);
  pcVar5 = *(char **)(iVar4 + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  set_ini_filename(pcVar5);
  iVar4 = read_ini_value_setting(s_CONFIG_005a72f8,s_COUNT_005a72f0);
  local_160 = 0;
  if (0 < iVar4) {
    do {
      FUN_005587a3(local_150,&DAT_005a7300);
      read_ini_string_setting(s_CONFIG_005a7304,local_150,local_140,0x3f);
      iVar6 = -1;
      pcVar5 = local_140;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (iVar6 == -2) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s___d__Couldn_t_find_animation_n_005a7334);
      }
      iVar6 = read_ini_value_setting(local_140,s_COUNT_005a7378);
      iVar8 = 0;
      if (0 < iVar6) {
        do {
          FUN_005587a3(aCStack_148,&DAT_005a7380);
          read_ini_string_setting(local_140,aCStack_148,(LPSTR)abStack_80,0x7f);
          iVar7 = -1;
          pbVar9 = abStack_80;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar2 != 0);
          if (iVar7 == -2) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s___d__Couldn_t_find_frame__d_f_005a73ac);
          }
          iVar7 = get_ini_arguments_online(abStack_80,(uint *)0x0);
          if (iVar7 != 2) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s___d__Illegal_number_of_argume_005a7410);
          }
          FUN_004c3f10(0,acStack_c0,0x40);
          FUN_004c3f10(1,(char *)abStack_100,0x40);
          bVar3 = FUN_004683f0(acStack_c0);
          if (!bVar3) {
            FUN_004677b0(this,acStack_c0,(char *)param_1);
          }
          FUN_00467960(abStack_100);
          bVar3 = FUN_004683f0((LPCSTR)abStack_100);
          if (bVar3) {
            FUN_00498340(this_00,(char *)abStack_100);
          }
          else {
            FUN_00467610(this,(char *)abStack_100,(char *)param_1);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar6);
      }
      local_160 = local_160 + 1;
    } while (local_160 < iVar4);
  }
  return;
}


