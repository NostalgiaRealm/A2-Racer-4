
/* ==== TControl.vmt_064 @ 0042e904 ==== 
 * signature: undefined __register TControl.vmt_064(int param_1, char param_2)
 * body: 0042e904-0042e920
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_064(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x50)) &&
     (*(char *)(param_1 + 0x50) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_0042f720(param_1,0xb03d,0,0);
  }
  return;
}


