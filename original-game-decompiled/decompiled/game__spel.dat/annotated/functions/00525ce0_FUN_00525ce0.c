
/* ==== FUN_00525ce0 @ 00525ce0 ==== 
 * signature: int __cdecl FUN_00525ce0(int * param_1)
 * body: 00525ce0-00525f3f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_00525ce0(int *param_1)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  
  if (DAT_0074c608 == DAT_0074c604) {
    return 0;
  }
  do {
    pdVar5 = DAT_0074c608;
    piVar1 = *(int **)(DAT_0074c608 + 8);
    pdVar2 = DAT_0074c608 + 8;
    if (piVar1 == (int *)0x0) {
      DAT_0074c608 = *(double **)(DAT_0074c608 + 6);
    }
    else {
      iVar3 = *piVar1;
      if (piVar1[iVar3 + 1] != 0) {
        iVar3 = piVar1[iVar3 + 1] + -1;
      }
      if (iVar3 == 0) {
        FUN_005145f0((undefined4 *)pdVar2);
        DAT_0074c608 = *(double **)(pdVar5 + 6);
      }
      else {
        if (DAT_0074c4e0 != 0) {
          if (((ulonglong)DAT_0074c608[10] & 0x20000) != 0) {
            FUN_005189b0((undefined4 *)DAT_0074c608);
          }
          FUN_005147a0(*(int **)pdVar2);
          if (*pdVar5 < _DAT_0074be10) {
            DAT_0074c608 = *(double **)(pdVar5 + 6);
            goto LAB_00525dd5;
          }
        }
        if (DAT_0074bfb8 == 0) {
          if (DAT_0074c014 == 0) {
            if (DAT_0074bed0 != 0) {
              FUN_00518910();
              pdVar5 = DAT_0074c608;
            }
            *param_1 = (int)pdVar5;
            iVar3 = FUN_005142e0(*(int **)(pdVar5 + 8));
            return iVar3;
          }
          iVar3 = *(int *)((int)DAT_0074c604 + 0x2c);
          iVar4 = FUN_005142e0(*(int **)(iVar3 + 0x40));
          if (iVar4 != 0) {
            *param_1 = iVar3;
            return iVar4;
          }
          if (*(int *)(iVar3 + 0x40) != 0) {
            FUN_005145f0((int *)(iVar3 + 0x40));
          }
          FUN_00516530(iVar3);
          FUN_0051a280(iVar3,(int *)&DAT_0074c600);
        }
        else {
          iVar3 = 0;
          pdVar2 = DAT_0074c600;
          if (DAT_0074c4e0 != 0) {
            for (; ((pdVar2 != (double *)0x0 && (*(int *)(pdVar2 + 6) != 0)) &&
                   (pdVar2 != DAT_0074c608)); pdVar2 = *(double **)(pdVar2 + 6)) {
              if (*(int **)(pdVar2 + 8) != (int *)0x0) {
                iVar4 = FUN_00514af0(*(int **)(pdVar2 + 8));
                iVar3 = iVar3 + iVar4;
              }
            }
          }
          iVar4 = FUN_0052bd10();
          FUN_005589b8((double)(DAT_0074c63c - iVar3) * (double)iVar4 * 4.656612875245797e-10);
          lVar6 = __ftol();
          iVar3 = (int)lVar6;
          for (pdVar2 = DAT_0074c608; (pdVar2 != (double *)0x0 && (*(int *)(pdVar2 + 6) != 0));
              pdVar2 = *(double **)(pdVar2 + 6)) {
            piVar1 = *(int **)(pdVar2 + 8);
            if (piVar1 != (int *)0x0) {
              iVar4 = *piVar1;
              if (piVar1[iVar4 + 1] != 0) {
                iVar4 = piVar1[iVar4 + 1] + -1;
              }
              if (iVar4 == 0) {
                FUN_005145f0((undefined4 *)(pdVar2 + 8));
              }
              else {
                if (iVar3 < iVar4) {
                  *param_1 = (int)pdVar2;
                  iVar3 = FUN_00514330(*(int **)(pdVar2 + 8),iVar3);
                  return iVar3;
                }
                iVar3 = iVar3 - iVar4;
              }
            }
          }
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_nextfur_005c0f9c);
          FUN_0051e8e0(5,(int *)0x0);
        }
      }
    }
LAB_00525dd5:
    if (DAT_0074c608 == DAT_0074c604) {
      return 0;
    }
  } while( true );
}


