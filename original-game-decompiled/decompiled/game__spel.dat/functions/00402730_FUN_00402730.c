
/* ==== FUN_00402730 @ 00402730 ==== 
 * signature: char * __fastcall FUN_00402730(int * param_1)
 * body: 00402730-00402754
 */

char * __fastcall FUN_00402730(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return s_UNKNOWN_0058e5dc;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return &DAT_0058e5f4;
    }
    return s_BEHIND_0058e5ec;
  }
  return s_INFRONT_0058e5e4;
}


