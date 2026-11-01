
/* ==== TControl.vmt_05c @ 0042e690 ==== 
 * signature: undefined TControl.vmt_05c(void)
 * body: 0042e690-0042e6a6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_05c(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x48)) {
    *(char *)(param_1 + 0x48) = param_2;
    FUN_0042f720(param_1,0xb00c,0,0);
  }
  return;
}


