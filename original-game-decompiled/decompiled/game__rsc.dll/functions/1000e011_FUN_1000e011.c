
/* ==== FUN_1000e011 @ 1000e011 ==== 
 * signature: undefined __fastcall FUN_1000e011(int param_1, int param_2)
 * body: 1000e011-1000e013
 */

void __fastcall FUN_1000e011(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar4;
  uint in_EAX;
  byte *pbVar3;
  int iVar5;
  byte bVar6;
  byte unaff_BL;
  int unaff_ESI;
  int unaff_EDI;
  bool bVar7;
  bool bVar8;
  
  pbVar3 = (byte *)(in_EAX ^ 0xe0);
  bVar6 = (byte)param_2;
  *pbVar3 = *pbVar3 + bVar6;
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar6;
  iVar5 = param_1 + -1;
  bVar2 = *pbVar3 + (byte)iVar5;
  bVar7 = CARRY1(*pbVar3,(byte)iVar5) || CARRY1(bVar2,CARRY1(bVar1,bVar6));
  *pbVar3 = bVar2 + CARRY1(bVar1,bVar6);
  bVar8 = CARRY1(*pbVar3,bVar6) || CARRY1(*pbVar3 + bVar6,bVar7);
  *pbVar3 = *pbVar3 + bVar6 + bVar7;
  bVar7 = CARRY1(*pbVar3,unaff_BL) || CARRY1(*pbVar3 + unaff_BL,bVar8);
  *pbVar3 = *pbVar3 + unaff_BL + bVar8;
  bVar1 = *pbVar3;
  bVar4 = (byte)(in_EAX >> 8);
  bVar2 = *pbVar3 + bVar4;
  *pbVar3 = bVar2 + bVar7;
  *(char *)(unaff_EDI + -0x20) =
       *(char *)(unaff_EDI + -0x20) + (char)((uint)param_2 >> 8) +
       (CARRY1(bVar1,bVar4) || CARRY1(bVar2,bVar7));
  *pbVar3 = *pbVar3 + bVar6;
  *(undefined4 *)(unaff_EDI + 0x1c + iVar5 * 4) = *(undefined4 *)(unaff_ESI + 0x1c + iVar5 * 4);
  *(undefined4 *)(unaff_EDI + 0x18 + iVar5 * 4) = *(undefined4 *)(unaff_ESI + 0x18 + iVar5 * 4);
  *(undefined4 *)(unaff_EDI + 0x14 + iVar5 * 4) = *(undefined4 *)(unaff_ESI + 0x14 + iVar5 * 4);
  *(undefined4 *)(unaff_EDI + 0x10 + iVar5 * 4) = *(undefined4 *)(unaff_ESI + 0x10 + iVar5 * 4);
  *(undefined4 *)(unaff_EDI + 0xc + iVar5 * 4) = *(undefined4 *)(unaff_ESI + 0xc + iVar5 * 4);
  *(undefined4 *)(unaff_EDI + 8 + iVar5 * 4) = *(undefined4 *)(unaff_ESI + 8 + iVar5 * 4);
  *(undefined4 *)(unaff_EDI + 4 + iVar5 * 4) = *(undefined4 *)(unaff_ESI + 4 + iVar5 * 4);
                    /* WARNING: Could not recover jumptable at 0x1000e077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_1000df57::switchdataD_1000e080)[param_2])();
  return;
}


