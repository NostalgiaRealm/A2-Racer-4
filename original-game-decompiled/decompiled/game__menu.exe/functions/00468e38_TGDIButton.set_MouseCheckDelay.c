
/* ==== TGDIButton.set_MouseCheckDelay @ 00468e38 ==== 
 * signature: undefined TGDIButton.set_MouseCheckDelay(void)
 * body: 00468e38-00468e5e
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIButton_set_MouseCheckDelay(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 400)) {
    *(int *)(param_1 + 400) = param_2;
    if (*(int *)(param_1 + 0x184) != 0) {
      TDaviTimer_set_Interval(*(int *)(param_1 + 0x184),param_2,param_2);
    }
  }
  return;
}


