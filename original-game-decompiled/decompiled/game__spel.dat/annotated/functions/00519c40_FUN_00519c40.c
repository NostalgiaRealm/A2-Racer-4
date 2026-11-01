
/* ==== FUN_00519c40 @ 00519c40 ==== 
 * signature: undefined __stdcall FUN_00519c40(void)
 * body: 00519c40-00519d5c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00519c40(void)

{
  int iVar1;
  double *pdVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  double local_18;
  double local_10;
  
  if (DAT_0074be70 == 0) {
    if (DAT_0074be74 == 0) {
      iVar5 = DAT_0074c600;
      if (DAT_0074c600 == 0) {
        return;
      }
      do {
        if (*(int *)(iVar5 + 0x30) == 0) {
          return;
        }
        if (*(int *)(iVar5 + 0x44) != 0) {
          FUN_005145f0((undefined4 *)(iVar5 + 0x44));
        }
        iVar5 = *(int *)(iVar5 + 0x30);
      } while (iVar5 != 0);
      return;
    }
  }
  else if (DAT_0074be74 != 0) {
    return;
  }
  FUN_0052b650(0,(double *)0x0,&local_18);
  if (_DAT_0074c668 < 8.988465674311579e+307) {
    local_18 = local_18 - SQRT((double)DAT_0074c03c) * _DAT_0074c668;
  }
  iVar4 = 0;
  for (iVar5 = DAT_0074c600; (iVar5 != 0 && (*(int *)(iVar5 + 0x30) != 0));
      iVar5 = *(int *)(iVar5 + 0x30)) {
    iVar1 = *(int *)(iVar5 + 0x44);
    if (iVar1 != 0) {
      pdVar2 = *(double **)(iVar1 + 4);
      puVar3 = (undefined4 *)(iVar1 + 4);
      while (pdVar2 != (double *)0x0) {
        iVar4 = iVar4 + 1;
        FUN_005273a0(pdVar2,iVar5,&local_10);
        iVar1 = DAT_0074be70;
        if (local_10 < local_18) {
          iVar1 = DAT_0074be74;
        }
        if (iVar1 == 0) {
          *puVar3 = 0;
        }
        pdVar2 = (double *)puVar3[1];
        puVar3 = puVar3 + 1;
      }
      FUN_005141f0(*(int **)(iVar5 + 0x44));
    }
  }
  DAT_0074c860 = DAT_0074c860 + iVar4;
  return;
}


