
/* ==== FUN_0047beb0 @ 0047beb0 ==== 
 * signature: undefined4 * __thiscall FUN_0047beb0(void * this, undefined4 * param_1)
 * body: 0047beb0-0047bf33
 */

undefined4 * __thiscall FUN_0047beb0(void *this,undefined4 *param_1)

{
  undefined1 *puVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ba98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047ba80(this,param_1,1);
  local_4 = 0;
  *(undefined ***)((int)this + 0x74) = &PTR_FUN_00576b04;
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 4) = 0;
    *puVar1 = param_1._0_1_;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  *(undefined1 **)((int)this + 0x78) = puVar1;
  *(undefined ***)this = &PTR_FUN_00576ac8;
  *(undefined4 *)((int)this + 0x7c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x80) = 0x3f800000;
  ExceptionList = local_c;
  return this;
}


