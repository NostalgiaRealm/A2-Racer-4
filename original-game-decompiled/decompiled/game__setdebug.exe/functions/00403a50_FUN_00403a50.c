
/* ==== FUN_00403a50 @ 00403a50 ==== 
 * signature: undefined __register FUN_00403a50(int * param_1, int param_2)
 * body: 00403a50-00403a78
 */

void FUN_00403a50(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 != 0) && (-1 < *(int *)(param_2 + -8))) {
    LOCK();
    *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
    UNLOCK();
  }
  LOCK();
  iVar2 = *param_1;
  *param_1 = param_2;
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


