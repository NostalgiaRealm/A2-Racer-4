
/* ==== FUN_00567434 @ 00567434 ==== 
 * signature: float10 __stdcall FUN_00567434(void)
 * body: 00567434-005674e8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00567434(void)

{
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 in_ST1;
  uint uVar2;
  float10 fVar1;
  
  uVar2 = (uint)((unkuint10)in_ST1 >> 0x20);
  if (((uint)((unkuint10)in_ST1 >> 0x30) & 0x7fff0000) != 0) {
    FUN_0056722e(SUB104(in_ST1,0),uVar2,(ushort)((unkuint10)in_ST1 >> 0x40));
    return extraout_ST0;
  }
  if (SUB104(in_ST1,0) != 0 || uVar2 != 0) {
    fVar1 = in_ST1 * (float10)_DAT_005c9574;
    FUN_0056722e(SUB104(fVar1,0),(uint)((unkuint10)fVar1 >> 0x20),(ushort)((unkuint10)fVar1 >> 0x40)
                );
    return extraout_ST0_00;
  }
  return in_ST0 - (float10)(unkint10)(in_ST0 / in_ST1) * in_ST1;
}


