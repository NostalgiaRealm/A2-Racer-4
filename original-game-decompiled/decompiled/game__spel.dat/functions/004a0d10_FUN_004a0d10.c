
/* ==== FUN_004a0d10 @ 004a0d10 ==== 
 * signature: undefined4 * __thiscall FUN_004a0d10(void * this, int param_1, int param_2)
 * body: 004a0d10-004a0e45
 */

undefined4 * __thiscall FUN_004a0d10(void *this,int param_1,int param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  int iVar3;
  double *pdVar4;
  float *pfVar5;
  int local_30;
  ushort local_28;
  ushort local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  float local_20;
  float local_1c;
  float local_18;
  void *local_14;
  code *pcStack_10;
  undefined4 local_c;
  
  pcStack_10 = FUN_0056ed18;
  local_14 = ExceptionList;
  local_28 = 0;
  local_26 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  local_c = 0;
  ExceptionList = &local_14;
  pdVar1 = operator_new(param_1 << 5);
  if (pdVar1 == (double *)0x0) {
    pdVar1 = (double *)0x0;
  }
  iVar3 = param_1;
  pdVar4 = pdVar1;
  if (0 < param_1) {
    do {
      if (local_28 <= local_26) {
        FUN_004f6060(&local_28);
      }
      *(double **)(CONCAT22(uStack_22,uStack_24) + (uint)local_26 * 4) = pdVar4;
      local_26 = local_26 + 1;
      iVar3 = iVar3 + -1;
      pdVar4 = pdVar4 + 4;
    } while (iVar3 != 0);
    if (0 < param_1) {
      local_30 = param_1;
      pfVar5 = (float *)(param_2 + 8);
      iVar3 = (int)pdVar1 - param_2;
      do {
        local_20 = pfVar5[-2];
        local_1c = pfVar5[-1];
        local_18 = *pfVar5;
        FUN_004a4180(&local_20);
        *pdVar1 = (double)local_20;
        *(double *)(iVar3 + (int)pfVar5) = (double)local_1c;
        pdVar1[2] = (double)local_18;
        pfVar5 = pfVar5 + 8;
        pdVar1 = pdVar1 + 4;
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
  }
  puVar2 = FUN_004a0ae0(this,(int)&local_28);
  pfVar5 = (float *)CONCAT22(uStack_22,uStack_24);
  if ((pfVar5 != &local_20) && (pfVar5 != (float *)0x0)) {
    FUN_00559d4e(pfVar5);
  }
  ExceptionList = local_14;
  return puVar2;
}


