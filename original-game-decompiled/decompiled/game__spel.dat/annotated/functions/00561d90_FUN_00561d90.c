
/* ==== FUN_00561d90 @ 00561d90 ==== 
 * signature: undefined4 __stdcall FUN_00561d90(void)
 * body: 00561d90-00561dbe
 */

undefined4 FUN_00561d90(void)

{
  float10 fVar1;
  undefined4 extraout_EAX;
  int unaff_EBP;
  float10 in_ST0;
  undefined4 unaff_retaddr;
  
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(in_ST0 < fVar1) << 8 | (ushort)(NAN(in_ST0) || NAN(fVar1)) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) == 0) {
    return unaff_retaddr;
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 4;
  FUN_0055e0f6();
  return extraout_EAX;
}


