
/* ==== TfrmGarage.btnPrevTUClick @ 004998cc ==== 
 * signature: undefined TfrmGarage.btnPrevTUClick(void)
 * body: 004998cc-004998fa
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmGarage_btnPrevTUClick(uint param_1)

{
  char cVar1;
  byte bVar2;
  byte extraout_DL;
  
  cVar1 = *(char *)(param_1 + 0x34c);
  if (cVar1 != '\0') {
    bVar2 = cVar1 - 1;
    if (SBORROW1(cVar1,'\x01')) {
      param_1 = thunk_FUN_00402808(param_1);
      bVar2 = extraout_DL;
    }
    if (4 < bVar2) {
      thunk_FUN_00402808(param_1);
    }
  }
  FUN_004993d4();
  return;
}


