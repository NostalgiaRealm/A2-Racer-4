
/* ==== FUN_0054e986 @ 0054e986 ==== 
 * signature: undefined __cdecl FUN_0054e986(char * param_1)
 * body: 0054e986-0054e9ae
 */

void __cdecl FUN_0054e986(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  uint uVar3;
  
  sVar1 = _strlen(param_1);
  uVar3 = sVar1 + 1;
  pcVar2 = operator_new(uVar3);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *param_1;
    pcVar2 = pcVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


