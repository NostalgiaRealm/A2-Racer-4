
/* ==== FUN_004cae20 @ 004cae20 ==== 
 * signature: undefined4 __cdecl FUN_004cae20(int param_1, LPCSTR param_2, byte param_3)
 * body: 004cae20-004caf43;004caf4d-004cb224
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004caf44-004caf4c
 */

undefined4 __cdecl FUN_004cae20(int param_1,LPCSTR param_2,byte param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  FILE *pFVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  int iStack_39c;
  int local_390;
  undefined2 uStack_38c;
  undefined1 uStack_38a;
  char local_380;
  char local_37f;
  short local_37a;
  short local_376;
  short local_33e;
  char local_300 [768];
  
  pFVar3 = (FILE *)FUN_004c62c0(param_2);
  if (pFVar3 == (FILE *)0x0) {
    return 1000;
  }
  if ((param_3 & 2) != 0) {
    FUN_004cac30((int *)pFVar3,local_300);
  }
  FUN_004c6160((int *)pFVar3,0,0);
  FUN_00558b35(&local_380,0x80,1,(int *)pFVar3);
  if ((pFVar3->_flag & 0x20) != 0) {
    FUN_005588fd(pFVar3);
    return 0x3e9;
  }
  if ((((param_3 & 1) != 0) && (local_380 == '\n')) && (local_37f == '\x05')) {
    iStack_39c = ((int)local_376 - (int)local_37a) + 1;
    if (DAT_005b379c < iStack_39c) {
      iStack_39c = DAT_005b379c;
    }
    FUN_004c3fa0((byte *)s_bpl__d__width__d_005b5df8);
    iVar4 = (int)local_33e;
    if (DAT_005b379c <= iStack_39c) {
      iStack_39c = DAT_005b379c;
    }
    if (param_1 == 0) {
      local_390 = DAT_0074082c;
      piVar5 = DAT_007408ac;
    }
    else if (param_1 == 1) {
      local_390 = DAT_00740898;
      piVar5 = DAT_007408b0;
    }
    else {
      if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____unidentified_focus_erro_005b4230);
      }
      local_390 = DAT_007408a8;
      piVar5 = DAT_00740890;
    }
    FUN_004c4a60(piVar5);
    if (DAT_007409cc == 0) {
      iVar6 = FUN_004c4810(param_1);
      if (0 < iStack_39c) {
        do {
          iVar11 = 0;
          do {
            uVar7 = FUN_0055a2ba((undefined4 *)pFVar3);
            if (((byte)uVar7 & 0xc0) == 0xc0) {
              uVar8 = FUN_0055a2ba((undefined4 *)pFVar3);
              uVar1 = (undefined1)uVar8;
              puVar14 = (undefined4 *)(iVar6 + iVar11);
              for (uVar8 = (uVar7 & 0x3f) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *puVar14 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
                puVar14 = puVar14 + 1;
              }
              iVar11 = iVar11 + (uVar7 & 0x3f);
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined1 *)puVar14 = uVar1;
                puVar14 = (undefined4 *)((int)puVar14 + 1);
              }
            }
            else {
              *(byte *)(iVar6 + iVar11) = (byte)uVar7;
              iVar11 = iVar11 + 1;
            }
          } while (iVar11 < iVar4);
          iVar6 = iVar6 + local_390;
          iStack_39c = iStack_39c + -1;
        } while (iStack_39c != 0);
      }
    }
    else {
      if (DAT_007409cc != 1) {
        if (DAT_007409cc == 2) {
          iVar6 = FUN_004c4810(param_1);
          if (0 < iStack_39c) {
            do {
              iVar11 = 0;
              do {
                uVar7 = FUN_0055a2ba((undefined4 *)pFVar3);
                if (((byte)uVar7 & 0xc0) == 0xc0) {
                  uVar7 = uVar7 & 0x3f;
                  uVar8 = FUN_0055a2ba((undefined4 *)pFVar3);
                  uVar8 = FUN_004c81b0(uVar8 & 0xff,8);
                  if (uVar7 != 0) {
                    uStack_38c = (undefined2)uVar8;
                    puVar12 = (undefined2 *)(iVar6 + iVar11 * 3);
                    uStack_38a = (undefined1)(uVar8 >> 0x10);
                    iVar11 = iVar11 + uVar7;
                    *puVar12 = uStack_38c;
                    *(undefined1 *)(puVar12 + 1) = uStack_38a;
                    puVar13 = (undefined1 *)((int)puVar12 + 3);
                    for (iVar10 = uVar7 * 3 + -3; iVar10 != 0; iVar10 = iVar10 + -1) {
                      *puVar13 = *(undefined1 *)puVar12;
                      puVar12 = (undefined2 *)((int)puVar12 + 1);
                      puVar13 = puVar13 + 1;
                    }
                  }
                }
                else {
                  uVar7 = FUN_004c81b0(uVar7 & 0xff,8);
                  uStack_38c = (undefined2)uVar7;
                  puVar12 = (undefined2 *)(iVar6 + iVar11 * 3);
                  uStack_38a = (undefined1)(uVar7 >> 0x10);
                  iVar11 = iVar11 + 1;
                  *puVar12 = uStack_38c;
                  *(undefined1 *)(puVar12 + 1) = uStack_38a;
                }
              } while (iVar11 < iVar4);
              iVar6 = iVar6 + local_390;
              iStack_39c = iStack_39c + -1;
            } while (iStack_39c != 0);
          }
          FUN_004c4980(param_1,iVar6);
        }
        goto LAB_004cb1f2;
      }
      iVar6 = FUN_004c4810(param_1);
      if (0 < iStack_39c) {
        do {
          iVar11 = 0;
          do {
            uVar7 = FUN_0055a2ba((undefined4 *)pFVar3);
            if (((byte)uVar7 & 0xc0) == 0xc0) {
              uVar8 = uVar7 & 0x3f;
              uVar9 = FUN_0055a2ba((undefined4 *)pFVar3);
              uVar9 = FUN_004c81b0(uVar9 & 0xff,8);
              if (uVar8 != 0) {
                uVar2 = (undefined2)uVar9;
                puVar14 = (undefined4 *)(iVar6 + iVar11 * 2);
                for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *puVar14 = CONCAT22(uVar2,uVar2);
                  puVar14 = puVar14 + 1;
                }
                iVar11 = iVar11 + uVar8;
                for (uVar7 = (uint)((uVar7 & 1) != 0); uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined2 *)puVar14 = uVar2;
                  puVar14 = (undefined4 *)((int)puVar14 + 2);
                }
              }
            }
            else {
              uVar7 = FUN_004c81b0(uVar7 & 0xff,8);
              *(short *)(iVar6 + iVar11 * 2) = (short)uVar7;
              iVar11 = iVar11 + 1;
            }
          } while (iVar11 < iVar4);
          iVar6 = iVar6 + local_390;
          iStack_39c = iStack_39c + -1;
        } while (iStack_39c != 0);
      }
    }
    FUN_004c4980(param_1,iVar6);
  }
LAB_004cb1f2:
  if ((param_3 & 6) == 6) {
    FUN_004c9e70(DAT_007409f0,0,0x100);
  }
  FUN_004c6430(pFVar3);
  return 0;
}


