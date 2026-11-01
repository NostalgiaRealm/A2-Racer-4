
/* ==== FUN_0046f0d4 @ 0046f0d4 ==== 
 * signature: undefined FUN_0046f0d4(void)
 * body: 0046f0d4-0046f0f6
 */

void FUN_0046f0d4(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)param_1;
  param_1[param_2] = param_1[param_2] + cVar1;
  *param_1 = *param_1 + cVar1;
  *param_1 = *param_1 + cVar1;
  cVar1 = cVar1 * '\x02';
  pcVar2 = (char *)CONCAT31((int3)((uint)param_1 >> 8),cVar1);
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  FUN_00471110();
  return;
}


