
/* ==== FUN_00402d34 @ 00402d34 ==== 
 * signature: undefined __register FUN_00402d34(char * param_1, char * param_2)
 * body: 00402d34-00402d4a
 */

void FUN_00402d34(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = -1;
  pcVar2 = param_1;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') break;
    pcVar2 = pcVar2 + 1;
    *pcVar2 = cVar1;
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  *param_1 = (char)pcVar2 - (char)param_1;
  return;
}


