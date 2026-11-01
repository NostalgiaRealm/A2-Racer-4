
/* ==== FUN_004a4330 @ 004a4330 ==== 
 * signature: undefined1 * __thiscall FUN_004a4330(void * this, undefined1 * param_1, int param_2, int param_3)
 * body: 004a4330-004a43cb
 */

undefined1 * __thiscall FUN_004a4330(void *this,undefined1 *param_1,int param_2,int param_3)

{
  undefined4 in_stack_ffffffd0;
  undefined4 *in_stack_ffffffd4;
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *local_14;
  undefined1 *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f10b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = operator_new(0x24);
  local_4 = 0;
  if (local_10 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_14 = FUN_004a04e0(local_10);
  }
  puVar2 = *(undefined4 **)((int)*(void **)((int)this + 0x68) + 8);
  local_4 = 0xffffffff;
  uVar1 = 0x4a438f;
  FUN_004a5620(*(void **)((int)this + 0x68),puVar2,1,&local_14);
  FUN_0041c870(&stack0xffffffd0,param_1);
  FUN_004a0970(local_14,this,in_stack_ffffffd0,in_stack_ffffffd4,uVar1,puVar2,param_2,param_3);
  ExceptionList = local_c;
  return local_14;
}


