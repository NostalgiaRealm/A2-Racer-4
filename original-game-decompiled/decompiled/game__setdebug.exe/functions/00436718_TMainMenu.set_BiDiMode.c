
/* ==== TMainMenu.set_BiDiMode @ 00436718 ==== 
 * signature: undefined __register TMainMenu.set_BiDiMode(int * param_1, char param_2)
 * body: 00436718-00436729
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMainMenu_set_BiDiMode(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[9]) {
    *(char *)(param_1 + 9) = param_2;
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    FUN_00436018(param_1);
  }
  return;
}


