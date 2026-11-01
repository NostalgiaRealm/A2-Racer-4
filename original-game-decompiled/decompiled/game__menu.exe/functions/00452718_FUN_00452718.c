
/* ==== FUN_00452718 @ 00452718 ==== 
 * signature: undefined4 __register FUN_00452718(uint param_1, char param_2)
 * body: 00452718-00452738;00452751-0045289b
 */

undefined4 FUN_00452718(uint param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != '\0') {
    switch(param_1 & 0x7f) {
    case 0:
      if (param_2 == '\x01') {
        uVar1 = 0;
      }
      else if (param_2 == '\x02') {
        uVar1 = 0x100;
      }
      else if (param_2 == '\x03') {
        uVar1 = 0x200;
      }
      else {
        FUN_00403c40("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 1:
      if (param_2 == '\x04') {
        uVar1 = 0;
      }
      else {
        FUN_00403c40("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 2:
      if (param_2 == '\x04') {
        uVar1 = 0;
      }
      else if (param_2 == '\x05') {
        uVar1 = 0x100;
      }
      else {
        FUN_00403c40("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 3:
      if (param_2 == '\x02') {
        uVar1 = 0;
      }
      else if (param_2 == '\x05') {
        uVar1 = 0x100;
      }
      else {
        FUN_00403c40("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 4:
      if (param_2 == '\x06') {
        uVar1 = 0;
      }
      else if (param_2 == '\a') {
        uVar1 = 0x100;
      }
      else {
        FUN_00403c40("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    case 5:
      if (param_2 == '\x05') {
        uVar1 = 0x200;
      }
      else if (param_2 == '\x06') {
        uVar1 = 0;
      }
      else if (param_2 == '\a') {
        uVar1 = 0x100;
      }
      else {
        FUN_00403c40("DaviDefaultBtnToWindows: Invalid default button");
      }
      break;
    default:
      FUN_00403c40("DaviDefaultBtnToWindows:  Unhandled case-part");
    }
  }
  return uVar1;
}


