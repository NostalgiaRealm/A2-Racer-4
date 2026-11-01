
/* ==== FUN_004b68f0 @ 004b68f0 ==== 
 * signature: undefined __thiscall FUN_004b68f0(void * this, uint param_1, uint param_2, uint param_3, uint param_4)
 * body: 004b68f0-004b6988;004b698c-004b6a18;004b6a20-004b6abb;004b6abf-004b6b5d;004b6b61-004b6bf1
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b6989-004b698b 004b6a19-004b6a1f 004b6abc-004b6abe 004b6b5e-004b6b60
 */

void __thiscall FUN_004b68f0(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  FUN_004c3fa0((byte *)s_init_animsys__meshes__d__texture_005b112c);
  if (*(int *)((int)this + 0x24) != 0) {
    if (*(int *)((int)this + 0x24) == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(*(LPVOID *)((int)this + 0x18));
    }
    if (*(int *)((int)this + 0x24) != 0) {
      FUN_0054b339(*(LPVOID *)((int)this + 0x28));
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY_construction__i_005b0024);
  }
  pvVar1 = operator_new(param_1 * 0x15);
  *(void **)((int)this + 0x18) = pvVar1;
  *(uint *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  pvVar1 = operator_new(param_1);
  *(void **)((int)this + 0x28) = pvVar1;
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  iVar2 = 0;
  *(undefined4 *)((int)this + 0x24) = 1;
  if (0 < (int)param_1) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined1 *)(*(int *)((int)this + 0x28) + -1 + iVar2) = 0;
    } while (iVar2 < (int)param_1);
  }
  if (*(int *)((int)this + 0x6a) != 0) {
    FUN_004b1e00((undefined4 *)((int)this + 0x5e));
  }
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY_construction__i_005b0024);
  }
  pvVar1 = operator_new(param_2 * 0x15);
  *(undefined4 *)((int)this + 0x5e) = pvVar1;
  *(uint *)((int)this + 0x62) = param_2;
  *(undefined4 *)((int)this + 0x66) = 0;
  pvVar1 = operator_new(param_2);
  *(void **)((int)this + 0x6e) = pvVar1;
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  iVar2 = 0;
  *(undefined4 *)((int)this + 0x6a) = 1;
  if (0 < (int)param_2) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined1 *)(*(int *)((int)this + 0x6e) + -1 + iVar2) = 0;
    } while (iVar2 < (int)param_2);
  }
  if (DAT_0073b12c != 0) {
    FUN_004b1e00(&DAT_0073b120);
  }
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY_construction__i_005b0024);
  }
  DAT_0073b120 = operator_new(param_3 << 4);
  DAT_0073b124 = param_3;
  DAT_0073b128 = 0;
  DAT_0073b130 = operator_new(param_3);
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  DAT_0073b12c = 1;
  iVar2 = 0;
  if (0 < (int)param_3) {
    do {
      iVar3 = iVar2 + 1;
      *(undefined1 *)((int)DAT_0073b130 + iVar2) = 0;
      iVar2 = iVar3;
    } while (iVar3 < (int)param_3);
  }
  if (DAT_0073b174 != 0) {
    FUN_004b1e00(&DAT_0073b168);
  }
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY_construction__i_005b0024);
  }
  DAT_0073b168 = operator_new(param_4 * 9);
  DAT_0073b16c = param_4;
  DAT_0073b170 = 0;
  DAT_0073b178 = operator_new(param_4);
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  DAT_0073b174 = 1;
  iVar2 = 0;
  if (0 < (int)param_4) {
    do {
      iVar3 = iVar2 + 1;
      *(undefined1 *)((int)DAT_0073b178 + iVar2) = 0;
      iVar2 = iVar3;
    } while (iVar3 < (int)param_4);
  }
  FUN_004b84b0((void *)((int)this + 0xa4),param_4);
  *(uint *)((int)this + 8) = param_3;
  *(uint *)((int)this + 4) = param_4;
  *(uint *)((int)this + 0xc) = param_2;
  *(uint *)((int)this + 0x10) = param_1;
  *(undefined4 *)this = 1;
  return;
}


