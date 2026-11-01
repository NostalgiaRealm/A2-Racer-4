
/* ==== FUN_0046fd98 @ 0046fd98 ==== 
 * signature: undefined FUN_0046fd98(void)
 * body: 0046fd98-0046fda7
 */

void FUN_0046fd98(char *param_1,int param_2,VARIANTARG *param_3)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)param_1;
  param_1[param_2] = param_1[param_2] + cVar1;
  *param_1 = *param_1 + cVar1;
  *param_1 = *param_1 + cVar1;
  cVar1 = cVar1 * '\x02';
  piVar2 = (int *)CONCAT31((int3)((uint)param_1 >> 8),cVar1);
  *(char *)piVar2 = (char)*piVar2 + cVar1;
  *(char *)piVar2 = (char)*piVar2 + cVar1;
  *(char *)piVar2 = (char)*piVar2 + cVar1;
  FUN_004049ec(param_3);
  FUN_0046fdc8(piVar2,param_2,(undefined2 *)param_3);
  return;
}


