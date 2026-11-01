
/* ==== FUN_00419450 @ 00419450 ==== 
 * signature: undefined4 __cdecl FUN_00419450(int param_1)
 * body: 00419450-00419482;00419486-004194f9
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00419483-00419485
 */

undefined4 __cdecl FUN_00419450(int param_1)

{
  float fVar1;
  float *pfVar2;
  undefined4 uVar3;
  float local_c [3];
  undefined2 uVar4;
  
  if (*(int *)(param_1 * 0xf0 + 0x10 + DAT_00715e50) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Test_requested_for_a_non_00593b30);
  }
  pfVar2 = (float *)FUN_004a1d20(*(void **)(param_1 * 0xf0 + 0x10 + DAT_00715e50),local_c);
  fVar1 = ABS(*pfVar2);
  uVar4 = (undefined2)((uint)pfVar2[2] >> 0x10);
  uVar3 = CONCAT22(uVar4,(ushort)(10.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 10.0) << 0xe);
  if (10.0 < fVar1 == 0) {
    fVar1 = ABS(pfVar2[1]);
    uVar3 = CONCAT22(uVar4,(ushort)(10.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 10.0) << 0xe);
    if (10.0 < fVar1 == 0) {
      fVar1 = ABS(pfVar2[2]);
      uVar3 = CONCAT22(uVar4,(ushort)(10.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                             (ushort)(fVar1 == 10.0) << 0xe);
      if (10.0 >= fVar1) {
        return uVar3;
      }
    }
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


