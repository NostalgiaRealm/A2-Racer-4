
/* ==== FUN_00561c91 @ 00561c91 ==== 
 * signature: undefined __fastcall FUN_00561c91(undefined4 param_1, undefined1 param_2)
 * body: 00561c91-00561cd5
 */

void __fastcall FUN_00561c91(undefined4 param_1,undefined1 param_2)

{
  byte bVar1;
  byte extraout_DL;
  int unaff_EBP;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  unkbyte10 extraout_ST1;
  float10 fVar2;
  unkbyte10 extraout_ST1_00;
  unkbyte10 Var3;
  undefined5 uVar4;
  
  *(undefined1 *)(unaff_EBP + -0x90) = 0xfe;
  uVar4 = FUN_00561dde(CONCAT22((short)((uint)param_1 >> 0x10),(ushort)(byte)param_1),param_2);
  bVar1 = (byte)((uint5)uVar4 >> 0x20);
  fVar2 = (float10)1 + extraout_ST0;
  Var3 = extraout_ST1;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) != 0) {
    if (DAT_0074dc44 == 1) {
      FUN_00566f61();
      bVar1 = extraout_DL;
      fVar2 = extraout_ST0_00;
      Var3 = extraout_ST1_00;
    }
    else {
      fVar2 = (float10)1 / fVar2;
    }
  }
  if ((bVar1 & 0x40) == 0) {
    fscale(fVar2,Var3);
  }
  FUN_0055e0e8();
  return;
}


