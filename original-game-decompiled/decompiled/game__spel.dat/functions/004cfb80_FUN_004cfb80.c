
/* ==== FUN_004cfb80 @ 004cfb80 ==== 
 * signature: int * __thiscall FUN_004cfb80(void * this, undefined4 param_1, char param_2, int param_3)
 * body: 004cfb80-004cfc2e
 */

int * __thiscall FUN_004cfb80(void *this,undefined4 param_1,char param_2,int param_3)

{
  int iVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f96a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_3 != 0) {
    ExceptionList = &local_c;
    *(undefined **)this = &DAT_005777b0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined ***)((int)this + 8) = &PTR_FUN_00578ebc;
    local_4 = 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_FUN_00578eac;
  iVar1 = *(int *)(*(int *)this + 4);
  *(undefined4 *)(iVar1 + 0x28 + (int)this) = param_1;
  iVar1 = iVar1 + (int)this;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined1 *)(iVar1 + 0x30) = 0x20;
  FUN_0054c9f0(iVar1);
  if (*(int *)(iVar1 + 0x28) == 0) {
    FUN_0054c6db();
  }
  if (param_2 != '\0') {
    FUN_0054c9bb(iVar1);
  }
  ExceptionList = local_c;
  return this;
}


