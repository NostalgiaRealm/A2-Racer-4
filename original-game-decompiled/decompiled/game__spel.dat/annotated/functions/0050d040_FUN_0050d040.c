
/* ==== FUN_0050d040 @ 0050d040 ==== 
 * signature: undefined4 * __thiscall FUN_0050d040(void * this, char * param_1)
 * body: 0050d040-0050d091
 */

undefined4 * __thiscall FUN_0050d040(void *this,char *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00573b28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0050cf40(this,param_1);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined ***)this = &PTR_FUN_00578938;
  ExceptionList = local_c;
  return this;
}


