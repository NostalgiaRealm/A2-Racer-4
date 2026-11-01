
/* ==== FUN_004d98cf @ 004d98cf ==== 
 * signature: undefined4 * __thiscall FUN_004d98cf(void * this)
 * body: 004d98cf-004d9915
 */

undefined4 * __thiscall FUN_004d98cf(void *this)

{
  undefined1 *puVar1;
  void *in_stack_00000018;
  undefined4 *in_stack_00000028;
  
  puVar1 = FUN_004d92e0(this,&stack0x00000008);
  FUN_004cf330(in_stack_00000028,puVar1);
  *in_stack_00000028 = &PTR_FUN_005778c0;
  FUN_004028f0(&stack0x00000008,'\x01');
  ExceptionList = in_stack_00000018;
  return in_stack_00000028;
}


