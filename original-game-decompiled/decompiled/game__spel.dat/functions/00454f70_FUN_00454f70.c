
/* ==== FUN_00454f70 @ 00454f70 ==== 
 * signature: undefined4 __cdecl FUN_00454f70(int param_1)
 * body: 00454f70-00455041
 */

undefined4 __cdecl FUN_00454f70(int param_1)

{
  if (DAT_005a3ab4 == 0) {
    *(undefined4 *)(DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 8) = 2;
  }
  else {
    if (DAT_005a3ab4 == 2) {
      *(undefined4 *)(DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 8) = 1;
      FUN_00455050();
      return 1;
    }
    if (DAT_005a3ab4 == 3) {
      *(undefined4 *)(DAT_0073b0d0 + *(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 8) = 0;
      FUN_00455050();
      return 1;
    }
  }
  FUN_00455050();
  return 1;
}


