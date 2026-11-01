
/* ==== FUN_004c00b0 @ 004c00b0 ==== 
 * signature: int * __cdecl FUN_004c00b0(LPCSTR param_1, uint * param_2, uint * param_3, int * param_4, undefined4 * param_5)
 * body: 004c00b0-004c016e;004c0172-004c01a2;004c01a6-004c0440
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c016f-004c0171 004c01a3-004c01a5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl
FUN_004c00b0(LPCSTR param_1,uint *param_2,uint *param_3,int *param_4,undefined4 *param_5)

{
  FILE *pFVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  char local_29;
  char cStack_28;
  byte bStack_27;
  char cStack_26;
  char local_25;
  uint uStack_24;
  char acStack_20 [4];
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  char local_c [4];
  int iStack_8;
  undefined1 *puStack_4;
  
  pcVar13 = s_Rshift___d__Rpos___d_005b2850;
  uVar14 = _DAT_007409ac;
  uVar15 = DAT_007409bc;
  FUN_004c3fa0((byte *)s_Rshift___d__Rpos___d_005b2850);
  pcVar11 = s_Gshift___d__Gpos___d_005b2838;
  uVar12 = _DAT_007409b0;
  uVar5 = DAT_007409c0;
  FUN_004c3fa0((byte *)s_Gshift___d__Gpos___d_005b2838);
  uVar16 = _DAT_007409b4;
  uVar10 = DAT_007409c4;
  FUN_004c3fa0((byte *)s_Bshift___d__Bpos___d_005b2820);
  puVar7 = param_5;
  puVar8 = (undefined4 *)&stack0xffffffa4;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_004c8690(uVar16,(byte)uVar10,pcVar11,uVar12,uVar5,(uint)pcVar13,uVar14,uVar15);
  pFVar1 = (FILE *)FUN_004c62c0(param_1);
  if (pFVar1 == (FILE *)0x0) {
    return param_4;
  }
  FUN_004c3fa0((byte *)s_Reading_TGA_file_005b280c);
  FUN_00558b35(&local_25,1,1,(int *)pFVar1);
  FUN_00558b35(&local_29,1,1,(int *)pFVar1);
  if (local_29 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____TGA_cannot_be_colormapp_005b27d0);
  }
  FUN_00558b35(local_c,1,1,(int *)pFVar1);
  if (local_c[0] == '\x02') {
    iVar4 = 5;
    do {
      FUN_00558b35(&cStack_28,1,1,(int *)pFVar1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    do {
      FUN_00558b35(&cStack_28,1,1,(int *)pFVar1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_00558b35((char *)&uStack_1c,2,1,(int *)pFVar1);
    FUN_00558b35((char *)&uStack_24,2,1,(int *)pFVar1);
    FUN_00558b35(acStack_20,1,1,(int *)pFVar1);
    FUN_00558b35((char *)&bStack_27,1,1,(int *)pFVar1);
    if ((acStack_20[0] != ' ') && (acStack_20[0] != '\x18')) {
      FUN_004c3fa0((byte *)s_ERROR__load_tga___not_a_32_or_24_005b2770);
      return (int *)0x0;
    }
    *param_2 = uStack_1c & 0xffff;
    *param_3 = uStack_24 & 0xffff;
    FUN_004c3fa0((byte *)s_creating_surface__d__d_005b2758);
    piVar2 = (int *)FUN_004c4b90(*param_2,*param_3,param_4,param_5);
    if ((bStack_27 & 0x20) == 0x20) {
      param_2 = (uint *)0x1;
      param_1 = (LPCSTR)0x0;
    }
    else {
      param_2 = (uint *)0xffffffff;
      param_1 = (LPCSTR)((uStack_24 & 0xffff) - 1);
    }
    FUN_004c4a60(piVar2);
    puVar3 = (undefined1 *)FUN_004c48f0(piVar2);
    param_3 = (uint *)0x0;
    uVar5 = uStack_1c;
    puStack_4 = puVar3;
    if ((short)uStack_24 != 0) {
      do {
        iVar4 = 0;
        puVar9 = (undefined2 *)(puVar3 + iStack_8 * (int)param_1);
        puVar6 = puVar3;
        if ((short)uVar5 != 0) {
          do {
            FUN_00558b35((char *)&uStack_18,1,1,(int *)pFVar1);
            FUN_00558b35((char *)&uStack_14,1,1,(int *)pFVar1);
            FUN_00558b35((char *)&uStack_10,1,1,(int *)pFVar1);
            if (acStack_20[0] == ' ') {
              FUN_00558b35(&cStack_26,1,1,(int *)pFVar1);
            }
            if (DAT_005b37a0 == 8) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            if (DAT_005b37a0 == 0x10) {
              if ((acStack_20[0] == ' ') && ((*(byte *)(param_5 + 1) & 1) != 0)) {
                uVar16 = 0x20;
                uVar5 = ((uint)CONCAT11(cStack_26,(undefined1)uStack_10) << 8 | uStack_14 & 0xff) <<
                        8 | uStack_18 & 0xff;
              }
              else {
                uVar16 = 0x18;
                uVar5 = (uint)CONCAT11((undefined1)uStack_18,(undefined1)uStack_14) << 8 |
                        uStack_10 & 0xff;
              }
              uVar5 = FUN_004c81b0(uVar5,uVar16);
              *puVar9 = (short)uVar5;
              puVar9 = puVar9 + 1;
            }
            iVar4 = iVar4 + 1;
            uVar5 = uStack_1c;
            puVar3 = puStack_4;
          } while (iVar4 < (int)(uStack_1c & 0xffff));
        }
        param_1 = param_1 + (int)param_2;
        param_3 = (uint *)((int)param_3 + 1);
      } while ((int)param_3 < (int)(uStack_24 & 0xffff));
    }
    FUN_004c4a20(piVar2,puVar3);
    FUN_004c6430(pFVar1);
    FUN_004c8540();
    return piVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____No_RGB_uncompressed_TGA_005b27a8);
}


