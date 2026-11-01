
/* ==== FUN_004d987b @ 004d987b ==== 
 * signature: undefined __thiscall FUN_004d987b(void * this)
 * body: 004d987b-004d98af
 */

void __thiscall FUN_004d987b(void *this)

{
  undefined4 uVar1;
  int iVar2;
  void *in_stack_00000018;
  undefined4 *in_stack_00000028;
  
  iVar2 = *(int *)((int)this + 8) + -4;
  *(int *)((int)this + 8) = iVar2;
  uVar1 = *(undefined4 *)(*(int *)((int)this + 4) + iVar2);
  in_stack_00000028[2] = 2;
  in_stack_00000028[4] = uVar1;
  *in_stack_00000028 = &PTR_FUN_005778c0;
  ExceptionList = in_stack_00000018;
  return;
}


