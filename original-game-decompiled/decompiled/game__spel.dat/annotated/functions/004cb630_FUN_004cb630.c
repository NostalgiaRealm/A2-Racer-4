
/* ==== FUN_004cb630 @ 004cb630 ==== 
 * signature: int * __cdecl FUN_004cb630(LPCSTR param_1, int * param_2, int * param_3, undefined4 param_4, undefined4 * param_5)
 * body: 004cb630-004cba41
 */

int * __cdecl
FUN_004cb630(LPCSTR param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  FILE *pFVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined4 in_stack_fffffc30;
  undefined4 in_stack_fffffc34;
  undefined4 in_stack_fffffc38;
  undefined4 in_stack_fffffc3c;
  uint in_stack_fffffc40;
  uint in_stack_fffffc44;
  uint in_stack_fffffc48;
  uint in_stack_fffffc4c;
  int local_3a0;
  int local_394;
  undefined2 local_390;
  undefined1 uStack_38e;
  int *local_38c;
  char local_380;
  char local_37f;
  short local_37c;
  short local_37a;
  short local_378;
  short local_376;
  short local_33e;
  char local_300 [768];
  
  puVar11 = param_5;
  puVar13 = (undefined4 *)&stack0xfffffc30;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  FUN_004c8690(in_stack_fffffc30,(byte)in_stack_fffffc34,in_stack_fffffc38,in_stack_fffffc3c,
               in_stack_fffffc40,in_stack_fffffc44,in_stack_fffffc48,in_stack_fffffc4c);
  pFVar3 = (FILE *)rc_fopen(param_1);
  if (pFVar3 != (FILE *)0x0) {
    if (DAT_007409cc != 0) {
      FUN_004cac30((int *)pFVar3,local_300);
    }
    FUN_004c6160((int *)pFVar3,0,0);
    FUN_00558b35(&local_380,0x80,1,(int *)pFVar3);
    FUN_004c3fa0((byte *)s__s__d____header_read__005b5e5c);
    if ((pFVar3->_flag & 0x20) == 0) {
      FUN_004c3fa0((byte *)s__s__d____no_error_header_read__005b5e38);
      if ((local_380 == '\n') && (local_37f == '\x05')) {
        *param_2 = ((int)local_378 - (int)local_37c) + 1;
        *param_3 = ((int)local_376 - (int)local_37a) + 1;
        FUN_004c3fa0((byte *)s_creating_surface__d__d_005b2758);
        local_38c = (int *)FUN_004c4b90(*param_2,*param_3,param_4,param_5);
        FUN_004c3fa0((byte *)s_creation_succesfull_005b5e20);
        iVar8 = (int)local_33e;
        local_3a0 = *param_3;
        FUN_004c4a60(local_38c);
        if (DAT_007409cc == 0) {
          iVar4 = FUN_004c48f0(local_38c);
          if (0 < local_3a0) {
            do {
              iVar10 = 0;
              do {
                uVar5 = FUN_0055a2ba((undefined4 *)pFVar3);
                if (((byte)uVar5 & 0xc0) == 0xc0) {
                  uVar6 = FUN_0055a2ba((undefined4 *)pFVar3);
                  uVar1 = (undefined1)uVar6;
                  puVar11 = (undefined4 *)(iVar4 + iVar10);
                  for (uVar6 = (uVar5 & 0x3f) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *puVar11 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
                    puVar11 = puVar11 + 1;
                  }
                  iVar10 = iVar10 + (uVar5 & 0x3f);
                  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *(undefined1 *)puVar11 = uVar1;
                    puVar11 = (undefined4 *)((int)puVar11 + 1);
                  }
                }
                else {
                  *(byte *)(iVar4 + iVar10) = (byte)uVar5;
                  iVar10 = iVar10 + 1;
                }
              } while (iVar10 < iVar8);
              iVar4 = iVar4 + local_394;
              local_3a0 = local_3a0 + -1;
            } while (local_3a0 != 0);
          }
          FUN_004c4a20(local_38c,iVar4);
        }
        else if (DAT_007409cc == 1) {
          iVar4 = FUN_004c48f0(local_38c);
          if (0 < local_3a0) {
            do {
              iVar10 = 0;
              do {
                uVar5 = FUN_0055a2ba((undefined4 *)pFVar3);
                if (((byte)uVar5 & 0xc0) == 0xc0) {
                  uVar6 = uVar5 & 0x3f;
                  uVar7 = FUN_0055a2ba((undefined4 *)pFVar3);
                  uVar7 = FUN_004c81b0(uVar7 & 0xff,8);
                  if (uVar6 != 0) {
                    uVar2 = (undefined2)uVar7;
                    puVar11 = (undefined4 *)(iVar4 + iVar10 * 2);
                    for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *puVar11 = CONCAT22(uVar2,uVar2);
                      puVar11 = puVar11 + 1;
                    }
                    iVar10 = iVar10 + uVar6;
                    for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
                      *(undefined2 *)puVar11 = uVar2;
                      puVar11 = (undefined4 *)((int)puVar11 + 2);
                    }
                  }
                }
                else {
                  uVar5 = FUN_004c81b0(uVar5 & 0xff,8);
                  *(short *)(iVar4 + iVar10 * 2) = (short)uVar5;
                  iVar10 = iVar10 + 1;
                }
              } while (iVar10 < iVar8);
              iVar4 = iVar4 + local_394;
              local_3a0 = local_3a0 + -1;
            } while (local_3a0 != 0);
          }
          FUN_004c4a20(local_38c,iVar4);
        }
        else if (DAT_007409cc == 2) {
          iVar4 = FUN_004c48f0(local_38c);
          if (0 < local_3a0) {
            do {
              iVar10 = 0;
              do {
                uVar5 = FUN_0055a2ba((undefined4 *)pFVar3);
                if (((byte)uVar5 & 0xc0) == 0xc0) {
                  uVar5 = uVar5 & 0x3f;
                  uVar6 = FUN_0055a2ba((undefined4 *)pFVar3);
                  uVar6 = FUN_004c81b0(uVar6 & 0xff,8);
                  if (uVar5 != 0) {
                    puVar12 = (undefined2 *)(iVar4 + iVar10 * 3);
                    uStack_38e = (undefined1)(uVar6 >> 0x10);
                    iVar10 = iVar10 + uVar5;
                    *puVar12 = (short)uVar6;
                    *(undefined1 *)(puVar12 + 1) = uStack_38e;
                    puVar14 = (undefined1 *)((int)puVar12 + 3);
                    for (iVar9 = uVar5 * 3 + -3; iVar9 != 0; iVar9 = iVar9 + -1) {
                      *puVar14 = *(undefined1 *)puVar12;
                      puVar12 = (undefined2 *)((int)puVar12 + 1);
                      puVar14 = puVar14 + 1;
                    }
                  }
                }
                else {
                  uVar5 = FUN_004c81b0(uVar5 & 0xff,8);
                  local_390 = (undefined2)uVar5;
                  puVar12 = (undefined2 *)(iVar4 + iVar10 * 3);
                  uStack_38e = (undefined1)(uVar5 >> 0x10);
                  iVar10 = iVar10 + 1;
                  *puVar12 = local_390;
                  *(undefined1 *)(puVar12 + 1) = uStack_38e;
                }
              } while (iVar10 < iVar8);
              iVar4 = iVar4 + local_394;
              local_3a0 = local_3a0 + -1;
            } while (local_3a0 != 0);
          }
          FUN_004c4a20(local_38c,iVar4);
        }
      }
      FUN_004c3fa0((byte *)s__s__d____closing_005b5e0c);
      FUN_004c6430(pFVar3);
      FUN_004c8540();
      return local_38c;
    }
    FUN_004c6430(pFVar3);
    return (int *)0x0;
  }
  return (int *)0x0;
}


