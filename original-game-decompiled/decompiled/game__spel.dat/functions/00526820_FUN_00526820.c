
/* ==== FUN_00526820 @ 00526820 ==== 
 * signature: undefined __cdecl FUN_00526820(int param_1, int * param_2)
 * body: 00526820-00526a13
 */

void __cdecl FUN_00526820(int param_1,int *param_2)

{
  double *pdVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
  if ((DAT_0074becc != 0) &&
     ((double)CONCAT44(DAT_0074be14,DAT_0074be10) < (double)CONCAT44(DAT_0074c684,DAT_0074c680))) {
    DAT_0074be10 = DAT_0074c680;
    DAT_0074be14 = DAT_0074c684;
  }
  *param_2 = 0;
  piVar7 = DAT_0074c610;
  do {
    if ((piVar7 == (int *)0x0) || ((piVar7[0x14] & 0x400U) == 0)) {
      if (DAT_0074c6f0 != 0) {
        piVar7 = (int *)(DAT_0074c6f0 + 4);
        iVar5 = *(int *)(DAT_0074c6f0 + 4);
        while (iVar5 != 0) {
          piVar7 = piVar7 + 1;
          pdVar1 = *(double **)(iVar5 + 8);
          if (pdVar1 != (double *)0x0) {
            if (param_1 == 0) {
              FUN_00526330(pdVar1,DAT_0074c60c,(undefined4 *)0x0);
            }
            else {
              FUN_00526560(pdVar1,DAT_0074c60c);
            }
          }
          iVar5 = *piVar7;
        }
      }
      if (0 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_partitionvisible__partitioned_005c11b8);
      }
      return;
    }
    if ((piVar7[0x10] != 0) || (piVar7[0x11] != 0)) {
      piVar8 = (int *)piVar7[8];
      uVar4 = 0;
      while (piVar8 != (int *)0x0) {
        if ((piVar8[0x14] & 0x400U) == 0) {
          if (piVar8 != (int *)0x0) goto LAB_005268cf;
          break;
        }
        piVar8 = (int *)piVar8[8];
        uVar6 = uVar4 + 1;
        bVar2 = DAT_0074c644 < uVar4;
        uVar4 = uVar6;
        if (bVar2) {
          FUN_00518aa0(piVar7);
        }
      }
      piVar8 = DAT_0074c60c;
LAB_005268cf:
      if ((int *)piVar7[0x10] != (int *)0x0) {
        iVar5 = FUN_00514af0((int *)piVar7[0x10]);
        *param_2 = *param_2 + iVar5;
        DAT_0074c63c = DAT_0074c63c - iVar5;
        iVar5 = piVar7[0x10];
        if (iVar5 != 0) {
          pdVar1 = *(double **)(iVar5 + 4);
          puVar3 = (undefined4 *)(iVar5 + 8);
          while (pdVar1 != (double *)0x0) {
            FUN_00526560(pdVar1,piVar8);
            pdVar1 = (double *)*puVar3;
            puVar3 = puVar3 + 1;
          }
        }
      }
      if (((int *)piVar7[0x11] != (int *)0x0) && (DAT_0074c038 + DAT_0074be74 + DAT_0074be70 != 0))
      {
        FUN_00514af0((int *)piVar7[0x11]);
        iVar5 = piVar7[0x11];
        if (iVar5 != 0) {
          pdVar1 = *(double **)(iVar5 + 4);
          puVar3 = (undefined4 *)(iVar5 + 8);
          while (pdVar1 != (double *)0x0) {
            if (param_1 == 0) {
              FUN_00526330(pdVar1,piVar8,(undefined4 *)0x0);
            }
            else {
              FUN_00526560(pdVar1,piVar8);
            }
            pdVar1 = (double *)*puVar3;
            puVar3 = puVar3 + 1;
          }
        }
      }
    }
    piVar7 = (int *)piVar7[0xc];
  } while( true );
}


