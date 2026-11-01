
/* ==== FUN_004aa0c0 @ 004aa0c0 ==== 
 * signature: undefined __stdcall FUN_004aa0c0(void)
 * body: 004aa0c0-004aa1d7;004aa1db-004aa38a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004aa1d8-004aa1da
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aa0c0(void)

{
  float *pfVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ushort in_FPUControlWord;
  float10 fVar9;
  undefined4 local_f4 [16];
  float local_b4 [16];
  undefined4 local_74 [16];
  float local_34 [3];
  undefined4 local_28 [3];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  float *local_c;
  int *local_8;
  
  FUN_004a6800(0x7128b0);
  if ((DAT_00715e98 & 1) == 0) {
    DAT_00715e98 = DAT_00715e98 | 1;
    fVar9 = FUN_004a6800(0x7128b0);
  }
  else {
    fVar9 = (float10)_DAT_00715b20;
  }
  if (DAT_00715eac < 0x32) {
    DAT_00715eac = DAT_00715eac + 1;
  }
  local_8 = (int *)(DAT_00715eac + -1);
  _DAT_00715b20 = (float)((float10)(int)local_8 * fVar9);
  fVar9 = FUN_004a6800(0x7128b0);
  _DAT_00715b20 = (float)((fVar9 + (float10)_DAT_00715b20) / (float10)DAT_00715eac);
  local_8 = (int *)(uint)in_FPUControlWord;
  local_8 = (int *)((uint)local_8 & 0xfcff | 0x100);
  FUN_004a45d0(&DAT_00715f58,_DAT_005afa48 * _DAT_00715b20);
  local_8 = &DAT_007128cc;
  do {
    piVar8 = local_8;
    if (local_8[-1] != 0) {
      iVar5 = *local_8;
      iVar6 = iVar5 * 0xf0;
      if (*(int *)(iVar6 + 0x5c + DAT_00715e50) != 0) {
        local_10 = iVar5;
        if ((iVar5 < 0) || (DAT_00715e54 <= iVar5)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
        }
        if ((((*(char *)(DAT_00715e60 + iVar5) != '\0') &&
             (*(int *)(iVar6 + 0x18 + DAT_00715e50) == 1)) &&
            (iVar7 = *(int *)(iVar6 + 0x10 + DAT_00715e50), iVar7 != 0)) &&
           (cVar2 = FUN_004a1f10(iVar7), cVar2 != '\0')) {
          if ((*(byte *)(iVar6 + 0x1c + DAT_00715e50) & 1) != 0) {
            FUN_004a7020(iVar5);
          }
          iVar7 = DAT_0073b0d0 + *(int *)(iVar6 + 0x24 + DAT_00715e50) * 0xa9;
          puVar3 = (undefined4 *)FUN_004a1e20(*(void **)(iVar6 + 0x10 + DAT_00715e50),local_b4);
          puVar4 = (undefined4 *)(iVar7 + 0x10);
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          iVar5 = *(int *)(iVar6 + 0x24 + DAT_00715e50);
          local_1c = *(undefined4 *)(DAT_0073b0d0 + iVar5 + 0x40 + iVar5 * 0xa8);
          iVar5 = DAT_0073b0d0 + iVar5 + iVar5 * 0xa8;
          local_18 = *(undefined4 *)(iVar5 + 0x44);
          local_14 = *(undefined4 *)(iVar5 + 0x48);
          *(undefined4 *)(iVar5 + 0x50) = local_1c;
          *(undefined4 *)(iVar5 + 0x54) = local_18;
          *(undefined4 *)(iVar5 + 0x58) = local_14;
          iVar5 = iVar6 + DAT_00715e50;
          puVar3 = (undefined4 *)FUN_004a1ea0(*(void **)(iVar6 + 0x10 + DAT_00715e50),local_28);
          *(undefined4 *)(iVar5 + 0xbc) = *puVar3;
          *(undefined4 *)(iVar5 + 0xc0) = puVar3[1];
          *(undefined4 *)(iVar5 + 0xc4) = puVar3[2];
          local_c = (float *)(iVar6 + 0xbc + DAT_00715e50);
          puVar3 = (undefined4 *)
                   FUN_004b4310(local_f4,(undefined4 *)
                                         (DAT_0073b0d0 +
                                          *(int *)(iVar6 + 0x24 + DAT_00715e50) * 0xa9 + 0x10));
          pfVar1 = local_c;
          puVar4 = local_74;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar4 = (undefined4 *)FUN_004b42a0(local_34,pfVar1,(int)local_74);
          iVar5 = local_10;
          puVar3 = (undefined4 *)(iVar6 + 0xbc + DAT_00715e50);
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          puVar3[2] = puVar4[2];
          FUN_004a6c90(local_10);
          piVar8 = local_8;
          if ((*(byte *)(iVar6 + 0x1c + DAT_00715e50) & 1) != 0) {
            FUN_004a6fa0(iVar5);
            piVar8 = local_8;
          }
        }
      }
    }
    local_8 = piVar8 + 2;
    if (0x714e4b < (int)local_8) {
      return;
    }
  } while( true );
}


