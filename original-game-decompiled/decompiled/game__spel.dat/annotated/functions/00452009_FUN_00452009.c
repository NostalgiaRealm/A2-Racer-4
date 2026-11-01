
/* ==== FUN_00452009 @ 00452009 ==== 
 * signature: undefined __fastcall FUN_00452009(char * param_1, undefined4 param_2, int param_3)
 * body: 00452009-0045200b
 */

void __fastcall FUN_00452009(char *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *in_EAX;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int iVar5;
  int unaff_EDI;
  int iVar6;
  
  *in_EAX = (int)(&stack0x00000000 + *in_EAX);
  pcVar2 = (char *)(unaff_EDI + 0x20010045 + unaff_EBX);
  *pcVar2 = *pcVar2 + (char)((uint)param_2 >> 8);
  *param_1 = *param_1 + (byte)in_EAX;
  *(byte *)(unaff_EBP + 2) = *(byte *)(unaff_EBP + 2) & (byte)in_EAX;
  iVar5 = *(int *)(param_3 * 0xf0 + 0x34 + DAT_00715e50);
  if ((iVar5 < 0) || (DAT_00715f04 < iVar5)) {
    iVar5 = *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50);
  }
  iVar6 = 0;
  do {
    uVar4 = FUN_004a71e0(iVar5 + iVar6);
    iVar3 = *(int *)(DAT_00715254 + uVar4 * 4);
    iVar1 = DAT_00715f00 + iVar3 * 0x994;
    if (*(int *)(DAT_00715f00 + 0xfc + iVar3 * 0x994) == 1) {
      *(undefined4 *)(iVar1 + 0xfc) = 0;
    }
    if (*(int *)(iVar1 + 0x100) == 1) {
      *(undefined4 *)(DAT_00715f00 + 0x100 + *(int *)(DAT_00715254 + uVar4 * 4) * 0x994) = 0;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x14);
  return;
}


