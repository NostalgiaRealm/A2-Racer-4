
/* ==== FUN_00419300 @ 00419300 ==== 
 * signature: undefined __stdcall FUN_00419300(void)
 * body: 00419300-0041942e
 */

void FUN_00419300(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  
  pFVar1 = (FILE *)FUN_005589a5(s_GAMEPLAY_TXT_00593a1c,&DAT_00593a18);
  if (pFVar1 != (FILE *)0x0) {
    FUN_00558953((int *)pFVar1,(byte *)s_Track__d_Level__d_00593a2c);
    FUN_00558953((int *)pFVar1,(byte *)s_Player___d_00593a40);
    FUN_00558953((int *)pFVar1,(byte *)s_Finished__d_00593a50);
    FUN_00558953((int *)pFVar1,(byte *)s_Lap_1_time__d_00593a60);
    FUN_00558953((int *)pFVar1,(byte *)s_Lap_2_time__d_00593a70);
    __ftol();
    FUN_00558953((int *)pFVar1,(byte *)s_Average_speed__d_00593a80);
    FUN_00558953((int *)pFVar1,(byte *)s_Euros_found__d_00593a94);
    FUN_00558953((int *)pFVar1,(byte *)s_Eddy_Tommy_James_Kat_Barbara_00593aa8);
    iVar3 = 0;
    do {
      iVar2 = 0;
      if (DAT_005d2ab0 != -1 && -1 < DAT_005d2ab0 + 1) {
        do {
          FUN_00558953((int *)pFVar1,(byte *)s__d___d__00593acc);
          iVar2 = iVar2 + 1;
        } while (iVar2 < DAT_005d2ab0 + 1);
      }
      FUN_00558953((int *)pFVar1,&DAT_00593ad8);
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x50);
    FUN_00558953((int *)pFVar1,(byte *)s___________________________________00593adc);
    FUN_005588fd(pFVar1);
  }
  return;
}


