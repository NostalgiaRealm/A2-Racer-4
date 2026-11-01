
/* ==== FUN_1000dcf0 @ 1000dcf0 ==== 
 * signature: undefined __cdecl FUN_1000dcf0(char * param_1, int param_2, int * param_3, int * param_4)
 * body: 1000dcf0-1000dd39
 */

void __cdecl FUN_1000dcf0(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1000dc30((int)cVar1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}


