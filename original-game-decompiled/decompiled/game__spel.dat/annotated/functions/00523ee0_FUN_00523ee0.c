
/* ==== FUN_00523ee0 @ 00523ee0 ==== 
 * signature: undefined __stdcall FUN_00523ee0(void)
 * body: 00523ee0-005243a8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523ee0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  float10 fVar7;
  undefined4 local_10;
  undefined4 uStack_c;
  
  DAT_0074caf0 = DAT_0074c5f4 * DAT_0074c044 + 0x16a0;
  DAT_0074c738 = DAT_0074bf98;
  DAT_0074bf98 = 0;
  DAT_0074cae8 = 0;
  DAT_0074caf8 = 0;
  DAT_0074cb00 = 0;
  DAT_0074c7e8 = 0;
  _DAT_0074c7f0 = 0.0;
  DAT_0074cc10 = 0;
  DAT_0074cbf0 = 0;
  DAT_0074cc08 = 0;
  DAT_0074cc18 = 0;
  DAT_0074cc28 = 0;
  DAT_0074cc00 = 0;
  DAT_0074cbf8 = 0;
  _DAT_0074cda8 = FUN_00514af0(DAT_0074c6f0);
  _DAT_0074cda8 = DAT_0074c638 - _DAT_0074cda8;
  iVar2 = DAT_0074c600;
  if (((DAT_0074be98 != 0) || (DAT_0074be08 != 0)) || (_DAT_0074c668 < 8.988465674311579e+307)) {
    if ((double)CONCAT44(_DAT_0074cac4,_DAT_0074cac0) < (double)CONCAT44(DAT_0074c67c,DAT_0074c678))
    {
      _DAT_0074cac0 = DAT_0074c678;
      _DAT_0074cac4 = DAT_0074c67c;
    }
    if ((DAT_0074be98 != 0) &&
       ((double)CONCAT44(DAT_0074c68c,DAT_0074c688) < (double)CONCAT44(_DAT_0074cb74,_DAT_0074cb70))
       ) {
      _DAT_0074cb70 = DAT_0074c688;
      _DAT_0074cb74 = DAT_0074c68c;
    }
  }
  for (; (iVar2 != 0 && (*(int *)(iVar2 + 0x30) != 0)); iVar2 = *(int *)(iVar2 + 0x30)) {
    *(uint *)(iVar2 + 0x50) = *(uint *)(iVar2 + 0x50) & 0xffffdfff;
  }
  iVar2 = DAT_0074c600;
  iVar1 = DAT_0074c600;
  piVar6 = DAT_0074c628;
  if (DAT_0074be40 != 0) {
    for (; (iVar1 = DAT_0074c600, piVar6 = DAT_0074c628, iVar2 != 0 && (*(int *)(iVar2 + 0x30) != 0)
           ); iVar2 = *(int *)(iVar2 + 0x30)) {
      if ((*(uint *)(iVar2 + 0x50) >> 0x10 & 1) != DAT_0074c00c) {
        *(uint *)(iVar2 + 0x50) = *(uint *)(iVar2 + 0x50) | 0x2000;
      }
    }
  }
  for (; (DAT_0074c628 = piVar6, iVar1 != 0 && (*(int *)(iVar1 + 0x30) != 0));
      iVar1 = *(int *)(iVar1 + 0x30)) {
    if (((*(uint *)(iVar1 + 0x50) & 0x400) == 0) || (DAT_0074c690 == 0)) {
      iVar2 = FUN_00514af0(*(int **)(iVar1 + 0x34));
      iVar3 = FUN_00514af0(*(int **)(iVar1 + 0x3c));
      iVar4 = FUN_00514af0(*(int **)(iVar1 + 0x38));
      DAT_0074cbf0 = DAT_0074cbf0 + 1;
      DAT_0074cc18 = DAT_0074cc18 + iVar2;
      if (DAT_0074cad8 < iVar2) {
        DAT_0074cad8 = iVar2;
      }
      DAT_0074cc08 = DAT_0074cc08 + iVar3;
      if (DAT_0074cab0 < iVar3) {
        DAT_0074cab0 = iVar3;
      }
      DAT_0074cc00 = DAT_0074cc00 + (*(uint *)(iVar1 + 0x50) & 0x1ff);
      uVar5 = *(uint *)(iVar1 + 0x50) & 0x1ff;
      if ((int)DAT_0074cbf8 < (int)uVar5) {
        DAT_0074cbf8 = uVar5;
      }
      if ((iVar4 != 0) && (DAT_0074cc10 = DAT_0074cc10 + iVar4, DAT_0074cac8 < iVar4)) {
        DAT_0074cac8 = iVar4;
      }
      DAT_0074cae8 = DAT_0074cae8 + DAT_0074c5f4 + 0x68 + (iVar3 + iVar2) * 4;
      if (*(int *)(iVar1 + 0x38) != 0) {
        DAT_0074caf8 = ((DAT_0074c03c + 5) * iVar4 & 0x3fffffffU) * 2 + DAT_0074caf8 + 8 + iVar4 * 4
        ;
      }
      if (*(int **)(iVar1 + 0x40) != (int *)0x0) {
        iVar2 = FUN_00514af0(*(int **)(iVar1 + 0x40));
        DAT_0074caf0 = DAT_0074caf0 + 8 + iVar2 * 4;
      }
      if (*(int **)(iVar1 + 0x44) != (int *)0x0) {
        iVar2 = FUN_00514af0(*(int **)(iVar1 + 0x44));
        DAT_0074caf0 = DAT_0074caf0 + 8 + iVar2 * 4;
      }
      if ((*(uint *)(iVar1 + 0x50) & 0x2000) == 0) {
        iVar2 = *(int *)(iVar1 + 0x3c);
        *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) | 0x2000;
        if (iVar2 != 0) {
          iVar3 = *(int *)(iVar2 + 4);
          piVar6 = (int *)(iVar2 + 8);
          while (iVar3 != 0) {
            if ((((iVar3 != 1) && (iVar3 != 2)) && ((*(uint *)(iVar3 + 0x50) & 0x2000) == 0)) &&
               ((*(double **)(iVar1 + 0x18) != (double *)0x0 &&
                (*(double **)(iVar3 + 0x18) != (double *)0x0)))) {
              fVar7 = FUN_005282b0(*(double **)(iVar1 + 0x18),*(double **)(iVar3 + 0x18));
              DAT_0074c7e8 = DAT_0074c7e8 + 1;
              _DAT_0074c7f0 = (double)((float10)_DAT_0074c7f0 + fVar7);
              if ((float10)_DAT_0074c7f8 < fVar7) {
                _DAT_0074c7f8 = (double)fVar7;
              }
              if (fVar7 < (float10)_DAT_0074c800) {
                _DAT_0074c800 = (double)fVar7;
              }
            }
            iVar3 = *piVar6;
            piVar6 = piVar6 + 1;
          }
        }
        if ((*(int *)(iVar1 + 0x18) != 0) && (iVar2 = *(int *)(iVar1 + 0x34), iVar2 != 0)) {
          piVar6 = (int *)(iVar2 + 4);
          iVar2 = *(int *)(iVar2 + 4);
          while (iVar2 != 0) {
            piVar6 = piVar6 + 1;
            DAT_0074c978 = DAT_0074c978 + 1;
            FUN_005273a0(*(double **)(iVar2 + 8),iVar1,(double *)&local_10);
            if ((double)CONCAT44(_DAT_0074cd84,_DAT_0074cd80) < (double)CONCAT44(uStack_c,local_10))
            {
              _DAT_0074cd80 = local_10;
              _DAT_0074cd84 = uStack_c;
            }
            if ((double)CONCAT44(uStack_c,local_10) < (double)CONCAT44(_DAT_0074cd8c,_DAT_0074cd88))
            {
              _DAT_0074cd88 = local_10;
              _DAT_0074cd8c = uStack_c;
            }
            iVar2 = *piVar6;
          }
        }
      }
    }
    piVar6 = DAT_0074c628;
  }
  if (piVar6 == (int *)0x0) {
    DAT_0074bf98 = DAT_0074c738;
    return;
  }
  do {
    if (*piVar6 == 0) {
      DAT_0074bf98 = DAT_0074c738;
      return;
    }
    if ((piVar6[5] & 0x8000000U) == 0) {
      DAT_0074cb00 = DAT_0074cb00 + 0x18;
      if ((int *)piVar6[3] != (int *)0x0) {
        iVar2 = FUN_00514af0((int *)piVar6[3]);
        DAT_0074cc28 = DAT_0074cc28 + iVar2;
        if (DAT_0074cae0 < iVar2) {
          DAT_0074cae0 = iVar2;
        }
        DAT_0074cb00 = DAT_0074cb00 + 0x18 + iVar2 * 4;
      }
    }
    piVar6 = (int *)*piVar6;
  } while (piVar6 != (int *)0x0);
  DAT_0074bf98 = DAT_0074c738;
  return;
}


