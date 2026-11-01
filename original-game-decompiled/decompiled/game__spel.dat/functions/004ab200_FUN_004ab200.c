
/* ==== FUN_004ab200 @ 004ab200 ==== 
 * signature: undefined __thiscall FUN_004ab200(void * this, uint param_1)
 * body: 004ab200-004ab2ad;004ab2b1-004ab352
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ab2ae-004ab2b0
 */

void __thiscall FUN_004ab200(void *this,uint param_1)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056f47b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)this + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    if (*(int *)((int)this + 0xc) == 1) {
      ExceptionList = &pvStack_c;
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      iVar3 = *(int *)this;
      if (iVar3 != 0) {
        FUN_005586c5(iVar3,0x50,*(int *)(iVar3 + -4),FUN_0051ed40);
        FUN_0054b339((LPVOID)(iVar3 + -4));
      }
    }
    if (*(int *)((int)this + 0xc) != 0) {
      FUN_0054b339(*(LPVOID *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY_construction__i_005b0024);
  }
  puVar1 = operator_new(param_1 * 0x50 + 4);
  uStack_4 = 0;
  if (puVar1 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = puVar1 + 1;
    *puVar1 = param_1;
    FUN_00558643(puVar5,0x50,param_1,FUN_004ab090);
  }
  uStack_4 = 0xffffffff;
  *(uint **)this = puVar5;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  pvVar2 = operator_new(param_1);
  *(void **)((int)this + 0x10) = pvVar2;
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  *(undefined4 *)((int)this + 0xc) = 1;
  iVar3 = 0;
  if (0 < (int)param_1) {
    do {
      iVar4 = iVar3 + 1;
      *(undefined1 *)(iVar3 + *(int *)((int)this + 0x10)) = 0;
      iVar3 = iVar4;
    } while (iVar4 < (int)param_1);
  }
  ExceptionList = pvStack_c;
  return;
}


