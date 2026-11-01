
/* ==== FUN_00403c40 @ 00403c40 ==== 
 * signature: undefined __register FUN_00403c40(int * param_1, undefined4 * param_2)
 * body: 00403c40-00403c83
 */

void FUN_00403c40(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  puVar4 = (undefined4 *)*param_1;
  if (puVar4 != (undefined4 *)0x0) {
    uVar3 = puVar4[-1];
    if (param_2 == puVar4) {
      FUN_00403f6c(param_1,param_2[-1] + uVar3);
      param_2 = (undefined4 *)*param_1;
      uVar5 = uVar3;
    }
    else {
      FUN_00403f6c(param_1,param_2[-1] + uVar3);
      uVar5 = param_2[-1];
    }
    FUN_004027d0(param_2,(undefined4 *)(*param_1 + uVar3),uVar5);
    return;
  }
  if (param_2 != (undefined4 *)0x0) {
    if ((uint)param_2[-2] < 0x80000000) {
      LOCK();
      param_2[-2] = param_2[-2] + 1;
      UNLOCK();
    }
    else {
      puVar4 = FUN_00403a7c(param_2[-1]);
      FUN_004027d0(param_2,puVar4,param_2[-1]);
      param_2 = puVar4;
    }
  }
  LOCK();
  iVar2 = *param_1;
  *param_1 = (int)param_2;
  UNLOCK();
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + -8))) {
    LOCK();
    piVar1 = (int *)(iVar2 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_004026d0(iVar2 + -8);
    }
  }
  return;
}


