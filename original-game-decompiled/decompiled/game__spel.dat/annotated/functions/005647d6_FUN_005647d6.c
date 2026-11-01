
/* ==== FUN_005647d6 @ 005647d6 ==== 
 * signature: undefined __cdecl FUN_005647d6(char * param_1)
 * body: 005647d6-0056480c
 */

void __cdecl FUN_005647d6(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_005647ed;
      do {
        pcVar1 = pcVar3 + 1;
        *pcVar3 = pcVar3[1];
        pcVar3 = pcVar1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_005647ed:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}


