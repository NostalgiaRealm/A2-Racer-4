
/* ==== FUN_00410bac @ 00410bac ==== 
 * signature: undefined __register FUN_00410bac(int param_1, char param_2)
 * body: 00410bac-00410bcc
 */

void FUN_00410bac(int param_1,char param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if ((piVar1 != (int *)0x0) && (piVar1[3] == 0)) {
    if (param_2 != '\0') {
      param_1 = 0;
    }
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1);
  }
  return;
}


