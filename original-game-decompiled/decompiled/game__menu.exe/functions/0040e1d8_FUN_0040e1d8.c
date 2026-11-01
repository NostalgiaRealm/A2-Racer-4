
/* ==== FUN_0040e1d8 @ 0040e1d8 ==== 
 * signature: undefined __register FUN_0040e1d8(int * param_1, undefined4 * param_2, LPCSTR param_3)
 * body: 0040e1d8-0040e203
 */

void FUN_0040e1d8(int *param_1,undefined4 *param_2,LPCSTR param_3)

{
  char cVar1;
  
  cVar1 = **(char **)*param_2;
  if (cVar1 == '\x05') {
    FUN_0040e0a4(param_1,param_2,(undefined4 *)param_3);
    return;
  }
  if (cVar1 == '\n') {
    FUN_0040e0ec(param_1,(int)param_2,(undefined4 *)param_3);
    return;
  }
  if (cVar1 == '\v') {
    FUN_0040e180(param_1,(int)param_2,param_3);
  }
  return;
}


