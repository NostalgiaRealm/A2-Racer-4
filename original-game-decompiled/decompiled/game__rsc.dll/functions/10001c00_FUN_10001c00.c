
/* ==== FUN_10001c00 @ 10001c00 ==== 
 * signature: undefined4 __stdcall FUN_10001c00(void)
 * body: 10001c00-10001c23
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001c00(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return _DAT_100313fc;
}


