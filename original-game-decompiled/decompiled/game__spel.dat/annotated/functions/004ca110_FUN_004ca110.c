
/* ==== FUN_004ca110 @ 004ca110 ==== 
 * signature: undefined __cdecl FUN_004ca110(int param_1)
 * body: 004ca110-004ca15e
 */

void __cdecl FUN_004ca110(int param_1)

{
  if (DAT_00740a18 != param_1) {
    DAT_00740a18 = param_1;
    if (param_1 != 0) {
      DAT_00740a14 = 1;
      DAT_00740a0c = *(undefined4 *)(param_1 + 0x8c);
      DAT_00740a10 = *(undefined4 *)(param_1 + 0x88);
      return;
    }
    DAT_00740a14 = 0;
    DAT_00740a0c = 0;
    DAT_00740a10 = 0;
  }
  return;
}


