
/* ==== FUN_004a72f0 @ 004a72f0 ==== 
 * signature: undefined __stdcall FUN_004a72f0(void)
 * body: 004a72f0-004a7312
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a72f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00715b28;
  for (iVar1 = 200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_00715e48 = 0;
  FUN_005584e0(0x4a7320);
  return;
}


