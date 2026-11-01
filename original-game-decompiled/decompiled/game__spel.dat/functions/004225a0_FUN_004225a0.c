
/* ==== FUN_004225a0 @ 004225a0 ==== 
 * signature: undefined4 __stdcall FUN_004225a0(void)
 * body: 004225a0-004225c7
 */

undefined4 FUN_004225a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_005d332c;
  do {
    puVar1[-1] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 6;
  } while ((int)puVar1 < 0x5d33ec);
  return 1;
}


