
/* ==== FUN_00567b81 @ 00567b81 ==== 
 * signature: char * __cdecl FUN_00567b81(uint param_1, char * param_2, uint param_3)
 * body: 00567b81-00567bad
 */

char * __cdecl FUN_00567b81(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    iVar1 = 1;
    param_3 = 10;
  }
  else {
    iVar1 = 0;
  }
  FUN_00567bae(param_1,param_2,param_3,iVar1);
  return param_2;
}


