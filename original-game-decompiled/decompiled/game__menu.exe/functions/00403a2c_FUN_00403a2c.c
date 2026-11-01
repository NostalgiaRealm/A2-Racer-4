
/* ==== FUN_00403a2c @ 00403a2c ==== 
 * signature: undefined __register FUN_00403a2c(int * param_1)
 * body: 00403a2c-00403a47
 */

void FUN_00403a2c(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1 + 1;
  do {
    FUN_00405808(*(undefined4 **)piVar2[1],(int *)*piVar2);
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


