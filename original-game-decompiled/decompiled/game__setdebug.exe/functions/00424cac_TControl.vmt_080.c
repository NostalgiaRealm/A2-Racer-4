
/* ==== TControl.vmt_080 @ 00424cac ==== 
 * signature: undefined TControl.vmt_080(void)
 * body: 00424cac-00424cbf
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


