
/* ==== TFont.set_Name @ 0041843c ==== 
 * signature: undefined __register TFont.set_Name(int * param_1, undefined4 * param_2)
 * body: 0041843c-00418495
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TFont_set_Name(int *param_1,undefined4 *param_2)

{
  byte abStack_134 [11];
  byte local_129 [33];
  byte local_108 [256];
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_004181ac((int)param_1,(undefined4 *)abStack_134);
    FUN_00402c30((undefined4 *)local_129,0x20,0);
    FUN_00403eb8(local_108,param_2,0xff);
    FUN_00402b0c(local_129,local_108,0x1f);
    FUN_004181c4(param_1,abStack_134);
  }
  return;
}


