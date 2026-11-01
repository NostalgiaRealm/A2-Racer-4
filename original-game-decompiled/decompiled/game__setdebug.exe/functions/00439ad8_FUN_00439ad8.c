
/* ==== FUN_00439ad8 @ 00439ad8 ==== 
 * signature: undefined4 __register FUN_00439ad8(void)
 * body: 00439ad8-00439af7
 */

undefined4 FUN_00439ad8(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  uVar1 = 0xffffffff;
  if (*in_stack_00000008 == in_stack_00000004) {
    uVar1 = 0;
    *(undefined1 *)(in_stack_00000008 + 1) = 1;
  }
  return uVar1;
}


