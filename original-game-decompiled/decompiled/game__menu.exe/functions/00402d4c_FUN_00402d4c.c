
/* ==== FUN_00402d4c @ 00402d4c ==== 
 * signature: undefined __register FUN_00402d4c(char * param_1, char * param_2, uint param_3)
 * body: 00402d4c-00402d6e
 */

void FUN_00402d4c(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') break;
    pcVar2 = pcVar2 + 1;
    *pcVar2 = cVar1;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  *param_1 = (char)pcVar2 - (char)param_1;
  return;
}


