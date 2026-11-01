
/* ==== FUN_004e36e0 @ 004e36e0 ==== 
 * signature: undefined4 * __thiscall FUN_004e36e0(void * this, int * param_1)
 * body: 004e36e0-004e374f
 */

undefined4 * __thiscall FUN_004e36e0(void *this,int *param_1)

{
  undefined4 uVar1;
  void *pvStack_c;
  code *pcStack_8;
  void *local_4;
  
  pcStack_8 = FUN_00571828;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 4) = 3;
  local_4 = (void *)0x0;
  *(undefined ***)this = &PTR_FUN_00577af8;
  FUN_004e4030(this,param_1);
  uVar1 = FUN_004e2d10(param_1);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  uVar1 = FUN_004e2d10(param_1);
  *(undefined4 *)((int)this + 8) = uVar1;
  ExceptionList = local_4;
  return this;
}


