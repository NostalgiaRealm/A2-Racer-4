
/* ==== TDaviButton.vmt_0bc @ 00476340 ==== 
 * signature: undefined TDaviButton.vmt_0bc(void)
 * body: 00476340-00476353
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviButton_vmt_0bc(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x219)) {
    *(char *)((int)param_1 + 0x219) = param_2;
    FUN_0042ec58(param_1);
  }
  return;
}


