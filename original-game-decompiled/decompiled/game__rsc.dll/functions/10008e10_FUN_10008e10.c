
/* ==== FUN_10008e10 @ 10008e10 ==== 
 * signature: undefined4 __stdcall FUN_10008e10(int param_1)
 * body: 10008e10-10008ea1
 */

undefined4 FUN_10008e10(int param_1)

{
  undefined4 uVar1;
  code *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  FUN_100073f0(1);
  if (param_1 == 0) {
    local_c = &DAT_100315fc;
    local_10 = DAT_100315fc;
    local_8 = 2;
  }
  else {
    local_c = &DAT_10031600;
    local_10 = DAT_10031600;
    local_8 = 0x15;
  }
  if (local_10 == (code *)0x0) {
    FUN_10007490(1);
    uVar1 = 0;
  }
  else {
    if (local_10 == (code *)0x1) {
      FUN_10007490(1);
    }
    else {
      *local_c = 0;
      FUN_10007490(1);
      (*local_10)(local_8);
    }
    uVar1 = 1;
  }
  return uVar1;
}


