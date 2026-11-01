
/* ==== TControl.vmt_05c @ 00424740 ==== 
 * signature: undefined TControl.vmt_05c(void)
 * body: 00424740-00424756
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_05c(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x48)) {
    *(char *)(param_1 + 0x48) = param_2;
    FUN_00425780(param_1,0xb00c,0,0);
  }
  return;
}


