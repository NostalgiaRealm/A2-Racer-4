
/* ==== FUN_00426a90 @ 00426a90 ==== 
 * signature: undefined __fastcall FUN_00426a90(int * param_1)
 * body: 00426a90-00426b3d;00426b41-00426b77;00426b7b-00426b83
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00426b3e-00426b40 00426b78-00426b7a
 */

void __fastcall FUN_00426a90(int *param_1)

{
  int iVar1;
  char *pcVar2;
  
  FUN_004489a0(&DAT_006fa558,(byte *)s_DAMAGE_INI_00595f54,(byte *)s_Car_Damage_Settings_00595f40);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Damage_Settings_00595f60);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  iVar1 = FUN_004c3cd0(PTR_s_Damage_Limits_00595b80,PTR_PTR_00595b84);
  *param_1 = iVar1;
  iVar1 = FUN_004c3cd0(PTR_s_Damage_Limits_00595b80,PTR_DAT_00595b88);
  param_1[1] = iVar1;
  iVar1 = FUN_004c3cd0(PTR_s_Damage_Levels_00595b8c,PTR_s_clouds_00595b90);
  param_1[2] = iVar1;
  iVar1 = FUN_004c3cd0(PTR_s_Damage_Levels_00595b8c,PTR_s_wheels_00595b94);
  param_1[3] = iVar1;
  if ((-1 < *param_1) && (*param_1 <= param_1[1])) {
    if ((-1 < param_1[2]) && (((param_1[2] < 0x44d && (-1 < param_1[3])) && (param_1[3] < 0x44d))))
    {
      FUN_00427340((int)param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Damage_level_for_clouds_00596000);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____Limit_values_invalid__M_00595f98);
}


