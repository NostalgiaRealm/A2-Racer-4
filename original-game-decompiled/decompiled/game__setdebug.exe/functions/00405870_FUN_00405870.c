
/* ==== FUN_00405870 @ 00405870 ==== 
 * signature: undefined __register FUN_00405870(int param_1)
 * body: 00405870-00405909
 */

void FUN_00405870(int param_1)

{
  uint uVar1;
  
  if (param_1 < 0) {
    uVar1 = -param_1;
    if (0x13ff < (int)uVar1) {
      return;
    }
    if ((uVar1 >> 5 != 0) && (uVar1 >> 9 != 0)) {
      return;
    }
  }
  else if ((param_1 != 0) && (0x13ff < param_1)) {
    return;
  }
  return;
}


