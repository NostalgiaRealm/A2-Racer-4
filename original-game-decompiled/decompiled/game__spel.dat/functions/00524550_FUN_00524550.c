
/* ==== FUN_00524550 @ 00524550 ==== 
 * signature: undefined4 __cdecl FUN_00524550(int param_1)
 * body: 00524550-0052459e
 */

undefined4 __cdecl FUN_00524550(int param_1)

{
  byte bVar1;
  
  bVar1 = (&DAT_0074d338)[param_1];
  if ((((char)bVar1 < '\x06') ||
      ((double)(&DAT_0074c7d0)[param_1] != *(double *)(&DAT_0074d4c0 + (uint)bVar1 * 8))) &&
     (('\x04' < (char)bVar1 ||
      (*(int *)(&DAT_0074c7d0 + param_1) != *(int *)(&DAT_0074d4c0 + (uint)bVar1 * 8))))) {
    return 0;
  }
  return 1;
}


