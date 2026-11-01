
/* ==== FUN_004caaf0 @ 004caaf0 ==== 
 * signature: undefined4 __cdecl FUN_004caaf0(int param_1)
 * body: 004caaf0-004cab47
 */

undefined4 __cdecl FUN_004caaf0(int param_1)

{
  int iVar1;
  
  DAT_005b5db4 = param_1;
  DAT_00740a1c = LocalAlloc(0x40,param_1 * 0xc);
  if (DAT_00740a1c != (HLOCAL)0x0) {
    if (0 < param_1) {
      iVar1 = 0;
      do {
        *(undefined4 *)(iVar1 + 8 + (int)DAT_00740a1c) = 0;
        *(undefined4 *)(iVar1 + 4 + (int)DAT_00740a1c) = 0;
        *(undefined4 *)(iVar1 + (int)DAT_00740a1c) = 0;
        iVar1 = iVar1 + 0xc;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    return 0;
  }
  return 2000;
}


