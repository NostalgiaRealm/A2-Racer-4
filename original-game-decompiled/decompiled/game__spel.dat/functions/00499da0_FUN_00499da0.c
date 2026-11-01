
/* ==== FUN_00499da0 @ 00499da0 ==== 
 * signature: undefined __thiscall FUN_00499da0(void * this, int param_1)
 * body: 00499da0-00499e30
 */

void __thiscall FUN_00499da0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined1 local_11;
  undefined4 *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e5ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = operator_new(0x20);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0049bae0(local_10);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0x3c) = puVar1;
  iVar2 = FUN_00499370((int)this);
  pvVar3 = (void *)FUN_0049bef0(iVar2);
  FUN_0049be30(*(void **)((int)this + 0x3c),pvVar3);
  local_11 = 0;
  FUN_00499390(this,&local_11);
  FUN_00499f50(this,param_1);
  ExceptionList = local_c;
  return;
}


