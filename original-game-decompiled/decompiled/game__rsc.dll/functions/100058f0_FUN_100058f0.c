
/* ==== FUN_100058f0 @ 100058f0 ==== 
 * signature: undefined4 __cdecl FUN_100058f0(int * param_1)
 * body: 100058f0-100059a6
 */

undefined4 __cdecl FUN_100058f0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if ((((param_1[3] & 3U) == 2) && ((param_1[3] & 0x108U) != 0)) &&
     (uVar2 = *param_1 - param_1[2], 0 < (int)uVar2)) {
    uVar1 = FUN_1000b7e0(param_1[4],(char *)param_1[2],uVar2);
    if (uVar1 == uVar2) {
      if ((param_1[3] & 0x80U) != 0) {
        param_1[3] = param_1[3] & 0xfffffffd;
      }
    }
    else {
      param_1[3] = param_1[3] | 0x20;
      local_8 = 0xffffffff;
    }
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return local_8;
}


