
/* ==== FUN_004e77d9 @ 004e77d9 ==== 
 * signature: undefined __fastcall FUN_004e77d9(int param_1, int param_2, int * param_3)
 * body: 004e77d9-004e77db
 */

/* WARNING: Instruction at (ram,0x004e783d) overlaps instruction at (ram,0x004e783c)
    */

void __fastcall FUN_004e77d9(int param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_EAX;
  int unaff_EBX;
  int *unaff_EBP;
  bool in_CF;
  bool in_ZF;
  int *in_stack_ffffffcc;
  int *in_stack_ffffffd0;
  void *pvStack_c;
  code *pcStack_8;
  int iStack_4;
  
  if (!in_CF && !in_ZF) {
code_r0x004e782d:
    iStack_4 = unaff_EBX;
    FUN_004dbf50(in_stack_ffffffcc,in_stack_ffffffd0);
                    /* WARNING: Could not recover jumptable at 0x004e783c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_004e78f4)[*unaff_EBP])();
    return;
  }
  pbVar1 = (byte *)(unaff_EBX + -0x70ffb189);
  bVar2 = *pbVar1;
  bVar3 = (byte)((uint)param_2 >> 8);
  *pbVar1 = *pbVar1 + bVar3;
  if (CARRY1(bVar2,bVar3) || *pbVar1 == 0) {
    pbVar1 = (byte *)(param_1 + -0x36ffb189);
    bVar2 = *pbVar1;
    bVar3 = (byte)((uint)in_EAX >> 8);
    *pbVar1 = *pbVar1 + bVar3;
    if (CARRY1(bVar2,bVar3) || *pbVar1 == 0) {
      *(char *)(param_2 + -1) = *(char *)(param_2 + -1) + (char)((uint)param_1 >> 8);
      pcStack_8 = FUN_00571de3;
      pvStack_c = ExceptionList;
      unaff_EBX = 0;
      unaff_EBP = (int *)(param_1 + 8);
      ExceptionList = &pvStack_c;
      in_stack_ffffffcc = param_3;
      in_stack_ffffffd0 = unaff_EBP;
      goto code_r0x004e782d;
    }
  }
  else {
    *(int *)(unaff_EBX + -0x3b7cffb3) = *(int *)(unaff_EBX + -0x3b7cffb3) + -1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


