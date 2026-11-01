
/* ==== FUN_00403f28 @ 00403f28 ==== 
 * signature: undefined __register FUN_00403f28(int * param_1, undefined4 * param_2, undefined4 * param_3)
 * body: 00403f28-00403f9a
 */

void FUN_00403f28(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    FUN_00403cb0(param_1,param_3);
    return;
  }
  if (param_3 == (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      if ((uint)param_2[-2] < 0x80000000) {
        LOCK();
        param_2[-2] = param_2[-2] + 1;
        UNLOCK();
      }
      else {
        puVar3 = FUN_00403d20(param_2[-1]);
        FUN_004028d8(param_2,puVar3,param_2[-1]);
        param_2 = puVar3;
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
        FUN_00402794(iVar2 + -8);
      }
    }
    return;
  }
  if (param_2 == (undefined4 *)*param_1) {
    FUN_00403ee4(param_1,param_3);
    return;
  }
  if (param_3 != (undefined4 *)*param_1) {
    FUN_00403cb0(param_1,param_2);
    FUN_00403ee4(param_1,param_3);
    return;
  }
  puVar3 = FUN_00403d20(param_2[-1] + param_3[-1]);
  FUN_004028d8(param_2,puVar3,param_2[-1]);
  FUN_004028d8(param_3,(undefined4 *)((int)puVar3 + param_2[-1]),param_3[-1]);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[-2] = puVar3[-2] + -1;
  }
  FUN_00403cb0(param_1,puVar3);
  return;
}


