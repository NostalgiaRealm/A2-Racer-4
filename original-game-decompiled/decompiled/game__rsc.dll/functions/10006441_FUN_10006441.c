
/* ==== FUN_10006441 @ 10006441 ==== 
 * signature: undefined4 __fastcall FUN_10006441(int param_1, int param_2)
 * body: 10006441-10006443
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 __fastcall FUN_10006441(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  char *in_EAX;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *unaff_EBP;
  undefined4 *puVar7;
  int unaff_ESI;
  undefined1 *unaff_EDI;
  undefined2 in_FS;
  undefined4 uStack_8;
  
  cVar5 = (char)param_2;
  in_EAX[-0x201000] = in_EAX[-0x201000] + cVar5;
  uVar3 = in((short)param_2);
  *unaff_EDI = uVar3;
  pcVar1 = in_EAX + -0x201000;
  *pcVar1 = *pcVar1 + cVar5;
  if (*pcVar1 == '\0') {
    *in_EAX = *in_EAX + cVar5;
    puVar6 = (undefined4 *)&stack0xfffffffc;
    puVar7 = (undefined4 *)&stack0xfffffffc;
    cVar2 = '\x0f';
    do {
      unaff_EBP = unaff_EBP + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *unaff_EBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
  }
  else {
    cVar2 = *in_EAX;
    *in_EAX = *in_EAX + cVar5;
    if (SCARRY1(cVar2,cVar5) == *in_EAX < '\0') {
      *in_EAX = *in_EAX + cVar5;
      *(undefined2 *)((int)in_EAX * 2 + 0x10) = in_FS;
      *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x21) =
           *(undefined4 *)(unaff_ESI + 0x20 + param_1 * 4);
      *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x1d) =
           *(undefined4 *)(unaff_ESI + 0x1c + param_1 * 4);
      *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x19) =
           *(undefined4 *)(unaff_ESI + 0x18 + param_1 * 4);
      *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x15) =
           *(undefined4 *)(unaff_ESI + 0x14 + param_1 * 4);
      *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x11) =
           *(undefined4 *)(unaff_ESI + 0x10 + param_1 * 4);
      *(undefined4 *)(unaff_EDI + param_1 * 4 + 0xd) =
           *(undefined4 *)(unaff_ESI + 0xc + param_1 * 4);
      *(undefined4 *)(unaff_EDI + param_1 * 4 + 9) = *(undefined4 *)(unaff_ESI + 8 + param_1 * 4);
                    /* WARNING: Could not recover jumptable at 0x100064a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(&switchD_10006387::switchdataD_100064b0)[param_2])();
      return uVar4;
    }
    *in_EAX = *in_EAX + cVar5;
    puVar7 = unaff_EBP;
  }
  uVar3 = in((short)param_2);
  pcVar1 = (char *)((int)&ExceptionList + CONCAT31((int3)((uint)in_EAX >> 8),uVar3));
  *pcVar1 = *pcVar1 + cVar5;
  return puVar7[2];
}


