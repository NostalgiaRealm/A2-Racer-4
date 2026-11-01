
/* ==== FUN_00405268 @ 00405268 ==== 
 * signature: undefined __register FUN_00405268(int * param_1, int param_2, int param_3)
 * body: 00405268-0040528e
 */

void FUN_00405268(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
    UNLOCK();
  }
  if (iVar2 != 0) {
    LOCK();
    piVar1 = (int *)(iVar2 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      *(int *)(iVar2 + -8) = *(int *)(iVar2 + -8) + 1;
      FUN_0040522c(param_1,param_3);
    }
  }
  *param_1 = param_2;
  return;
}


