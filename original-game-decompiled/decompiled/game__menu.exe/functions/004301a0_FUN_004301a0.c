
/* ==== FUN_004301a0 @ 004301a0 ==== 
 * signature: undefined FUN_004301a0(void)
 * body: 004301a0-00430228
 */

void FUN_004301a0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int in_stack_00000004;
  int aiStack_24 [4];
  int aiStack_14 [2];
  int iStack_c;
  int iStack_8;
  
  piVar3 = (int *)(in_stack_00000004 + -4);
  FUN_0040f7d0(*(undefined4 *)(*piVar3 + 0x30),*(undefined4 *)(*piVar3 + 0x34),aiStack_14);
  FUN_0042e2ac(*(int **)(*piVar3 + 0x24),aiStack_14,&iStack_c);
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 8);
  piVar2 = *(int **)(*piVar3 + 0x24);
  FUN_0040f804((piVar2[0xc] + *(int *)(iVar1 + 0x44)) - iStack_c,
               (piVar2[0xd] + *(int *)(iVar1 + 0x48)) - iStack_8,
               ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x44)) + piVar2[0xe]) -
               *(int *)(*piVar3 + 0x38),aiStack_24,
               ((*(int *)(iVar1 + 0x50) - *(int *)(iVar1 + 0x48)) + piVar2[0xf]) -
               *(int *)(*piVar3 + 0x3c));
  FUN_0042e15c(piVar2,aiStack_24);
  return;
}


