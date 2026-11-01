
/* ==== FUN_0044d05c @ 0044d05c ==== 
 * signature: undefined4 __register FUN_0044d05c(int param_1, undefined4 param_2)
 * body: 0044d05c-0044d08a
 */

undefined4 FUN_0044d05c(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x74);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0xc4))(piVar1,param_2);
    if (cVar2 != '\0') {
      FUN_0044de34(param_1);
    }
  }
  return 0;
}


