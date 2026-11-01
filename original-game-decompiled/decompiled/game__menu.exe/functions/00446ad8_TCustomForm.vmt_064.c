
/* ==== TCustomForm.vmt_064 @ 00446ad8 ==== 
 * signature: undefined TCustomForm.vmt_064(void)
 * body: 00446ad8-00446afe
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_064(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x50)) {
    TControl_vmt_064(param_1,param_2);
    if (*(int *)(param_1 + 0x24) == 0) {
      FUN_0042f720(param_1,0xb03d,0,0);
    }
  }
  return;
}


