
/* ==== FUN_00560c26 @ 00560c26 ==== 
 * signature: undefined __cdecl FUN_00560c26(uint param_1)
 * body: 00560c26-00560c8c
 */

void __cdecl FUN_00560c26(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_0074dc64 = param_1;
  puVar1 = &DAT_005c87d8;
  do {
    if (param_1 == *puVar1) {
      DAT_0074dc60 = *(undefined4 *)(iVar2 * 8 + 0x5c87dc);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x5c8940);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    DAT_0074dc60 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (DAT_0074dc60 = 8, 0xca < param_1)) {
    DAT_0074dc60 = 0x16;
  }
  return;
}


