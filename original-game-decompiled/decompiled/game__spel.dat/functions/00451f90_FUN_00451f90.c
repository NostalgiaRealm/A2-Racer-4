
/* ==== FUN_00451f90 @ 00451f90 ==== 
 * signature: undefined4 __cdecl FUN_00451f90(int param_1)
 * body: 00451f90-00451fac;00451fec-00451ffd
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00451ffe-00452008
 */

undefined4 __cdecl FUN_00451f90(int param_1)

{
  switch(*(undefined4 *)(param_1 * 0xf0 + 0x2c + DAT_00715e50)) {
  case 0:
  case 2:
  case 3:
    return 1;
  case 1:
    func_0x00452020(param_1);
    FUN_00450b30(param_1,0);
    FUN_00450300(100);
    DAT_0059becc = 0x33;
    *(undefined4 *)(param_1 * 0xf0 + 0x2c + DAT_00715e50) = 2;
    return 1;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Flitspaal_object_has_ill_005a2974);
  }
}


