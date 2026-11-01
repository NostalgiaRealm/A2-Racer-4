
/* ==== FUN_00436284 @ 00436284 ==== 
 * signature: undefined __register FUN_00436284(int * param_1, int param_2)
 * body: 00436284-004362bb
 */

void FUN_00436284(int *param_1,int param_2)

{
  param_1[0xb] = param_2;
  FUN_00436174(param_1);
  if ((PTR_DAT_00446da0[9] != '\0') && (param_2 != 0)) {
    if (*(char *)((int)param_1 + 0x35) == '\0') {
      FUN_00436208(param_1);
    }
    else {
      FUN_0043673c(param_1);
    }
  }
  return;
}


