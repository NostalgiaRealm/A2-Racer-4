
/* ==== FUN_004230d0 @ 004230d0 ==== 
 * signature: uint __cdecl FUN_004230d0(uint param_1)
 * body: 004230d0-0042320b
 */

uint __cdecl FUN_004230d0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_1c;
  
  local_1c = 0;
  uVar3 = *(uint *)(param_1 * 0xf0 + 0x3c + DAT_00715e50);
  while (uVar3 = *(uint *)(uVar3 * 0x50 + 0x14 + DAT_00715eb8), uVar3 != 0xffffffff) {
    uVar1 = *(uint *)(uVar3 * 0x50 + 0x14 + DAT_00715eb8);
    if (uVar1 != 0xffffffff) {
      param_1 = *(uint *)(uVar1 * 0x50 + 0x14 + DAT_00715eb8);
    }
    uVar2 = *(uint *)(DAT_006fba58 * 0xf0 + 0x3c + DAT_00715e50);
    if (((uVar3 == uVar2) || (uVar1 == uVar2)) || (param_1 == uVar2)) {
      lVar4 = __ftol();
      lVar5 = __ftol();
      uVar3 = (int)lVar5 - (int)lVar4;
      if (0 < (int)uVar3) {
        uVar3 = uVar3 & 0xfff;
      }
      uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
      if ((0x700 < (int)uVar3) && ((int)uVar3 < 0x900)) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
      break;
    }
    local_1c = local_1c + 1;
    if (0 < local_1c) break;
  }
  return uVar3 & 0xffffff00;
}


