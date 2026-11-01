
/* ==== FUN_00408b24 @ 00408b24 ==== 
 * signature: int __register FUN_00408b24(char * param_1)
 * body: 00408b24-00408b3a
 */

int FUN_00408b24(char *param_1)

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


