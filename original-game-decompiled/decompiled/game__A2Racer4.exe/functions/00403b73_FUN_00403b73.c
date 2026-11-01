
/* ==== FUN_00403b73 @ 00403b73 ==== 
 * signature: uint __cdecl FUN_00403b73(int param_1)
 * body: 00403b73-00403b9d
 */

uint __cdecl FUN_00403b73(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00408104;
  while( true ) {
    if (DAT_00408104 + DAT_00408100 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


