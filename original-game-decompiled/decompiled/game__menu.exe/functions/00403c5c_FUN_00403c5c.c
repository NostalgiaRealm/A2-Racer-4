
/* ==== FUN_00403c5c @ 00403c5c ==== 
 * signature: int * __register FUN_00403c5c(int * param_1)
 * body: 00403c5c-00403c7e
 */

int * FUN_00403c5c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 != 0) && (*param_1 = 0, 0 < *(int *)(iVar2 + -8))) {
    LOCK();
    piVar1 = (int *)(iVar2 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_00402794(iVar2 + -8);
    }
  }
  return param_1;
}


