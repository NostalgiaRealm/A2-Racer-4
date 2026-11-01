
/* ==== FUN_004de6a0 @ 004de6a0 ==== 
 * signature: undefined __fastcall FUN_004de6a0(int param_1)
 * body: 004de6a0-004de6c1
 */

void __fastcall FUN_004de6a0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x10);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  FUN_004d3010(&DAT_0074b8c0,2,pcVar1,(undefined4 *)(param_1 + 0x40),(undefined4 *)0x0);
  return;
}


