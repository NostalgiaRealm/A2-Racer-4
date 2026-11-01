
/* ==== FUN_004036bc @ 004036bc ==== 
 * signature: undefined4 __register FUN_004036bc(void)
 * body: 004036bc-004036f1
 */

undefined4 FUN_004036bc(void)

{
  int iVar1;
  code *extraout_ECX;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((*(uint *)(in_stack_00000004 + 4) & 6) != 0) {
    iVar1 = *(int *)(in_stack_00000008 + 4);
    *(undefined4 *)(in_stack_00000008 + 4) = 0x4036ec;
    FUN_004033a4(in_stack_00000004,in_stack_00000008,(char *)(iVar1 + 5));
    (*extraout_ECX)();
  }
  return 1;
}


