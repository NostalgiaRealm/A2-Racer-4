
/* ==== FUN_005581b9 @ 005581b9 ==== 
 * signature: undefined __fastcall FUN_005581b9(int param_1, int param_2)
 * body: 005581b9-005581bb
 */

void __fastcall FUN_005581b9(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 in_EAX;
  uint *unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  byte in_CF;
  bool bVar6;
  bool bVar7;
  
  bVar3 = (byte)*unaff_EBP + 0xc;
  bVar6 = 0xf3 < (byte)*unaff_EBP || CARRY1(bVar3,in_CF);
  *(byte *)unaff_EBP = bVar3 + in_CF;
  bVar3 = (byte)*unaff_EBP + 4;
  bVar7 = 0xfb < (byte)*unaff_EBP || CARRY1(bVar3,bVar6);
  *(byte *)unaff_EBP = bVar3 + bVar6;
  uVar4 = *unaff_EBP;
  bVar3 = (byte)*unaff_EBP - 4;
  *(byte *)unaff_EBP = bVar3 + bVar7;
  uVar2 = (uint)(3 < (byte)uVar4 || CARRY1(bVar3,bVar7));
  uVar4 = *unaff_EBP;
  uVar1 = *unaff_EBP;
  *unaff_EBP = uVar1 + 0x5581f4 + uVar2;
  uVar5 = in((short)param_2);
  *unaff_EBP = *unaff_EBP + 0x5581e4 + (uint)(0xffaa7e0b < uVar4 || CARRY4(uVar1 + 0x5581f4,uVar2));
  *(uint *)(unaff_EDI + -0x1c + param_1 * 4) = CONCAT31((int3)((uint)in_EAX >> 8),uVar5);
  *(undefined4 *)(unaff_EDI + -0x18 + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x18 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0x14 + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x14 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0x10 + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x10 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0xc + param_1 * 4) = *(undefined4 *)(unaff_ESI + -0xc + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -8 + param_1 * 4) = *(undefined4 *)(unaff_ESI + -8 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -4 + param_1 * 4) = *(undefined4 *)(unaff_ESI + -4 + param_1 * 4);
                    /* WARNING: Could not recover jumptable at 0x0055821f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_00558115::switchdataD_00558228)[param_2])();
  return;
}


