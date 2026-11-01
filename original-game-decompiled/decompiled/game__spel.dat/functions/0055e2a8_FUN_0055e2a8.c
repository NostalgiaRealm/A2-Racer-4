
/* ==== FUN_0055e2a8 @ 0055e2a8 ==== 
 * signature: uint __cdecl FUN_0055e2a8(undefined4 param_1, uint param_2)
 * body: 0055e2a8-0055e2bd
 */

uint __cdecl FUN_0055e2a8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}


