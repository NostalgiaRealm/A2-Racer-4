
/* ==== TCustomForm.vmt_064 @ 0043c128 ==== 
 * signature: undefined TCustomForm.vmt_064(void)
 * body: 0043c128-0043c14e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_064(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x50)) {
    TControl_vmt_064(param_1,param_2);
    if (*(int *)(param_1 + 0x24) == 0) {
      FUN_00425780(param_1,0xb03d,0,0);
    }
  }
  return;
}


