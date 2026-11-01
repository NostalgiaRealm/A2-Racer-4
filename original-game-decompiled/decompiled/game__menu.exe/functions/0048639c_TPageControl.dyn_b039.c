
/* ==== TPageControl.dyn_b039 @ 0048639c ==== 
 * signature: undefined TPageControl.dyn_b039(void)
 * body: 0048639c-004863c7
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPageControl_dyn_b039(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  *(undefined4 *)(param_2 + 0xc) = 0;
  iVar1 = FUN_00485d98(param_1,*(int *)(param_2 + 8));
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x24c) = iVar1;
    TGroupBox_set_Align(*(int **)(param_2 + 8),0,extraout_ECX);
  }
  return;
}


