
/* ==== TDaviGraphicButton.dyn_bc2c @ 004698e0 ==== 
 * signature: undefined TDaviGraphicButton.dyn_bc2c(void)
 * body: 004698e0-00469901
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviGraphicButton_dyn_bc2c(uint param_1,int param_2)

{
  uint uVar1;
  int extraout_ECX;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 < 0) {
    param_1 = thunk_FUN_00402808(param_1);
    iVar2 = extraout_ECX;
    iVar3 = extraout_EDX;
  }
  *(int *)(iVar3 + 0xc) = iVar2;
  uVar1 = *(uint *)(param_1 + 0x3c);
  if ((int)uVar1 < 0) {
    uVar1 = thunk_FUN_00402808(uVar1);
    iVar3 = extraout_EDX_00;
  }
  *(uint *)(iVar3 + 0x10) = uVar1;
  return;
}


