
/* ==== FUN_00420ba4 @ 00420ba4 ==== 
 * signature: undefined __register FUN_00420ba4(uint param_1)
 * body: 00420ba4-00420bd0
 */

void FUN_00420ba4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  while (uVar2 != 0) {
    do {
      uVar1 = uVar2 & 1;
      uVar2 = uVar2 >> 1;
    } while (uVar1 == 0);
  }
  return;
}


