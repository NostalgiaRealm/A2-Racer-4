
/* ==== FUN_00440d7c @ 00440d7c ==== 
 * signature: LRESULT __register FUN_00440d7c(void)
 * body: 00440d7c-00440dbc
 */

LRESULT FUN_00440d7c(void)

{
  LRESULT LVar1;
  int in_stack_00000004;
  WPARAM in_stack_00000008;
  LPARAM in_stack_0000000c;
  
  LVar1 = CallNextHookEx(DAT_004477e0,in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  if ((-1 < in_stack_00000004) && (DAT_004477c4 != 0)) {
    FUN_00442034(DAT_004477c4,in_stack_0000000c);
  }
  return LVar1;
}


