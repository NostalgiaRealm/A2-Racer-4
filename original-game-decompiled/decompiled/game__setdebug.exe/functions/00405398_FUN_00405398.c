
/* ==== FUN_00405398 @ 00405398 ==== 
 * signature: LONG __register FUN_00405398(void)
 * body: 00405398-004053bf
 */

LONG FUN_00405398(void)

{
  LONG LVar1;
  int *in_stack_00000004;
  
  LVar1 = InterlockedDecrement(in_stack_00000004 + 1);
  if (LVar1 == 0) {
    (**(code **)(*in_stack_00000004 + -4))(in_stack_00000004,1);
  }
  return LVar1;
}


