
/* ==== FUN_00501070 @ 00501070 ==== 
 * signature: int __cdecl FUN_00501070(char * param_1)
 * body: 00501070-0050108f
 */

int __cdecl FUN_00501070(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return 0;
  }
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}


