
/* ==== FUN_00510589 @ 00510589 ==== 
 * signature: undefined __fastcall FUN_00510589(int param_1, int param_2)
 * body: 00510589-0051058b
 */

void __fastcall FUN_00510589(int param_1,int param_2)

{
  char cVar1;
  undefined4 in_EAX;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  char cVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  char *unaff_EDI;
  void *unaff_retaddr;
  undefined1 *puVar8;
  undefined1 auStack_14 [8];
  undefined1 auStack_c [8];
  int iStack_4;
  
  cVar1 = (char)in_EAX + *(char *)(param_1 + param_2 * 2);
  cVar7 = (char)((uint)unaff_EBX >> 8);
  *unaff_EDI = *unaff_EDI + cVar7;
  pcVar2 = (char *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cVar7);
  *pcVar2 = *pcVar2 + cVar1 + -0x5e;
  pcVar2 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar1 + -0xd);
  *pcVar2 = *pcVar2 + (char)param_1;
  cRam08005104 = cRam08005104 + (char)unaff_EBX;
  puVar3 = (uint *)(*(uint *)(param_1 + 0x2c) & 0xfffffff0);
  iVar4 = (*puVar3 & 0xfff) + 1;
  puVar5 = (uint *)(*(uint *)(param_1 + 0x48) & 0xfffffff0);
  iVar6 = (*puVar5 & 0xfff) + 1;
  if ((puVar3[iVar4 * -4 + 2] & 3) != 0) {
    if ((puVar5[iVar6 * -4 + 2] & 3) == 0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      goto LAB_00510624;
    }
    if (*(float *)((int)puVar5 + puVar5[iVar6 * -4 + 1] + 0x14 + iVar6 * -0x10) <
        *(float *)((int)puVar3 + puVar3[iVar4 * -4 + 1] + 0x14 + iVar4 * -0x10)) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      goto LAB_00510624;
    }
  }
  *(undefined4 *)(param_1 + 0x8c) = 1;
LAB_00510624:
  iStack_4 = param_1;
  FUN_0053b570(unaff_retaddr,param_1);
  puVar8 = auStack_c;
  (**(code **)**(undefined4 **)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 0x1c))
            (*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x44),auStack_14);
  FUN_0053b8a0(param_1,(float)((float10)(double)CONCAT44(unaff_EDI,puVar8) +
                              (float10)(double)CONCAT44(unaff_EBX,unaff_ESI)));
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffd3ffff | 0x100000;
  FUN_005108c0(param_1);
  return;
}


