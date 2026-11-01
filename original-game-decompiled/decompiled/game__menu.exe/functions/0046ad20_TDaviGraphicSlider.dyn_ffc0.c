
/* ==== TDaviGraphicSlider.dyn_ffc0 @ 0046ad20 ==== 
 * signature: undefined TDaviGraphicSlider.dyn_ffc0(void)
 * body: 0046ad20-0046ad4a;0046ad6b-0046adc5
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviGraphicSlider_dyn_ffc0(int *param_1,undefined2 *param_2,undefined4 param_3)

{
  TWinControl_dyn_ffc0((int)param_1,param_2,param_3);
  switch(*param_2) {
  case 0x21:
    FUN_0046ab38(param_1,param_1[0x7e]);
    break;
  case 0x22:
    FUN_0046aadc(param_1,param_1[0x7e]);
    break;
  case 0x23:
    TDaviGraphicSlider_set_Position(param_1,param_1[0x7f]);
    break;
  case 0x24:
    TDaviGraphicSlider_set_Position(param_1,param_1[0x80]);
    break;
  case 0x25:
  case 0x28:
    FUN_0046aadc(param_1,1);
    break;
  case 0x26:
  case 0x27:
    FUN_0046ab38(param_1,1);
  }
  return;
}


