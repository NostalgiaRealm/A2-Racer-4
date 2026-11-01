
/* ==== FUN_004e9840 @ 004e9840 ==== 
 * signature: undefined4 * __thiscall FUN_004e9840(void * this, int * param_1)
 * body: 004e9840-004e98a7
 */

undefined4 * __thiscall FUN_004e9840(void *this,int *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00571fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 6;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00578180;
  FUN_004e36a0(this,param_1);
  FUN_004dbf50(param_1,(undefined4 *)((int)this + 0x10));
  ExceptionList = local_c;
  return this;
}


