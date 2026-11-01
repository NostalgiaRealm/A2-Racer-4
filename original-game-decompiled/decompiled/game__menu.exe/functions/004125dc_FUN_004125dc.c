
/* ==== FUN_004125dc @ 004125dc ==== 
 * signature: undefined __register FUN_004125dc(int * param_1, char param_2)
 * body: 004125dc-004125f7
 */

void FUN_004125dc(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[6]) {
    if (param_2 != '\0') {
      (**(code **)(*param_1 + 0x7c))();
    }
    *(char *)(param_1 + 6) = param_2;
  }
  return;
}


