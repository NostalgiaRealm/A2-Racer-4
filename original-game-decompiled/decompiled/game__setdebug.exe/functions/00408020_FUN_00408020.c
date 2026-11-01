
/* ==== FUN_00408020 @ 00408020 ==== 
 * signature: int __register FUN_00408020(char * param_1)
 * body: 00408020-00408036
 */

int FUN_00408020(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return -2 - iVar2;
}


