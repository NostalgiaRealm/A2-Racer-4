
/* ==== FUN_0047cb20 @ 0047cb20 ==== 
 * signature: undefined4 * __thiscall FUN_0047cb20(void * this, undefined4 * param_1)
 * body: 0047cb20-0047cb9b
 */

undefined4 * __thiscall FUN_0047cb20(void *this,undefined4 *param_1)

{
  float local_18 [3];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056bb78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0047ba80(this,param_1,0);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_00576b1c;
  local_18[0] = 1.0;
  local_18[1] = 1.0;
  local_18[2] = 1.0;
  FUN_0047cd90(this,local_18);
  *(undefined1 *)((int)this + 0x48) = 0;
  ExceptionList = local_c;
  return this;
}


