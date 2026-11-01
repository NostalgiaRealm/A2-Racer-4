
/* ==== FUN_100137c0 @ 100137c0 ==== 
 * signature: undefined8 __cdecl FUN_100137c0(byte * param_1)
 * body: 100137c0-100138e8
 */

undefined8 __cdecl FUN_100137c0(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  uint local_1c;
  uint local_18;
  undefined8 local_10;
  uint local_8;
  
  while( true ) {
    if (DAT_10030214 < 2) {
      local_18 = *(ushort *)(PTR_DAT_10030008 + (uint)*param_1 * 2) & 8;
    }
    else {
      local_18 = FUN_1000b640((uint)*param_1,8);
    }
    if (local_18 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  if ((uVar2 == 0x2d) || (pbVar1 = param_1 + 1, local_8 = uVar2, uVar2 == 0x2b)) {
    local_8 = (uint)param_1[1];
    pbVar1 = param_1 + 2;
  }
  param_1 = pbVar1;
  local_10 = 0;
  while( true ) {
    if (DAT_10030214 < 2) {
      local_1c = *(ushort *)(PTR_DAT_10030008 + local_8 * 2) & 4;
    }
    else {
      local_1c = FUN_1000b640(local_8,4);
    }
    if (local_1c == 0) break;
    local_10 = __allmul((uint)local_10,local_10._4_4_,10,0);
    local_10 = local_10 + (int)(local_8 - 0x30);
    local_8 = (uint)*param_1;
    param_1 = param_1 + 1;
  }
  if (uVar2 == 0x2d) {
    bVar3 = (uint)local_10 != 0;
    local_10._0_4_ = -(uint)local_10;
    local_10._4_4_ = -(local_10._4_4_ + (uint)bVar3);
  }
  return CONCAT44(local_10._4_4_,(uint)local_10);
}


