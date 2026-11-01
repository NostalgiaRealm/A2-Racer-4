
/* ==== FUN_0049fde5 @ 0049fde5 ==== 
 * signature: undefined FUN_0049fde5(void)
 * body: 0049fde5-0049fe66
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0049fead) overlaps instruction at (ram,0x0049feac)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0049fe13) */
/* WARNING: Removing unreachable block (ram,0x0049fe96) */
/* WARNING: Removing unreachable block (ram,0x0049fe35) */
/* WARNING: Removing unreachable block (ram,0x0049fe4b) */
/* WARNING: Removing unreachable block (ram,0x0049feac) */
/* WARNING: Removing unreachable block (ram,0x0049feb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049fde5(char *param_1,undefined4 param_2,int param_3,undefined2 param_4,char param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  undefined4 *unaff_EBX;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  int in_stack_00000000;
  uint uVar7;
  
  pbVar4 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),(char)param_1 + *param_1);
  verw();
  piVar6 = (int *)(param_3 + -1);
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + (byte)piVar6;
  out(*(undefined4 *)(unaff_ESI + 1),(short)param_2);
  if (CARRY1(bVar1,(byte)piVar6)) {
    (**(code **)(param_3 + 0xe7))(pbVar4,param_2);
    return;
  }
  iVar5 = *piVar6;
  *piVar6 = *piVar6 + -1;
  puVar3 = PTR_DAT_004ab694;
  if (*piVar6 != 0) {
    uVar2 = in((short)param_2);
    *unaff_EDI = uVar2;
    uVar2 = in(param_4);
    *unaff_EBX = uVar2;
    if ((!SBORROW4(iVar5,1)) &&
       ((longlong)(int)((longlong)_DAT_001577d4 * 0x66540b72) !=
        (longlong)_DAT_001577d4 * 0x66540b72)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(in_stack_00000000 + 0xb10e8c6) = *(char *)(in_stack_00000000 + 0xb10e8c6) + param_5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  TBaseFormOneWay_FormShow((int)pbVar4);
  iVar5 = FUN_0048c624(*(int *)(*(int *)puVar3 + 0xc0));
  FUN_00489e40(*(int **)(*(int *)puVar3 + 0xb4),*(int **)(pbVar4 + 0x2fc),(undefined4 *)"trname",
               *(int *)(iVar5 + 8));
  iVar5 = FUN_0048c624(*(int *)(*(int *)puVar3 + 0xc0));
                    /* WARNING: Bad instruction - Truncating control flow here */
  TGroupBox_set_Caption(*(int *)(pbVar4 + 0x2f8),*(uint **)(iVar5 + 0x40));
  iVar5 = FUN_00480390(*(int *)puVar3,0);
  FUN_00489e40(*(int **)(*(int *)puVar3 + 0xb4),*(int **)(pbVar4 + 0x2dc),(undefined4 *)"win_ch",
               *(int *)(iVar5 + 8));
  iVar5 = FUN_00480390(*(int *)puVar3,0);
  FUN_00489e40(*(int **)(*(int *)puVar3 + 0xb4),*(int **)(pbVar4 + 0x308),(undefined4 *)"chara_",
               *(int *)(iVar5 + 8));
  uVar7 = 2;
  iVar5 = FUN_00480390(*(int *)puVar3,0);
  FUN_004806b0(*(int **)puVar3,0x49ff8c,*(int *)(iVar5 + 8),uVar7);
  TTimer_set_Interval(*(int *)(pbVar4 + 0x300),0x1194);
  TTimer_set_Enabled(*(int *)(pbVar4 + 0x300),'\x01');
  (**(code **)(**(int **)(pbVar4 + 0x2f0) + 0xb4))();
  return;
}


