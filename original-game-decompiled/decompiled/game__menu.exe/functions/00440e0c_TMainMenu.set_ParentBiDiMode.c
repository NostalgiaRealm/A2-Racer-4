
/* ==== TMainMenu.set_ParentBiDiMode @ 00440e0c ==== 
 * signature: undefined TMainMenu.set_ParentBiDiMode(void)
 * body: 00440e0c-00440e19
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMainMenu_set_ParentBiDiMode(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x35)) {
    *(char *)((int)param_1 + 0x35) = param_2;
    FUN_00440e1c(param_1);
  }
  return;
}


