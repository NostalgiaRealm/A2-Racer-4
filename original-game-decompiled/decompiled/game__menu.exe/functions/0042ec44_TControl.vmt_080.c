
/* ==== TControl.vmt_080 @ 0042ec44 ==== 
 * signature: undefined TControl.vmt_080(void)
 * body: 0042ec44-0042ec57
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_080(int param_1)

{
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x80))();
  }
  return;
}


