
/* ==== FUN_00407730 @ 00407730 ==== 
 * signature: undefined4 * __cdecl FUN_00407730(int param_1)
 * body: 00407730-00407765;0040776b-00407793;00407799-0040780d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00407766-0040776a 00407794-00407798
 */

undefined4 * __cdecl FUN_00407730(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  uint uVar3;
  
  this = (void *)FUN_00406eb0();
  iVar2 = FUN_00407030(this,param_1);
  if (iVar2 == -1) {
    if (DAT_005caf70 == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_There_are_no_default_cop_t_005905ac);
    }
  }
  else if ((&DAT_005caf44)[iVar2] == 0) {
    if (DAT_005caf70 == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_Cop_type__d_has_no_tactics_005905f8);
    }
  }
  else {
    uVar3 = FUN_00558625();
    if (((int)uVar3 % 100 < 0x4b) || (DAT_005caf70 == 0)) {
      uVar3 = FUN_00558625();
      iVar1 = (&DAT_005c9980)[(int)uVar3 % (int)(&DAT_005caf44)[iVar2] + iVar2 * 10];
      FUN_004c3fa0((byte *)s_Assigning__d__d_0059063c);
      return &DAT_005c9b10 + (iVar1 + iVar2 * 0x14) * 2;
    }
  }
  uVar3 = FUN_00558625();
  return &DAT_005c9b10 + (&DAT_005cadd0)[(int)uVar3 % DAT_005caf70] * 0x28;
}


