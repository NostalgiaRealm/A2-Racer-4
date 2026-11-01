
/* ==== FUN_0052aa70 @ 0052aa70 ==== 
 * signature: undefined4 __cdecl FUN_0052aa70(int param_1, undefined4 * param_2)
 * body: 0052aa70-0052ab54
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0052aa70(int param_1,undefined4 *param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  
  if (0 < param_1) {
    iVar10 = 1;
    do {
      pdVar8 = (double *)*param_2;
      dVar4 = 0.0;
      for (iVar6 = param_1; iVar6 != 0; iVar6 = iVar6 + -1) {
        dVar1 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        dVar4 = dVar1 * dVar1 + dVar4;
      }
      dVar4 = SQRT(dVar4);
      if (dVar4 < _DAT_0074cb68) {
        _DAT_0074cb68 = dVar4;
      }
      iVar6 = param_1;
      if (dVar4 == 0.0) {
        return 0;
      }
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        pdVar7 = pdVar8 + -1;
        pdVar8 = pdVar8 + -1;
        *pdVar8 = *pdVar7 / dVar4;
      }
      if (iVar10 < param_1) {
        iVar6 = param_1 - iVar10;
        puVar11 = param_2;
        do {
          puVar11 = puVar11 + 1;
          pdVar7 = (double *)*puVar11;
          dVar4 = 0.0;
          iVar9 = param_1;
          if (param_1 != 0) {
            do {
              dVar1 = *pdVar8;
              dVar2 = *pdVar7;
              pdVar7 = pdVar7 + 1;
              pdVar8 = pdVar8 + 1;
              iVar9 = iVar9 + -1;
              dVar4 = dVar1 * dVar2 + dVar4;
              iVar5 = param_1;
            } while (iVar9 != 0);
            for (; iVar5 != 0; iVar5 = iVar5 + -1) {
              pdVar8 = pdVar8 + -1;
              pdVar7 = pdVar7 + -1;
              *pdVar7 = *pdVar7 - dVar4 * *pdVar8;
            }
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      param_2 = param_2 + 1;
      bVar3 = iVar10 < param_1;
      iVar10 = iVar10 + 1;
    } while (bVar3);
  }
  return 1;
}


