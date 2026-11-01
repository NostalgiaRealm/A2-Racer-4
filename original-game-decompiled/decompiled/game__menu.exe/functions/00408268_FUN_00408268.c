
/* ==== FUN_00408268 @ 00408268 ==== 
 * signature: int __register FUN_00408268(char * param_1, char * param_2)
 * body: 00408268-00408296
 */

int FUN_00408268(char *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  uVar1 = 0;
  if (param_1 != (char *)0x0) {
    uVar1 = *(uint *)(param_1 + -4);
  }
  uVar3 = 0;
  if (param_2 != (char *)0x0) {
    uVar3 = *(uint *)(param_2 + -4);
  }
  uVar2 = uVar1;
  if (uVar3 < uVar1) {
    uVar2 = uVar3;
  }
  bVar6 = true;
  do {
    pcVar4 = param_1;
    pcVar5 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = param_2 + 1;
    pcVar4 = param_1 + 1;
    bVar6 = *param_1 == *param_2;
    param_1 = pcVar4;
    param_2 = pcVar5;
  } while (bVar6);
  if (!bVar6) {
    uVar1 = (uint)(byte)pcVar4[-1];
    uVar3 = (uint)(byte)pcVar5[-1];
  }
  return uVar1 - uVar3;
}


