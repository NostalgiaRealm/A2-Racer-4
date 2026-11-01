
/* ==== FUN_0056519a @ 0056519a ==== 
 * signature: undefined4 __cdecl FUN_0056519a(short param_1)
 * body: 0056519a-005651b8
 */

undefined4 __cdecl FUN_0056519a(short param_1)

{
  short *psVar1;
  
  psVar1 = &DAT_005c91b4;
  do {
    if (param_1 == *psVar1) {
      return 0;
    }
    psVar1 = psVar1 + 1;
  } while ((int)psVar1 < 0x5c91c8);
  return 1;
}


