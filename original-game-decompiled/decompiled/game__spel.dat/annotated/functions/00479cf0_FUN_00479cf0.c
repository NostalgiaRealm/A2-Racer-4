
/* ==== FUN_00479cf0 @ 00479cf0 ==== 
 * signature: undefined4 * __fastcall FUN_00479cf0(int param_1)
 * body: 00479cf0-00479cfc
 */

undefined4 * __fastcall FUN_00479cf0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)&DAT_0057629c;
  }
  return puVar1;
}


