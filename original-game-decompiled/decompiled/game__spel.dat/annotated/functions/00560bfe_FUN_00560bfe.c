
/* ==== FUN_00560bfe @ 00560bfe ==== 
 * signature: char * __cdecl FUN_00560bfe(char * param_1, int param_2)
 * body: 00560bfe-00560c25
 */

char * __cdecl FUN_00560bfe(char *param_1,int param_2)

{
  *param_1 = (char)(param_2 / 10) + '0';
  param_1[1] = (char)(param_2 % 10) + '0';
  return param_1 + 2;
}


