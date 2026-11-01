
/* ==== TControl.vmt_070 @ 00426724 ==== 
 * signature: undefined TControl.vmt_070(void)
 * body: 00426724-00426732
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_070(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x1c))();
  }
  return;
}


