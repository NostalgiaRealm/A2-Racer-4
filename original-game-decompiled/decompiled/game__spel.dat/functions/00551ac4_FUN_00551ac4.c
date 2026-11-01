
/* ==== FUN_00551ac4 @ 00551ac4 ==== 
 * signature: undefined __cdecl FUN_00551ac4(undefined1 * param_1, char param_2, uint param_3)
 * body: 00551ac4-00551b21
 */

void __cdecl FUN_00551ac4(undefined1 *param_1,char param_2,uint param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  
  *param_1 = 0x25;
  puVar1 = param_1 + 1;
  if ((param_3 & 0x20) != 0) {
    *puVar1 = 0x2b;
    puVar1 = param_1 + 2;
  }
  if ((param_3 & 0x10) != 0) {
    *puVar1 = 0x23;
    puVar1 = puVar1 + 1;
  }
  *puVar1 = 0x2e;
  puVar1[1] = 0x2a;
  pcVar2 = puVar1 + 2;
  if (param_2 != '\0') {
    *pcVar2 = param_2;
    pcVar2 = puVar1 + 3;
  }
  if ((param_3 & 0x3000) == 0x2000) {
    cVar3 = 'f';
  }
  else {
    cVar3 = (((param_3 & 0x3000) != 0x1000) - 1U & 0xfe) + 0x67;
  }
  *pcVar2 = cVar3;
  pcVar2[1] = '\0';
  return;
}


