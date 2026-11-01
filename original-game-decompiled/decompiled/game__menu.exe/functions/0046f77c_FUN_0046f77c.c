
/* ==== FUN_0046f77c @ 0046f77c ==== 
 * signature: undefined FUN_0046f77c(void)
 * body: 0046f77c-0046f7e1
 */

void FUN_0046f77c(int param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  bool bVar6;
  
  bVar6 = CARRY1((byte)((uint)unaff_EBX >> 8),*(byte *)(unaff_EBX + 0x1aeff19b + unaff_EDI * 8));
  pbVar1 = (byte *)(unaff_EBP * 9 + 0x3400aa00);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1 + (byte)param_1;
  *pbVar1 = bVar3 + bVar6;
  uVar4 = (param_1 + 0x1374aaf9) - (uint)(CARRY1(bVar2,(byte)param_1) || CARRY1(bVar3,bVar6));
  if (uVar4 == 0x80040112) {
    FUN_00402ee4(**(int **)(*(int *)(unaff_EBP + 8) + -4),(byte *)(unaff_EBP + -0x108));
    *(int *)(unaff_EBP + -8) = unaff_EBP + -0x108;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uVar5 = FUN_0040b614((int)&DAT_0046bfdc,'\x01',param_2,0,unaff_EBP + -8);
    uVar4 = FUN_004036f4(uVar5);
  }
  FUN_0046c2c0(uVar4);
  return;
}


