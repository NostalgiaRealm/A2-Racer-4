
/* ==== FUN_004f60e0 @ 004f60e0 ==== 
 * signature: undefined4 * __thiscall FUN_004f60e0(void * this, undefined4 param_1)
 * body: 004f60e0-004f61be
 */

undefined4 * __thiscall FUN_004f60e0(void *this,undefined4 param_1)

{
  void *this_00;
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572f61;
  local_c = ExceptionList;
  puVar1 = this;
  ExceptionList = &local_c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)((int)this + 4) = param_1;
  this_00 = operator_new(0x20);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_004f2b50(this_00,param_1);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)this = puVar1;
  puVar1 = operator_new(0x10);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005010f0(puVar1,0x10);
    *puVar1 = &PTR_FUN_0057834c;
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 8) = puVar1;
  puVar1 = operator_new(0x10);
  local_4 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  else {
    FUN_005010f0(puVar1,0x10);
    *puVar1 = &PTR_FUN_00578344;
    *(undefined4 **)((int)this + 0xc) = puVar1;
  }
  ExceptionList = local_c;
  return this;
}


