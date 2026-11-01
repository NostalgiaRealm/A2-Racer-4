
/* ==== FUN_004524c4 @ 004524c4 ==== 
 * signature: undefined4 __register FUN_004524c4(uint param_1)
 * body: 004524c4-004524d8;004524f1-00452530
 */

undefined4 FUN_004524c4(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1 & 0x7f) {
  case 0:
    uVar1 = 2;
    break;
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 5;
    break;
  case 4:
    uVar1 = 4;
    break;
  case 5:
    uVar1 = 3;
    break;
  default:
    FUN_00403c40("DaviMsgBtnToWindows:  Unhandled case-part");
  }
  return uVar1;
}


