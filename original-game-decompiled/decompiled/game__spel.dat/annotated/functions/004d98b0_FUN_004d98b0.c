
/* ==== FUN_004d98b0 @ 004d98b0 ==== 
 * signature: undefined __thiscall FUN_004d98b0(void * this)
 * body: 004d98b0-004d98ce
 */

void __thiscall FUN_004d98b0(void *this)

{
  int iVar1;
  void *in_stack_00000018;
  undefined4 *in_stack_00000028;
  
  iVar1 = *(int *)((int)this + 8) + -8;
  *(int *)((int)this + 8) = iVar1;
  *(undefined8 *)(in_stack_00000028 + 4) = *(undefined8 *)(*(int *)((int)this + 4) + iVar1);
  in_stack_00000028[2] = 1;
  *in_stack_00000028 = &PTR_FUN_005778c0;
  ExceptionList = in_stack_00000018;
  return;
}


