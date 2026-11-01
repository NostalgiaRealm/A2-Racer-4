
/* ==== FUN_0055c7b0 @ 0055c7b0 ==== 
 * signature: undefined __cdecl FUN_0055c7b0(char param_1, int * param_2, byte * param_3, uint * param_4, int param_5)
 * body: 0055c7b0-0055cb9e
 */

void __cdecl FUN_0055c7b0(char param_1,int *param_2,byte *param_3,uint *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  
  if (param_1 < '[') {
    if (param_1 != 'Z') {
      if ('M' < param_1) {
        if (param_1 == 'S') {
          uVar5 = 2;
          iVar2 = *param_2;
        }
        else {
          if (param_1 == 'U') {
            iVar3 = param_2[6];
          }
          else {
            if (param_1 != 'W') {
              if (param_1 == 'X') {
                DAT_007503c8 = 0;
                pbVar4 = *(byte **)(param_5 + 0xa8);
                goto LAB_0055cb36;
              }
              if (param_1 != 'Y') {
                return;
              }
              uVar5 = 4;
              iVar2 = (param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100;
              goto LAB_0055c8ec;
            }
            if (param_2[6] == 0) {
              iVar3 = 6;
            }
            else {
              iVar3 = param_2[6] + -1;
            }
          }
          iVar1 = param_2[7];
          if (iVar1 < iVar3) {
            iVar2 = 0;
          }
          else {
            iVar2 = iVar1 / 7;
            if (iVar3 <= iVar1 % 7) {
              iVar2 = iVar2 + 1;
            }
          }
          uVar5 = 2;
        }
        goto LAB_0055c8ec;
      }
      if (param_1 == 'M') {
        uVar5 = 2;
        iVar2 = param_2[1];
        goto LAB_0055c8ec;
      }
      if (param_1 == '%') {
        **(undefined1 **)param_3 = 0x25;
        *(int *)param_3 = *(int *)param_3 + 1;
        *param_4 = *param_4 - 1;
        return;
      }
      if (param_1 == 'A') {
        pcVar6 = *(char **)(param_5 + 0x1c + param_2[6] * 4);
        goto LAB_0055cb92;
      }
      if (param_1 == 'B') {
        pcVar6 = *(char **)(param_5 + 0x68 + param_2[4] * 4);
        goto LAB_0055cb92;
      }
      if (param_1 == 'H') {
        uVar5 = 2;
        iVar2 = param_2[2];
        goto LAB_0055c8ec;
      }
      if (param_1 != 'I') {
        return;
      }
      iVar2 = param_2[2] % 0xc;
      if (iVar2 == 0) {
        iVar2 = 0xc;
      }
LAB_0055c819:
      uVar5 = 2;
LAB_0055c8ec:
      DAT_007503cc = DAT_007503c8;
      FUN_0055cbc6(iVar2,uVar5,(int *)param_3,param_4);
      return;
    }
  }
  else {
    if (param_1 < 'n') {
      if (param_1 == 'm') {
        iVar2 = param_2[4];
        uVar5 = 2;
      }
      else {
        if (param_1 == 'a') {
          pcVar6 = *(char **)(param_5 + param_2[6] * 4);
          goto LAB_0055cb92;
        }
        if (param_1 == 'b') {
          pcVar6 = *(char **)(param_5 + 0x38 + param_2[4] * 4);
          goto LAB_0055cb92;
        }
        if (param_1 == 'c') {
          if (DAT_007503c8 == 0) {
            pbVar4 = *(byte **)(param_5 + 0xa0);
          }
          else {
            DAT_007503c8 = 0;
            pbVar4 = *(byte **)(param_5 + 0xa4);
          }
          FUN_0055cc7e(pbVar4,(int)param_2,param_3,param_4,param_5);
          if (*param_4 == 0) {
            return;
          }
          **(undefined1 **)param_3 = 0x20;
          *(int *)param_3 = *(int *)param_3 + 1;
          *param_4 = *param_4 - 1;
          pbVar4 = *(byte **)(param_5 + 0xa8);
          goto LAB_0055cb36;
        }
        if (param_1 == 'd') {
          uVar5 = 2;
          iVar2 = param_2[3];
          goto LAB_0055c8ec;
        }
        if (param_1 != 'j') {
          return;
        }
        iVar2 = param_2[7];
        uVar5 = 3;
      }
      iVar2 = iVar2 + 1;
      goto LAB_0055c8ec;
    }
    if (param_1 == 'p') {
      if (param_2[2] < 0xc) {
        pcVar6 = *(char **)(param_5 + 0x98);
      }
      else {
        pcVar6 = *(char **)(param_5 + 0x9c);
      }
      goto LAB_0055cb92;
    }
    if (param_1 == 'w') {
      uVar5 = 1;
      iVar2 = param_2[6];
      goto LAB_0055c8ec;
    }
    if (param_1 == 'x') {
      if (DAT_007503c8 == 0) {
        pbVar4 = *(byte **)(param_5 + 0xa0);
      }
      else {
        DAT_007503c8 = 0;
        pbVar4 = *(byte **)(param_5 + 0xa4);
      }
LAB_0055cb36:
      FUN_0055cc7e(pbVar4,(int)param_2,param_3,param_4,param_5);
      return;
    }
    if (param_1 == 'y') {
      iVar2 = param_2[5] % 100;
      goto LAB_0055c819;
    }
    if (param_1 != 'z') {
      return;
    }
  }
  FUN_00563515();
  pcVar6 = (&PTR_DAT_005c8ce4)[param_2[8] != 0];
LAB_0055cb92:
  FUN_0055cb9f(pcVar6,(int *)param_3,(int *)param_4);
  return;
}


