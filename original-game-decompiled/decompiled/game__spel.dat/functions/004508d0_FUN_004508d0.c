
/* ==== FUN_004508d0 @ 004508d0 ==== 
 * signature: undefined4 __cdecl FUN_004508d0(char * param_1, char * param_2)
 * body: 004508d0-004508fd
 */

undefined4 __cdecl FUN_004508d0(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  if (cVar2 == *param_2) {
    pcVar3 = param_1;
    do {
      if (cVar2 == '\0') {
        return 1;
      }
      cVar2 = pcVar3[1];
      pcVar1 = pcVar3 + (int)(param_2 + (1 - (int)param_1));
      pcVar3 = pcVar3 + 1;
    } while (cVar2 == *pcVar1);
  }
  return 0;
}


