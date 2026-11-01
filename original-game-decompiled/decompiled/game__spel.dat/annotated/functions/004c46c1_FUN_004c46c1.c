
/* ==== FUN_004c46c1 @ 004c46c1 ==== 
 * signature: undefined4 __fastcall FUN_004c46c1(byte * param_1, char * param_2)
 * body: 004c46c1-004c46c3
 */

undefined4 __fastcall FUN_004c46c1(byte *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *in_EAX;
  byte bVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  undefined4 unaff_EBX;
  int unaff_EBP;
  char *unaff_ESI;
  undefined4 *puVar7;
  bool in_CF;
  int *unaff_retaddr;
  undefined4 auStack_70 [4];
  undefined4 uStack_60;
  
  bVar3 = (byte)param_1;
  if (!in_CF) {
    cVar6 = (char)((uint)unaff_EBX >> 8);
    unaff_ESI[0x45] = unaff_ESI[0x45] + cVar6;
    pcVar1 = (char *)((int)in_EAX * 2 + 0x451e004c);
    *pcVar1 = *pcVar1 + cVar6;
    in_EAX[0x45] = in_EAX[0x45] + bVar3;
    pcVar1 = (char *)(unaff_EBP + 0x4c + (int)in_EAX * 2);
    cVar2 = (char)((uint)param_1 >> 8);
    *pcVar1 = *pcVar1 + cVar2;
    unaff_ESI[0x45] = unaff_ESI[0x45] + bVar3;
    cVar5 = (char)((uint)param_2 >> 8);
    *in_EAX = *in_EAX + cVar5;
    *param_2 = *param_2 + cVar2;
    param_2[0x45] = param_2[0x45] + (char)unaff_EBX;
    cVar2 = (char)((uint)in_EAX >> 8);
    in_EAX[0x45] = in_EAX[0x45] + cVar2;
    pcVar1 = (char *)((int)in_EAX * 2 + 0x4584004c);
    *pcVar1 = *pcVar1 + cVar2;
    *unaff_ESI = *unaff_ESI + cVar5;
    unaff_ESI[0x45] = unaff_ESI[0x45] + cVar2;
    in_EAX[0x45] = in_EAX[0x45] + cVar6;
    pcVar1 = (char *)(unaff_EBP + 0x4f + (int)in_EAX * 2);
    *pcVar1 = *pcVar1 + (char)param_2;
    param_2[0x45] = param_2[0x45] + (char)in_EAX;
  }
  param_2[0x4c45] = param_2[0x4c45] + bVar3;
  *param_1 = *param_1 | bVar3;
  puVar7 = auStack_70;
  for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  auStack_70[0] = 0x6c;
  FUN_004c4a60(unaff_retaddr);
  iVar4 = (**(code **)(*unaff_retaddr + 100))();
  if (iVar4 != 0) {
    hardware(iVar4);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____could_not_lock_surface___005b41ec);
  }
  return uStack_60;
}


