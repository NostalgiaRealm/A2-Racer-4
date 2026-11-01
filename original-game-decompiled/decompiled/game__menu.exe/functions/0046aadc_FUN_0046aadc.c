
/* ==== FUN_0046aadc @ 0046aadc ==== 
 * signature: undefined __register FUN_0046aadc(int * param_1, int param_2)
 * body: 0046aadc-0046aaf6
 */

void FUN_0046aadc(int *param_1,int param_2)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = param_1[0x81] - param_2;
  if (SBORROW4(param_1[0x81],param_2)) {
    param_1 = (int *)thunk_FUN_00402808((uint)param_1);
    iVar1 = extraout_ECX;
  }
  TDaviGraphicSlider_set_Position(param_1,iVar1);
  return;
}


