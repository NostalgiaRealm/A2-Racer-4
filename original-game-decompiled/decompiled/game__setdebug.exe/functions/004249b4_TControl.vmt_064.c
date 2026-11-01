
/* ==== TControl.vmt_064 @ 004249b4 ==== 
 * signature: undefined __register TControl.vmt_064(int param_1, char param_2)
 * body: 004249b4-004249d0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_064(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x50)) &&
     (*(char *)(param_1 + 0x50) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_00425780(param_1,0xb03d,0,0);
  }
  return;
}


