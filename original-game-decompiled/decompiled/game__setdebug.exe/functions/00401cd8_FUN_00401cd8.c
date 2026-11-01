
/* ==== FUN_00401cd8 @ 00401cd8 ==== 
 * signature: uint __register FUN_00401cd8(int param_1)
 * body: 00401cd8-00401d44
 */

uint FUN_00401cd8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + -4);
  if ((uVar1 & 0x80000002) != 0x80000002) {
    DAT_0044742c = 4;
  }
  uVar3 = uVar1 & 0x7ffffffc;
  puVar2 = (uint *)(param_1 - uVar3);
  if (((uVar1 ^ *puVar2) & 0xfffffffe) != 0) {
    DAT_0044742c = 5;
  }
  if ((*puVar2 & 1) != 0) {
    uVar1 = puVar2[-1];
    if (uVar1 != ((int *)((int)puVar2 - uVar1))[2]) {
      DAT_0044742c = 6;
    }
    FUN_00401bc8((int *)((int)puVar2 - uVar1));
    uVar3 = uVar3 + uVar1;
  }
  return uVar3;
}


