
/* ==== entry @ 10002bd0 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 10002bd0-10002cc2
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 1;
  if ((param_2 == 0) && (DAT_10031418 == 0)) {
    local_8 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_10032f74 != (code *)0x0) {
        local_8 = (*DAT_10032f74)(param_1,param_2,param_3);
      }
      if (local_8 != 0) {
        local_8 = FUN_10002a90(param_1,param_2);
      }
      if (local_8 == 0) {
        return 0;
      }
    }
    local_8 = FUN_100082f0();
    if ((param_2 == 1) && (local_8 == 0)) {
      FUN_10002a90(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = FUN_10002a90(param_1,param_2);
      if (iVar1 == 0) {
        local_8 = 0;
      }
      if ((local_8 != 0) && (DAT_10032f74 != (code *)0x0)) {
        local_8 = (*DAT_10032f74)(param_1,param_2,param_3);
      }
    }
  }
  return local_8;
}


