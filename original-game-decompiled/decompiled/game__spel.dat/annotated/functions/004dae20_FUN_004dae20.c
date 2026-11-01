
/* ==== FUN_004dae20 @ 004dae20 ==== 
 * signature: undefined __thiscall FUN_004dae20(void * this, int param_1, int param_2)
 * body: 004dae20-004db1a7
 */

void __thiscall FUN_004dae20(void *this,int param_1,int param_2)

{
  char cVar1;
  code cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int in_stack_00000024;
  undefined4 in_stack_ffffff80;
  char *in_stack_ffffff84;
  int *local_50;
  undefined1 local_4c [4];
  undefined4 uStack_48;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [8];
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005707e0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_00492480((int)this + 0x2c);
  iVar4 = FUN_004d2ce0(param_1);
  if (iVar4 + 1 != iVar3) {
    FUN_004d6730();
    FUN_004d6730();
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 != *(int *)(param_1 + 8)) {
      do {
        FUN_004dbc40(local_4c,*(int *)(iVar3 + 8));
        FUN_004d6730();
        FUN_004028f0(&stack0xffffffbc,'\x01');
        iVar3 = iVar3 + 0x18;
      } while (iVar3 != *(int *)(param_1 + 8));
    }
    piVar7 = *(int **)((int)this + 0x30);
    if (piVar7 != *(int **)((int)this + 0x34)) {
      do {
        FUN_004dbc40(&stack0xffffff9c,*(int *)(*piVar7 + 0x20));
        uStack_14 = 1;
        in_stack_ffffff84 = s_Formal_arg__d___s_005b7310;
        in_stack_ffffff80 = 0x4daf68;
        FUN_004d6730();
        uStack_14 = 0xffffffff;
        FUN_004028f0(&stack0xffffffa4,'\x01');
        piVar7 = piVar7 + 1;
      } while (piVar7 != *(int **)((int)this + 0x34));
    }
    iVar3 = FUN_004db1b0((int)this);
    FUN_004797e0(&stack0xffffff80,s_Davi_script__incorrect_number_of_005b72d4,iVar3);
    FUN_004d6760(in_stack_ffffff80,in_stack_ffffff84);
    FUN_004028f0(&stack0xffffffa4,'\0');
    uVar6 = 0xffffffff;
    pcVar8 = s_Incorrect_number_of_arguments_to_005b72a4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(&stack0xffffffa4,(undefined4 *)s_Incorrect_number_of_arguments_to_005b72a4,
                 ~uVar6 - 1);
    uStack_14 = 2;
    FUN_004d6900(0xbbc,&stack0xffffffa4,(undefined1 *)((int)this + 0xc),
                 (undefined1 *)(*(int *)((int)this + 8) + 0xc));
    uStack_4 = 0xffffffff;
    FUN_004028f0(local_4c,'\x01');
  }
  local_50 = *(int **)((int)this + 0x30);
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != *(int *)(param_1 + 8)) {
    do {
      if (*(int *)(*local_50 + 0x20) != *(int *)(iVar3 + 8)) {
        iVar4 = *(int *)((int)this + 8);
        FUN_004dbc40(local_1c,*(int *)(*local_50 + 0x20));
        FUN_004dbc40(auStack_24,*(int *)(iVar3 + 8));
        puVar5 = FUN_004d7610(auStack_2c);
        FUN_004d6900(0xbbd,puVar5,(undefined1 *)((int)this + 0xc),(undefined1 *)(iVar4 + 0xc));
        if (iStack_18 != 0) {
          cVar1 = *(char *)(iStack_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            uStack_48 = 0x4db0fd;
            FUN_0054b339((char *)(iStack_18 + -1));
          }
          else {
            *(char *)(iStack_18 + -1) = cVar1 + -1;
          }
        }
        iStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        if (pcStack_8 != (code *)0x0) {
          cVar2 = pcStack_8[-1];
          if ((cVar2 == (code)0x0) || (cVar2 == (code)0xff)) {
            uStack_48 = 0x4db12e;
            FUN_0054b339(pcStack_8 + -1);
          }
          else {
            pcStack_8[-1] = (code)((char)cVar2 + -1);
          }
        }
        pcStack_8 = (code *)0x0;
        uStack_4 = 0;
        if (param_2 != 0) {
          cVar1 = *(char *)(param_2 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            uStack_48 = 0x4db167;
            FUN_0054b339((char *)(param_2 + -1));
          }
          else {
            *(char *)(param_2 + -1) = cVar1 + -1;
          }
        }
        param_2 = 0;
        param_1 = in_stack_00000024;
      }
      iVar3 = iVar3 + 0x18;
      local_50 = local_50 + 1;
    } while (iVar3 != *(int *)(param_1 + 8));
  }
  ExceptionList = pvStack_c;
  return;
}


