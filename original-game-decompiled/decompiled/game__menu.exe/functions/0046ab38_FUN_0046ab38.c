
/* ==== FUN_0046ab38 @ 0046ab38 ==== 
 * signature: undefined __register FUN_0046ab38(int * param_1, int param_2)
 * body: 0046ab38-0046ab4e
 */

void FUN_0046ab38(int *param_1,int param_2)

{
  int iVar1;
  int extraout_EDX;
  
  iVar1 = param_2 + param_1[0x81];
  if (SCARRY4(param_2,param_1[0x81])) {
    param_1 = (int *)thunk_FUN_00402808((uint)param_1);
    iVar1 = extraout_EDX;
  }
  TDaviGraphicSlider_set_Position(param_1,iVar1);
  return;
}


