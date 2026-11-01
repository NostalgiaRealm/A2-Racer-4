
/* ==== FUN_0056205a @ 0056205a ==== 
 * signature: uint __cdecl FUN_0056205a(int param_1)
 * body: 0056205a-00562084
 */

uint __cdecl FUN_0056205a(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00750088;
  while( true ) {
    if (DAT_00750088 + DAT_00750084 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


