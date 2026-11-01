
/* ==== FUN_004901b0 @ 004901b0 ==== 
 * signature: int __cdecl FUN_004901b0(char * param_1)
 * body: 004901b0-004901c2
 */

int __cdecl FUN_004901b0(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}


