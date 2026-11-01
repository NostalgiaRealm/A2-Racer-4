
/* ==== FUN_00402139 @ 00402139 ==== 
 * signature: undefined __cdecl FUN_00402139(char * param_1, int param_2, int * param_3, int * param_4)
 * body: 00402139-00402170
 */

void __cdecl FUN_00402139(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_004020d3((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


