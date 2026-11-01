
/* ==== FUN_00408990 @ 00408990 ==== 
 * signature: undefined4 __register FUN_00408990(uint param_1)
 * body: 00408990-004089c8
 */

undefined4 FUN_00408990(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 & 3) == 0) {
    uVar2 = param_1 & 0xffff;
    uVar1 = 100;
    if ((uVar2 % 100 != 0) || (uVar1 = 400, uVar2 % 400 == 0)) {
      return CONCAT31((int3)(uVar2 / uVar1 >> 8),1);
    }
  }
  return 0;
}


