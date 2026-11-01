
/* ==== FUN_0055dbdb @ 0055dbdb ==== 
 * signature: undefined __cdecl FUN_0055dbdb(char * param_1)
 * body: 0055dbdb-0055dc28
 */

void __cdecl FUN_0055dbdb(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != DAT_005c837c))) {
    pcVar2 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar2;
  }
  if (*param_1 != '\0') {
    do {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
      pcVar2 = param_1;
      if ((cVar1 == '\0') || (cVar1 == 'e')) break;
    } while (cVar1 != 'E');
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    if (*pcVar2 == DAT_005c837c) {
      pcVar2 = pcVar3 + -2;
    }
    do {
      cVar1 = *param_1;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}


