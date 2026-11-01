
/* ==== FUN_00455a5c @ 00455a5c ==== 
 * signature: undefined __register FUN_00455a5c(void)
 * body: 00455a5c-00455ab2
 */

void FUN_00455a5c(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_stack_00000004;
  
  piVar3 = (int *)(in_stack_00000004 + -0x2c);
  iVar1 = *(int *)(in_stack_00000004 + -0x14);
  *(int *)(*piVar3 + 0x474) = iVar1;
  uVar2 = FUN_0040277c(iVar1);
  *(undefined4 *)(*piVar3 + 0x440) = uVar2;
  *(undefined4 *)(*(int *)(*piVar3 + 0xc) + 0x14) = *(undefined4 *)(*piVar3 + 0x474);
  FUN_004126b8(*(int **)(in_stack_00000004 + -0x30),*(undefined4 *)(*piVar3 + 0x440),
               *(int *)(*piVar3 + 0x474));
  return;
}


