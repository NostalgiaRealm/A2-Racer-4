
/* ==== FUN_00404407 @ 00404407 ==== 
 * signature: undefined __cdecl FUN_00404407(uint param_1)
 * body: 00404407-0040446d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00404407(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  _DAT_00407f48 = param_1;
  puVar1 = &DAT_00407918;
  do {
    if (param_1 == *puVar1) {
      DAT_00407f44 = *(undefined4 *)(iVar2 * 8 + 0x40791c);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x407a80);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    DAT_00407f44 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (DAT_00407f44 = 8, 0xca < param_1)) {
    DAT_00407f44 = 0x16;
  }
  return;
}


