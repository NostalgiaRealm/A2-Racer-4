
/* ==== FUN_00553181 @ 00553181 ==== 
 * signature: char * __fastcall FUN_00553181(int param_1)
 * body: 00553181-005531c7
 */

char * __fastcall FUN_00553181(int param_1)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = FUN_0055c43a();
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    FUN_00402940((void *)(param_1 + 0x10),(undefined4 *)pcVar1,sVar2);
    FUN_00559d4e(pcVar1);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    pcVar1 = 
    ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov:November:Dec:December"
    ;
  }
  else {
    pcVar1 = *(char **)(param_1 + 0x14);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
  }
  return pcVar1;
}


