
/* ==== FUN_0047ce80 @ 0047ce80 ==== 
 * signature: undefined __thiscall FUN_0047ce80(void * this, int param_1)
 * body: 0047ce80-0047cea9
 */

void __thiscall FUN_0047ce80(void *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = FUN_004b75a0(&DAT_00712130,pcVar1);
  FUN_0047ceb0(this,iVar2);
  return;
}


