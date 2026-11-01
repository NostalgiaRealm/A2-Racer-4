
/* ==== FUN_004031c0 @ 004031c0 ==== 
 * signature: short __fastcall FUN_004031c0(int param_1)
 * body: 004031c0-004031d5
 */

short __fastcall FUN_004031c0(int param_1)

{
  float fVar1;
  byte bVar2;
  
  fVar1 = *(float *)(param_1 + 0x30);
  bVar2 = fVar1 < 0.5 | (byte)((ushort)((ushort)NAN(fVar1) << 10) >> 8) |
          (byte)((ushort)((ushort)(fVar1 == 0.5) << 0xe) >> 8);
  if (fVar1 >= 0.5 && (fVar1 == 0.5) == 0) {
    return CONCAT11(bVar2,1);
  }
  return (ushort)bVar2 << 8;
}


