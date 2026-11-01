
/* ==== TFont.set_Name @ 004167b4 ==== 
 * signature: undefined TFont.set_Name(void)
 * body: 004167b4-0041680d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TFont_set_Name(int *param_1,undefined4 *param_2)

{
  byte abStack_134 [11];
  byte abStack_129 [33];
  byte abStack_108 [256];
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_00416524((int)param_1,(undefined4 *)abStack_134);
    FUN_00402a2c((undefined4 *)abStack_129,0x20,0);
    FUN_00403c14(abStack_108,param_2,0xff);
    FUN_00402908(abStack_129,abStack_108,0x1f);
    FUN_0041653c(param_1,abStack_134);
  }
  return;
}


