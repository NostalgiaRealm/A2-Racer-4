
/* ==== FUN_0041259c @ 0041259c ==== 
 * signature: int __register FUN_0041259c(int param_1, undefined4 param_2, uint param_3)
 * body: 0041259c-004125dd
 */

int FUN_0041259c(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  int local_c [2];
  
  cVar1 = FUN_00411b50(param_1,param_2,param_3);
  if (cVar1 == '\x13') {
    FUN_00413310(param_1,extraout_EDX,extraout_ECX);
    FUN_00411b6c(param_1,local_c,8);
  }
  else {
    local_c[0] = FUN_00412530(param_1,extraout_EDX,extraout_ECX);
  }
  return local_c[0];
}


