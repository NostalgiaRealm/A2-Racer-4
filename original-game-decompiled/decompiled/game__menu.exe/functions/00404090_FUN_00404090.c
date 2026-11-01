
/* ==== FUN_00404090 @ 00404090 ==== 
 * signature: undefined __register FUN_00404090(int param_1)
 * body: 00404090-0040409e
 */

void FUN_00404090(int param_1)

{
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + -8))) {
    LOCK();
    *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
    UNLOCK();
  }
  return;
}


