
/* ==== TMenuItem.vmt_03c @ 00434ab4 ==== 
 * signature: undefined TMenuItem.vmt_03c(void)
 * body: 00434ab4-00434ac2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuItem_vmt_03c(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x1c))();
  }
  return;
}


