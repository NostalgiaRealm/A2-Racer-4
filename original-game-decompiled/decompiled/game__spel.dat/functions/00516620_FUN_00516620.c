
/* ==== FUN_00516620 @ 00516620 ==== 
 * signature: undefined __stdcall FUN_00516620(void)
 * body: 00516620-0051685a
 */

void FUN_00516620(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  if (2 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_updatevertices__delete_interi_005bab2c);
  }
  iVar5 = DAT_0074c610;
  piVar6 = DAT_0074c630;
  if (DAT_0074c460 == 0) {
    for (; (iVar5 != 0 && ((*(uint *)(iVar5 + 0x50) & 0x400) != 0)); iVar5 = *(int *)(iVar5 + 0x30))
    {
      iVar1 = *(int *)(iVar5 + 0x34);
      if (iVar1 != 0) {
        piVar6 = (int *)(iVar1 + 4);
        iVar1 = *(int *)(iVar1 + 4);
        while (iVar1 != 0) {
          piVar6 = piVar6 + 1;
          if ((*(uint *)(iVar1 + 0x14) & 0x18000000) == 0) {
            *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 0x8000000;
            FUN_00514020(&DAT_0074c6f0,iVar1);
            if (1 < DAT_0074be68) {
              FUN_005164c0(*(uint *)(iVar1 + 8));
              FUN_00558953(DAT_0074c5ec,(byte *)s_qh_updatevertices__delete_vertex_005baaf8);
            }
          }
          iVar1 = *piVar6;
        }
      }
    }
  }
  else {
    for (; (iVar1 = DAT_0074c60c, iVar5 = DAT_0074c610, piVar6 != (int *)0x0 && (*piVar6 != 0));
        piVar6 = (int *)*piVar6) {
      iVar5 = piVar6[3];
      if (iVar5 != 0) {
        iVar1 = *(int *)(iVar5 + 4);
        piVar2 = (int *)(iVar5 + 8);
        while (iVar1 != 0) {
          if ((*(uint *)(iVar1 + 0x50) & 0x400) != 0) {
            piVar2[-1] = 0;
          }
          iVar1 = *piVar2;
          piVar2 = piVar2 + 1;
        }
      }
      FUN_005141f0((int *)piVar6[3]);
    }
    for (; (DAT_0074c610 = iVar5, iVar1 != 0 && (*(int *)(iVar1 + 0x30) != 0));
        iVar1 = *(int *)(iVar1 + 0x30)) {
      iVar5 = *(int *)(iVar1 + 0x34);
      if (iVar5 != 0) {
        piVar6 = (int *)(iVar5 + 4);
        iVar5 = *(int *)(iVar5 + 4);
        while (iVar5 != 0) {
          piVar6 = piVar6 + 1;
          FUN_00514020((int *)(iVar5 + 0xc),iVar1);
          iVar5 = *piVar6;
        }
      }
      iVar5 = DAT_0074c610;
    }
    if (iVar5 != 0) {
      while ((*(uint *)(iVar5 + 0x50) & 0x400) != 0) {
        iVar1 = *(int *)(iVar5 + 0x34);
        if (iVar1 != 0) {
          piVar6 = (int *)(iVar1 + 4);
          iVar1 = *(int *)(iVar1 + 4);
          while (iVar1 != 0) {
            piVar6 = piVar6 + 1;
            if ((*(uint *)(iVar1 + 0x14) & 0x18000000) == 0) {
              piVar2 = *(int **)(iVar1 + 0xc);
              if (piVar2 != (int *)0x0) {
                piVar4 = piVar2 + 1;
                iVar3 = piVar2[1];
                while (iVar3 != 0) {
                  piVar4 = piVar4 + 1;
                  if ((*(byte *)(iVar3 + 0x51) & 4) == 0) {
                    if (iVar3 != 0) {
                      FUN_00514280(piVar2,iVar5);
                      goto LAB_0051678f;
                    }
                    break;
                  }
                  iVar3 = *piVar4;
                }
              }
              *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 0x8000000;
              FUN_00514020(&DAT_0074c6f0,iVar1);
              if (1 < DAT_0074be68) {
                FUN_005164c0(*(uint *)(iVar1 + 8));
                FUN_00558953(DAT_0074c5ec,(byte *)s_qh_updatevertices__delete_vertex_005baaf8);
              }
            }
LAB_0051678f:
            iVar1 = *piVar6;
          }
        }
        iVar5 = *(int *)(iVar5 + 0x30);
        if (iVar5 == 0) {
          return;
        }
      }
    }
  }
  return;
}


