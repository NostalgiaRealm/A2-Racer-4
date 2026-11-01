
/* ==== FUN_00413de0 @ 00413de0 ==== 
 * signature: float10 __cdecl FUN_00413de0(undefined4 param_1, byte param_2)
 * body: 00413de0-00413ee6
 */

float10 __cdecl FUN_00413de0(undefined4 param_1,byte param_2)

{
  switch(param_1) {
  case 4:
    if ((param_2 & 4) != 0) {
      return (float10)DAT_005d1b3c - (float10)5.0;
    }
    if ((param_2 & 8) != 0) {
      return (float10)DAT_005d1b3c + (float10)5.0;
    }
    if ((param_2 & 0x10) == 0) {
      return (float10)DAT_005d1b3c;
    }
    goto LAB_00413e21;
  case 5:
    if ((param_2 & 4) != 0) {
      return (float10)DAT_005d1b40 - (float10)10.0;
    }
    if ((param_2 & 8) != 0) {
      return (float10)DAT_005d1b40 + (float10)10.0;
    }
    break;
  case 6:
    if ((param_2 & 4) != 0) {
      return (float10)DAT_005d1b44 - (float10)15.0;
    }
    if ((param_2 & 8) != 0) {
      return (float10)DAT_005d1b44 + (float10)15.0;
    }
    if ((param_2 & 0x10) != 0) {
      return (float10)DAT_005d1b44 + (float10)35.0;
    }
LAB_00413e21:
    return (float10)DAT_005d1b44;
  default:
    if ((param_2 & 4) != 0) {
      return (float10)DAT_005d1b3c - (float10)5.0;
    }
    if (((param_2 & 8) == 0) && ((param_2 & 0x10) != 0)) {
      return (float10)DAT_005d1b44 + (float10)20.0;
    }
    goto LAB_00413ee0;
  case 8:
    if ((param_2 & 4) != 0) {
      return (float10)DAT_005d1b3c - (float10)5.0;
    }
    if ((param_2 & 8) != 0) goto LAB_00413ee0;
  }
  if ((param_2 & 0x10) != 0) {
    return (float10)DAT_005d1b44 + (float10)20.0;
  }
LAB_00413ee0:
  return (float10)DAT_005d1b40;
}


