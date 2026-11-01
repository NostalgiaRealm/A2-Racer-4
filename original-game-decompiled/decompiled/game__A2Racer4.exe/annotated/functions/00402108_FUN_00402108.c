
/* ==== FUN_00402108 @ 00402108 ==== 
 * signature: undefined __cdecl FUN_00402108(uint param_1, int param_2, int * param_3, int * param_4)
 * body: 00402108-00402138
 */

void __cdecl FUN_00402108(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_004020d3(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


