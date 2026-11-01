
/* ==== FUN_00403434 @ 00403434 ==== 
 * signature: undefined4 __register FUN_00403434(void)
 * body: 00403434-00403469
 */

undefined4 FUN_00403434(void)

{
  int iVar1;
  code *extraout_ECX;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((*(uint *)(in_stack_00000004 + 4) & 6) != 0) {
    iVar1 = *(int *)(in_stack_00000008 + 4);
    *(undefined4 *)(in_stack_00000008 + 4) = 0x403464;
    FUN_0040311c(in_stack_00000004,in_stack_00000008,(char *)(iVar1 + 5));
    (*extraout_ECX)();
  }
  return 1;
}


