
/* ==== FUN_00402ff7 @ 00402ff7 ==== 
 * signature: ushort __fastcall FUN_00402ff7(int param_1)
 * body: 00402ff7-00403015
 */

ushort __fastcall FUN_00402ff7(int param_1)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = (float)*(int *)(param_1 + 0x2c);
  uVar2 = (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.0) << 0xe;
  if ((fVar1 == 0.0) != 0) {
    return uVar2;
  }
  return CONCAT11((char)(uVar2 >> 8),1);
}


