
/* ==== FUN_0052fcd0 @ 0052fcd0 ==== 
 * signature: undefined __cdecl FUN_0052fcd0(int * param_1, int param_2, int * param_3, int param_4)
 * body: 0052fcd0-0052ff07
 */

void __cdecl FUN_0052fcd0(int *param_1,int param_2,int *param_3,int param_4)

{
  double dVar1;
  uint uVar2;
  double *pdVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_28;
  undefined8 local_20;
  
  local_28 = *param_3;
  if ((((param_4 != 0) || (uVar2 = FUN_00533dd0(param_2), uVar2 == 0)) && (DAT_0074bef8 == 0)) &&
     ((((*(uint *)(param_2 + 0x50) & 0x400) == 0 || (DAT_0074c690 == 0)) &&
      (iVar5 = *(int *)(param_2 + 0x18), iVar5 != 0)))) {
    if (param_1 != (int *)0x0) {
      pdVar3 = (double *)&local_20;
      iVar6 = 3;
      do {
        dVar1 = (*(double *)((iVar5 - (int)&local_20) + (int)pdVar3) + 1.0) * 0.5;
        *pdVar3 = dVar1;
        if (dVar1 < -1.0) {
          *(undefined4 *)pdVar3 = 0;
          *(undefined4 *)((int)pdVar3 + 4) = 0xbff00000;
        }
        if (1.0 < *pdVar3) {
          *(undefined4 *)pdVar3 = 0;
          *(undefined4 *)((int)pdVar3 + 4) = 0x3ff00000;
        }
        pdVar3 = pdVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(int *)(param_2 + 0x48) = DAT_0074c6d0;
    if ((*(uint *)(param_2 + 0x50) & 0x1000) == 0) {
      iVar5 = *(int *)(param_2 + 0x38);
      if (iVar5 != 0) {
        iVar6 = *(int *)(iVar5 + 4);
        piVar4 = (int *)(iVar5 + 8);
        while (iVar6 != 0) {
          iVar5 = *(int *)(iVar6 + 4);
          if (iVar5 == param_2) {
            iVar5 = *(int *)(iVar6 + 8);
          }
          if (*(int *)(iVar5 + 0x48) != DAT_0074c6d0) {
            if (param_1 != (int *)0x0) {
              FUN_00558953(param_1,(byte *)s_3__d__d__d__8_4g__8_4g__8_4g_1___005c378c);
            }
            local_28 = local_28 + 1;
          }
          iVar6 = *piVar4;
          piVar4 = piVar4 + 1;
        }
      }
    }
    else {
      iVar5 = *(int *)(param_2 + 0x3c);
      if (iVar5 != 0) {
        iVar6 = *(int *)(iVar5 + 4);
        piVar4 = (int *)(iVar5 + 8);
        if (iVar6 != 0) {
          do {
            if (*(int *)(iVar6 + 0x48) != DAT_0074c6d0) {
              if (param_1 != (int *)0x0) {
                FUN_00558953(param_1,(byte *)s_3__d__d__d__8_4g__8_4g__8_4g_1___005c37bc);
              }
              local_28 = local_28 + 1;
            }
            iVar6 = *piVar4;
            piVar4 = piVar4 + 1;
          } while (iVar6 != 0);
          *param_3 = local_28;
          return;
        }
      }
    }
    *param_3 = local_28;
  }
  return;
}


