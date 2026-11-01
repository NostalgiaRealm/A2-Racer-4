
/* ==== FUN_004b84b0 @ 004b84b0 ==== 
 * signature: undefined __thiscall FUN_004b84b0(void * this, uint param_1)
 * body: 004b84b0-004b852c;004b8530-004b8588
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b852d-004b852f
 */

void __thiscall FUN_004b84b0(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0xc) != 0) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(*(LPVOID *)this);
    }
    if (*(int *)((int)this + 0xc) != 0) {
      FUN_0054b339(*(LPVOID *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY_construction__i_005b0024);
  }
  pvVar1 = operator_new(param_1 * 0x19);
  *(void **)this = pvVar1;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  pvVar1 = operator_new(param_1);
  *(void **)((int)this + 0x10) = pvVar1;
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  *(undefined4 *)((int)this + 0xc) = 1;
  iVar2 = 0;
  if (0 < (int)param_1) {
    do {
      iVar3 = iVar2 + 1;
      *(undefined1 *)(iVar2 + *(int *)((int)this + 0x10)) = 0;
      iVar2 = iVar3;
    } while (iVar3 < (int)param_1);
  }
  return;
}


