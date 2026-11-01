
/* ==== FUN_005588f0 @ 005588f0 ==== 
 * signature: char * __fastcall FUN_005588f0(int param_1)
 * body: 005588f0-005588fc
 */

char * __fastcall FUN_005588f0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}


