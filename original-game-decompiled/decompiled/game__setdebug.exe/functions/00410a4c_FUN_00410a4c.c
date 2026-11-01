
/* ==== FUN_00410a4c @ 00410a4c ==== 
 * signature: undefined __register FUN_00410a4c(int * param_1, char param_2)
 * body: 00410a4c-00410a67
 */

void FUN_00410a4c(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[6]) {
    if (param_2 != '\0') {
      (**(code **)(*param_1 + 0x7c))();
    }
    *(char *)(param_1 + 6) = param_2;
  }
  return;
}


