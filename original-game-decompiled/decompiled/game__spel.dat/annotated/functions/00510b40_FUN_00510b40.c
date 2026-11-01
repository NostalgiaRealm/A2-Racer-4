
/* ==== FUN_00510b40 @ 00510b40 ==== 
 * signature: uint __cdecl FUN_00510b40(ushort * param_1, int param_2, uint param_3, uint param_4, undefined1 * param_5)
 * body: 00510b40-00510ba6
 */

uint __cdecl FUN_00510b40(ushort *param_1,int param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  uint uVar1;
  
  uVar1 = 0;
  if (0 < param_2) {
    do {
      if ((param_3 == *param_1) && (param_4 == param_1[1])) {
        *param_5 = 0;
        return uVar1 & 0xffff;
      }
      if ((param_3 == param_1[1]) && (param_4 == *param_1)) {
        *param_5 = 1;
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 2;
    } while ((int)uVar1 < param_2);
  }
  return 0;
}


