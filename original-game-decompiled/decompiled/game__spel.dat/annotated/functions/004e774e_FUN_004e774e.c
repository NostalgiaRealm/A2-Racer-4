
/* ==== FUN_004e774e @ 004e774e ==== 
 * signature: undefined __fastcall FUN_004e774e(int param_1, byte param_2, void * param_3)
 * body: 004e774e-004e774f
 */

/* WARNING: Instruction at (ram,0x004e77ae) overlaps instruction at (ram,0x004e77ad)
    */

void __fastcall FUN_004e774e(int param_1,byte param_2,void *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte unaff_BL;
  byte unaff_BH;
  void *unaff_EDI;
  int unaff_retaddr;
  
  if (CARRY1(param_2,unaff_BH) || (byte)(param_2 + unaff_BH) == '\0') {
    FUN_004d7390(unaff_EDI,unaff_retaddr);
    unaff_EDI = param_3;
  }
  else {
    pbVar1 = (byte *)((int)unaff_EDI + -0x41ffb18a);
    bVar2 = *pbVar1;
    bVar3 = (byte)((uint)param_1 >> 8);
    *pbVar1 = *pbVar1 + bVar3;
    if (!CARRY1(bVar2,bVar3) && *pbVar1 != 0) {
      cRam90004e77 = cRam90004e77 + (char)param_1;
      FUN_004dbf40(param_3,(byte)*(undefined4 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x004e7788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_LAB_004e77dc)[*(int *)(param_1 + 8)])();
      return;
    }
  }
  *(byte *)((int)unaff_EDI + 0x5e) = *(byte *)((int)unaff_EDI + 0x5e) | unaff_BL;
  return;
}


