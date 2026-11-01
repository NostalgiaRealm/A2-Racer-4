
/* ==== FUN_00561c80 @ 00561c80 ==== 
 * signature: undefined1[10] __fastcall FUN_00561c80(undefined4 param_1, undefined1 param_2)
 * body: 00561c80-00561c90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [10] __fastcall FUN_00561c80(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  ushort uVar2;
  undefined4 extraout_ECX;
  byte bVar3;
  byte extraout_DL;
  undefined1 extraout_DL_00;
  int unaff_EBP;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined1 auVar4 [10];
  float10 in_ST1;
  unkbyte10 extraout_ST1;
  float10 fVar5;
  unkbyte10 extraout_ST1_00;
  unkbyte10 Var6;
  float10 extraout_ST1_01;
  undefined5 uVar7;
  
  *(undefined1 *)(unaff_EBP + -0x90) = 0xfe;
  if ((char)((uint)param_1 >> 8) != '\0') {
    iVar1 = FUN_00561e21();
    if (iVar1 == 0) {
      auVar4 = _DAT_005c8670;
      if (*(char *)(unaff_EBP + -0x90) < '\x01') {
        *(undefined1 *)(unaff_EBP + -0x90) = 1;
      }
      return auVar4;
    }
    uVar2 = (ushort)(byte)extraout_ECX;
    if (iVar1 != 2) {
      uVar2 = CONCAT11(0xff,(byte)extraout_ECX);
    }
    param_1 = CONCAT22((short)((uint)extraout_ECX >> 0x10),uVar2);
    in_ST1 = ABS(extraout_ST1_01);
    param_2 = extraout_DL_00;
  }
  log2(in_ST1);
  uVar7 = FUN_00561dde(param_1,param_2);
  bVar3 = (byte)((uint5)uVar7 >> 0x20);
  fVar5 = (float10)1 + extraout_ST0;
  Var6 = extraout_ST1;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) != 0) {
    if (DAT_0074dc44 == 1) {
      FUN_00566f61();
      bVar3 = extraout_DL;
      fVar5 = extraout_ST0_00;
      Var6 = extraout_ST1_00;
    }
    else {
      fVar5 = (float10)1 / fVar5;
    }
  }
  if ((bVar3 & 0x40) == 0) {
    fscale(fVar5,Var6);
  }
  auVar4 = (undefined1  [10])FUN_0055e0e8();
  return auVar4;
}


