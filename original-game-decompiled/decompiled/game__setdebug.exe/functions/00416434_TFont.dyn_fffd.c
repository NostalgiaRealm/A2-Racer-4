
/* ==== TFont.dyn_fffd @ 00416434 ==== 
 * signature: undefined TFont.dyn_fffd(void)
 * body: 00416434-0041644d
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TFont_dyn_fffd(int param_1)

{
  TGraphicsObject_dyn_fffd(param_1);
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
  }
  return;
}


