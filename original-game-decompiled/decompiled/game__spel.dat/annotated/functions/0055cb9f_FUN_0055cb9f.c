
/* ==== FUN_0055cb9f @ 0055cb9f ==== 
 * signature: undefined __cdecl FUN_0055cb9f(char * param_1, int * param_2, int * param_3)
 * body: 0055cb9f-0055cbc5
 */

void __cdecl FUN_0055cb9f(char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  for (; (iVar1 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    *param_3 = *param_3 + -1;
    iVar1 = *param_3;
  }
  return;
}


