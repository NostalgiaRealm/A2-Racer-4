
/* ==== FUN_00506620 @ 00506620 ==== 
 * signature: int * __thiscall FUN_00506620(void * this, int param_1)
 * body: 00506620-005066b7
 */

int * __thiscall FUN_00506620(void *this,int param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005737b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0050fca0(this);
  local_4 = 0;
  FUN_005065f0((int)this + 0x70);
  FUN_005065f0((int)this + 0xf8);
  *(undefined1 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x181) = 1;
  *(undefined1 *)((int)this + 0x182) = 2;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)((int)this + 0x185) = 2;
  *(undefined1 *)((int)this + 0x184) = 1;
  *(undefined1 *)((int)this + 0x183) = 0;
  *(undefined ***)this = &PTR_FUN_00578778;
  FUN_00506880(this,param_1);
  FUN_0050fd10(this);
  ExceptionList = local_c;
  return this;
}


