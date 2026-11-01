
/* ==== FUN_004039b8 @ 004039b8 ==== 
 * signature: int * __register FUN_004039b8(int * param_1)
 * body: 004039b8-004039da
 */

int * FUN_004039b8(int *param_1)

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
      FUN_004026d0(iVar2 + -8);
    }
  }
  return param_1;
}


