
/* ==== TDaviGraphicSlider.dyn_0087 @ 0046b0a0 ==== 
 * signature: undefined TDaviGraphicSlider.dyn_0087(void)
 * body: 0046b0a0-0046b0ba
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviGraphicSlider_dyn_0087(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (**(code **)(*param_1 + -0x10))(param_1,param_2);
  piVar1 = (int *)(param_2 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402808(uVar3);
  }
  return;
}


