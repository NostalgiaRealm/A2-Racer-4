
/* ==== TMainMenu.set_ParentBiDiMode @ 0043672c ==== 
 * signature: undefined TMainMenu.set_ParentBiDiMode(void)
 * body: 0043672c-00436739
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMainMenu_set_ParentBiDiMode(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x35)) {
    *(char *)((int)param_1 + 0x35) = param_2;
    FUN_0043673c(param_1);
  }
  return;
}


