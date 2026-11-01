
/* ==== FUN_00561d89 @ 00561d89 ==== 
 * signature: undefined1[10] __stdcall FUN_00561d89(void)
 * body: 00561d89-00561d8f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [10] FUN_00561d89(void)

{
  int unaff_EBP;
  undefined1 auVar1 [10];
  
  auVar1 = _DAT_005c8670;
  if (*(char *)(unaff_EBP + -0x90) < '\x01') {
    *(undefined1 *)(unaff_EBP + -0x90) = 1;
  }
  return auVar1;
}


