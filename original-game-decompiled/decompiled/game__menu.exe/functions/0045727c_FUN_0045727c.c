
/* ==== FUN_0045727c @ 0045727c ==== 
 * signature: undefined __register FUN_0045727c(int * param_1, char param_2)
 * body: 0045727c-00457295
 */

void FUN_0045727c(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x22]) {
    *(char *)(param_1 + 0x22) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


