
/* ==== FUN_0044bd1c @ 0044bd1c ==== 
 * signature: LRESULT __register FUN_0044bd1c(void)
 * body: 0044bd1c-0044bd5c
 */

LRESULT FUN_0044bd1c(void)

{
  LRESULT LVar1;
  int in_stack_00000004;
  WPARAM in_stack_00000008;
  LPARAM in_stack_0000000c;
  
  LVar1 = CallNextHookEx(DAT_004ac7f0,in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  if ((-1 < in_stack_00000004) && (DAT_004ac7d4 != 0)) {
    FUN_0044d05c(DAT_004ac7d4,in_stack_0000000c);
  }
  return LVar1;
}


