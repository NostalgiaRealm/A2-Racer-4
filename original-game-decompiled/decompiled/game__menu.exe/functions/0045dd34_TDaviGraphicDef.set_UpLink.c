
/* ==== TDaviGraphicDef.set_UpLink @ 0045dd34 ==== 
 * signature: undefined TDaviGraphicDef.set_UpLink(void)
 * body: 0045dd34-0045dd73
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviGraphicDef_set_UpLink(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)TDaviGraphicDef_get_UpLink(param_1,param_2);
  (**(code **)(*piVar1 + 8))(piVar1,param_3);
  if (param_2 == 5) {
    FUN_0045debc(param_1,0x4401);
  }
  else {
    FUN_0045debc(param_1,0x4400);
  }
  return;
}


