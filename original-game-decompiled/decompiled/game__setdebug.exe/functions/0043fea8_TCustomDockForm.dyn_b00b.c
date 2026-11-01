
/* ==== TCustomDockForm.dyn_b00b @ 0043fea8 ==== 
 * signature: undefined TCustomDockForm.dyn_b00b(void)
 * body: 0043fea8-0043fee3
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomDockForm_dyn_b00b(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar3;
  
  TWinControl_dyn_b00b(param_1);
  if ((*(byte *)(param_1 + 8) & 8) == 0) {
    iVar1 = FUN_004291ac((int)param_1);
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        piVar2 = (int *)FUN_004291c0((int)param_1,iVar3);
        TLabel_set_Visible(piVar2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                           *(undefined1 *)((int)param_1 + 0x47)),extraout_ECX);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}


