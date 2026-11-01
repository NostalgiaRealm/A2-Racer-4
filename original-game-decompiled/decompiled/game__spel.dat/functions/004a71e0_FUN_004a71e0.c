
/* ==== FUN_004a71e0 @ 004a71e0 ==== 
 * signature: uint __cdecl FUN_004a71e0(uint param_1)
 * body: 004a71e0-004a71fd
 */

uint __cdecl FUN_004a71e0(uint param_1)

{
  if (DAT_00715f04 <= (int)param_1) {
    param_1 = param_1 - DAT_00715f04;
  }
  if ((int)param_1 < 0) {
    param_1 = DAT_00715f04 - ((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f));
  }
  return param_1;
}


