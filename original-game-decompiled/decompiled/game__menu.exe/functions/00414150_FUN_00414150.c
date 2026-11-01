
/* ==== FUN_00414150 @ 00414150 ==== 
 * signature: int __register FUN_00414150(int param_1, undefined4 param_2, uint param_3)
 * body: 00414150-00414191
 */

int FUN_00414150(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  int local_c [2];
  
  cVar1 = FUN_00413704(param_1,param_2,param_3);
  if (cVar1 == '\x13') {
    FUN_00414ec4(param_1,extraout_EDX,extraout_ECX);
    FUN_00413720(param_1,local_c,8);
  }
  else {
    local_c[0] = FUN_004140e4(param_1,extraout_EDX,extraout_ECX);
  }
  return local_c[0];
}


