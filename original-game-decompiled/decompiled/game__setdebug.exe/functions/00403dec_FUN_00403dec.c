
/* ==== FUN_00403dec @ 00403dec ==== 
 * signature: undefined __register FUN_00403dec(int param_1)
 * body: 00403dec-00403dfa
 */

void FUN_00403dec(int param_1)

{
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + -8))) {
    LOCK();
    *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
    UNLOCK();
  }
  return;
}


