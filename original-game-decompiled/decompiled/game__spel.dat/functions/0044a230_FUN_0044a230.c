
/* ==== FUN_0044a230 @ 0044a230 ==== 
 * signature: undefined __stdcall FUN_0044a230(void)
 * body: 0044a230-0044a28a;0044a28e-0044a2ef;0044a2f3-0044a31b;0044a31f-0044a38d;0044a391-0044a3b9;0044a3bd-0044a426;0044a42a-0044a452;0044a456-0044a492
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044a28b-0044a28d 0044a2f0-0044a2f2 0044a31c-0044a31e 0044a38e-0044a390 0044a3ba-0044a3bc 0044a427-0044a429 0044a453-0044a455
 */

void FUN_0044a230(void)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  CHAR local_e8 [32];
  byte abStack_c8 [200];
  
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059ff7c);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  iVar2 = FUN_004c3cd0(s_RACERS_0059ff94,s_COUNT_0059ff8c);
  if (iVar2 != 6) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__load_racer_info___s__d____Inval_0059ffc0);
  }
  iVar2 = 0;
  puVar9 = &DAT_005973c8;
  do {
    FUN_005587a3(local_e8,&DAT_0059fff8);
    FUN_004c3d10(s_RACERS_0059fffc,local_e8,(LPSTR)abStack_c8,199);
    iVar6 = -1;
    pbVar10 = abStack_c8;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar1 != 0);
    if (iVar6 == -2) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__load_racer_info___s__d____No_va_005a0028);
    }
    iVar6 = FUN_004c3d60(abStack_c8,(uint *)0x0);
    if (iVar6 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__load_racer_info___s__d____Inval_005a008c);
    }
    uVar4 = FUN_004c3ec0(0);
    puVar9[-2] = uVar4;
    uVar4 = FUN_004c3ec0(1);
    *puVar9 = uVar4;
    uVar4 = FUN_004c3ec0(2);
    puVar9[-1] = uVar4;
    FUN_005587a3(local_e8,(byte *)s_DAM_d_005a00d0);
    FUN_004c3d10(s_RACERS_005a00d8,local_e8,(LPSTR)abStack_c8,199);
    iVar6 = -1;
    pbVar10 = abStack_c8;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar1 != 0);
    if (iVar6 == -2) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__load_racer_info___s__d____No_va_005a0104);
    }
    iVar6 = FUN_004c3d60(abStack_c8,(uint *)0x0);
    if (iVar6 != 8) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__load_racer_info___s__d____Inval_005a0168);
    }
    iVar6 = 0;
    puVar7 = puVar9 + 0xc;
    do {
      uVar4 = FUN_004c3ec0(iVar6);
      *puVar7 = uVar4;
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar6 < 8);
    FUN_005587a3(local_e8,(byte *)s_VAL_d_005a01ac);
    FUN_004c3d10(s_RACERS_005a01b4,local_e8,(LPSTR)abStack_c8,199);
    iVar6 = -1;
    pbVar10 = abStack_c8;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar1 != 0);
    if (iVar6 == -2) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__load_racer_info___s__d____No_va_005a01e0);
    }
    iVar6 = FUN_004c3d60(abStack_c8,(uint *)0x0);
    if (iVar6 != 8) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__load_racer_info___s__d____Inval_005a0244);
    }
    iVar6 = 0;
    pfVar8 = (float *)(puVar9 + 4);
    do {
      iVar5 = FUN_004c3ec0(iVar6);
      iVar6 = iVar6 + 1;
      *pfVar8 = (float)iVar5;
      pfVar8 = pfVar8 + 1;
    } while (iVar6 < 8);
    iVar2 = iVar2 + 1;
    puVar9 = puVar9 + 0x16;
    if (5 < iVar2) {
      return;
    }
  } while( true );
}


