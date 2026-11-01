
/* ==== FUN_004523fc @ 004523fc ==== 
 * signature: undefined4 __register FUN_004523fc(uint param_1)
 * body: 004523fc-00452410;00452429-00452468
 */

undefined4 FUN_004523fc(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1 & 0x7f) {
  case 0:
    uVar1 = 0x20;
    break;
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 0x10;
    break;
  case 3:
    uVar1 = 0x30;
    break;
  case 4:
    uVar1 = 0x40;
    break;
  case 5:
    uVar1 = 0x30;
    break;
  default:
    FUN_00403c40("DaviMsgToWindows:  Unhandled case-part");
  }
  return uVar1;
}


