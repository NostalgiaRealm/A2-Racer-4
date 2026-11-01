
/* ==== FUN_10008eb0 @ 10008eb0 ==== 
 * signature: undefined4 __cdecl FUN_10008eb0(int param_1)
 * body: 10008eb0-100090b9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10008eb0(int param_1)

{
  bool bVar1;
  uint uVar2;
  code *local_20;
  undefined4 *local_1c;
  DWORD local_18;
  int local_14;
  DWORD local_c;
  DWORD *local_8;
  
  bVar1 = false;
  switch(param_1) {
  case 2:
    local_1c = &DAT_100315fc;
    local_20 = DAT_100315fc;
    bVar1 = true;
    break;
  default:
    return 0xffffffff;
  case 4:
  case 8:
  case 0xb:
    local_8 = FUN_100077b0();
    uVar2 = FUN_100090f0(param_1,local_8[0x14]);
    local_1c = (undefined4 *)(uVar2 + 8);
    local_20 = (code *)*local_1c;
    break;
  case 0xf:
    local_1c = &DAT_10031608;
    local_20 = DAT_10031608;
    bVar1 = true;
    break;
  case 0x15:
    local_1c = &DAT_10031600;
    local_20 = DAT_10031600;
    bVar1 = true;
    break;
  case 0x16:
    local_1c = &DAT_10031604;
    local_20 = DAT_10031604;
    bVar1 = true;
  }
  if (bVar1) {
    FUN_100073f0(1);
  }
  if (local_20 != (code *)0x1) {
    if (local_20 == (code *)0x0) {
      if (bVar1) {
        FUN_10007490(1);
      }
                    /* WARNING: Subroutine does not return */
      __exit(3);
    }
    if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
      local_18 = local_8[0x15];
      local_8[0x15] = 0;
      if (param_1 == 8) {
        local_c = local_8[0x16];
        local_8[0x16] = 0x8c;
      }
    }
    if (param_1 == 8) {
      for (local_14 = DAT_10030298; local_14 < DAT_10030298 + _DAT_1003029c; local_14 = local_14 + 1
          ) {
        *(undefined4 *)(local_8[0x14] + 8 + local_14 * 0xc) = 0;
      }
    }
    else {
      *local_1c = 0;
    }
    if (bVar1) {
      FUN_10007490(1);
    }
    if (param_1 == 8) {
      (*local_20)(8,local_8[0x16]);
    }
    else {
      (*local_20)(param_1);
      if ((param_1 != 0xb) && (param_1 != 4)) {
        return 0;
      }
    }
    local_8[0x15] = local_18;
    if (param_1 == 8) {
      local_8[0x16] = local_c;
    }
    return 0;
  }
  if (bVar1) {
    FUN_10007490(1);
  }
  return 0;
}


