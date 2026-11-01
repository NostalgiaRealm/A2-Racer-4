
/* ==== FUN_0040c078 @ 0040c078 ==== 
 * signature: int __register FUN_0040c078(int param_1, int param_2)
 * body: 0040c078-0040c0d7
 */

int FUN_0040c078(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  local_10 = 0;
  iVar1 = local_10;
  if (0 < param_2) {
    iVar1 = FUN_00403edc(param_1);
    if (iVar1 < param_2) {
      param_2 = FUN_00403edc(param_1);
    }
    iVar1 = param_2;
    if (DAT_004ac5bc != '\0') {
      FUN_0040bfa0(param_1,param_2,&local_c,&local_10);
      iVar2 = FUN_00403edc(param_1);
      iVar1 = local_10;
      if (iVar2 < local_10) {
        iVar1 = FUN_00403edc(param_1);
      }
    }
  }
  local_10 = iVar1;
  return local_10;
}


