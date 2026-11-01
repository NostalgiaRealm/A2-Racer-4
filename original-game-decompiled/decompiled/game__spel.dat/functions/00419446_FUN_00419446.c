
/* ==== FUN_00419446 @ 00419446 ==== 
 * signature: undefined4 __stdcall FUN_00419446(int param_1)
 * body: 00419446-0041944f
 */

undefined4 FUN_00419446(int param_1)

{
  float fVar1;
  float *pfVar2;
  undefined4 uVar3;
  float afStack_c [3];
  undefined2 uVar4;
  
  if (*(int *)(param_1 * 0xf0 + 0x10 + DAT_00715e50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Test_requested_for_a_non_00593b30);
  }
  pfVar2 = (float *)FUN_004a1d20(*(void **)(param_1 * 0xf0 + 0x10 + DAT_00715e50),afStack_c);
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


