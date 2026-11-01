
/* ==== FUN_00542c10 @ 00542c10 ==== 
 * signature: undefined __stdcall FUN_00542c10(void)
 * body: 00542c10-00542c86
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00542c10(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0074d694;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = FUN_00542c00;
    puVar2 = puVar2 + 1;
  }
  _DAT_0074d6a0 = FUN_00542c00;
  _DAT_0074d6a4 = FUN_00542c00;
  _DAT_0074d6ac = FUN_00542c00;
  _DAT_0074d6b0 = FUN_00542c00;
  _DAT_0074d6b4 = FUN_00542c00;
  _DAT_0074d6b8 = FUN_00542c00;
  _DAT_0074d6bc = FUN_00542c00;
  _DAT_0074d6c0 = FUN_00542c00;
  DAT_0074d694 = FUN_00542a70;
  DAT_0074d698 = FUN_00542a70;
  _DAT_0074d69c = FUN_00542a70;
  _DAT_0074d6a8 = FUN_00542a70;
  _DAT_0074d6c4 = FUN_00542880;
  _DAT_0074d6c8 = FUN_00542880;
  _DAT_0074d6cc = FUN_00542880;
  _DAT_0074d6d0 = FUN_005429a0;
  return;
}


