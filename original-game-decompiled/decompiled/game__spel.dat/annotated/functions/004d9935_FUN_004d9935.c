
/* ==== FUN_004d9935 @ 004d9935 ==== 
 * signature: undefined __fastcall FUN_004d9935(undefined4 param_1, char param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * body: 004d9935-004d9937
 */

void __fastcall
FUN_004d9935(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char *pcVar1;
  short sVar2;
  undefined4 in_EAX;
  int unaff_EBX;
  char *unaff_ESI;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  *(char *)(unaff_EBX + -0x68) = *(char *)(unaff_EBX + -0x68) + (char)((uint)unaff_EBX >> 8);
  sVar2 = (short)CONCAT31((int3)((uint)in_EAX >> 8),0x98);
  *unaff_ESI = *unaff_ESI + param_2;
  pcVar1 = (char *)(sVar2 + -0x6f6f6f70);
  *pcVar1 = *pcVar1 + (char)(sVar2 >> 7);
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00570528;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x004d9975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_FUN_004d9a54)[param_5 + -1])();
  return;
}


