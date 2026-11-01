
/* ==== FUN_004928dc @ 004928dc ==== 
 * signature: undefined FUN_004928dc(void)
 * body: 004928dc-0049290f;0049296c-0049296d
 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_004928dc(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined2 uVar7;
  undefined4 unaff_EBX;
  undefined4 *puVar8;
  int iVar9;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  char in_CF;
  
  uVar7 = (undefined2)
          CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *(char *)(unaff_ESI + 0x72) + in_CF);
  uVar3 = in(uVar7);
  *unaff_EDI = uVar3;
  uVar2 = in(uVar7);
  *(undefined1 *)(unaff_EDI + 1) = uVar2;
  puVar8 = (undefined4 *)(*(int *)(unaff_EBP + 0x72) * 0x74746553);
  iVar4 = *(int *)(unaff_ESI + 0x67);
  pbVar6 = (byte *)*puVar8;
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + (byte)pbVar6;
  out(*(undefined4 *)(unaff_ESI + 1),(short)pbVar6);
  if (!CARRY1(bVar1,(byte)pbVar6)) {
    *puVar8 = unaff_EBX;
    uVar2 = in((short)pbVar6);
    *(undefined1 *)((int)unaff_EDI + 5) = uVar2;
    iVar9 = *(int *)(iVar4 * 0x49276873 + 0x72) * 0x74746553;
    *(int *)(iVar9 + -4) = *(int *)(unaff_ESI + 0x6c) * -0x6fffff8d;
    pcVar5 = *(code **)(*(int *)CONCAT22((short)((uint)param_1 >> 0x10),
                                         CONCAT11((char)((uint)param_1 >> 8) +
                                                  (char)((uint)unaff_EBX >> 8),(char)param_1)) +
                       0xe8);
    *(undefined4 *)(iVar9 + -8) = 0x49291b;
    (*pcVar5)();
    return;
  }
  return;
}


