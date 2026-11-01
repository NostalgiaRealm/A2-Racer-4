
/* ==== FUN_00408128 @ 00408128 ==== 
 * signature: int __register FUN_00408128(char * param_1, char * param_2)
 * body: 00408128-00408149
 */

int FUN_00408128(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar3 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  do {
    pcVar4 = param_1;
    pcVar5 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_2 + 1;
    pcVar4 = param_1 + 1;
    cVar2 = *param_2;
    cVar1 = *param_1;
    param_1 = pcVar4;
    param_2 = pcVar5;
  } while (cVar1 == cVar2);
  return (uint)(byte)pcVar4[-1] - (uint)(byte)pcVar5[-1];
}


