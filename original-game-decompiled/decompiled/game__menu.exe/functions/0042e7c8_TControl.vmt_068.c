
/* ==== TControl.vmt_068 @ 0042e7c8 ==== 
 * signature: undefined TControl.vmt_068(void)
 * body: 0042e7c8-0042e7e2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_068(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4f)) {
    *(char *)(param_1 + 0x4f) = param_2;
    *(undefined1 *)(param_1 + 0x50) = 0;
    FUN_0042f720(param_1,0xb03c,0,0);
  }
  return;
}


