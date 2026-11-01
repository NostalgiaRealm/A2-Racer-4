
/* ==== FUN_004db6e0 @ 004db6e0 ==== 
 * signature: undefined4 * __thiscall FUN_004db6e0(void * this, int * param_1, int param_2, undefined4 param_3, undefined2 param_4)
 * body: 004db6e0-004db801
 */

undefined4 * __thiscall
FUN_004db6e0(void *this,int *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 local_15;
  void *local_14;
  undefined4 *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005708d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = this;
  FUN_004900f0((void *)((int)this + 0xc),s__none_005b715c,&local_15);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = &PTR_FUN_00577860;
  *(undefined4 *)((int)this + 4) = 0x3e;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x24) = 0xffff;
  local_4 = 0;
  FUN_004d9f00((undefined4 *)((int)this + 0x28));
  *(undefined ***)this = &PTR_FUN_0057797c;
  *(undefined1 *)((int)this + 0x3c) = 0;
  local_4 = 1;
  FUN_004d9f00((undefined4 *)((int)this + 0x40));
  local_4._0_1_ = 2;
  FUN_004d9f00((undefined4 *)((int)this + 0x54));
  local_10 = (undefined4 *)((int)this + 0x68);
  *(undefined1 *)((int)this + 0x6c) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *local_10 = &PTR_FUN_00577978;
  FUN_004dbb80((undefined1 *)((int)this + 0x6c),10);
  *(undefined ***)this = &PTR_FUN_00577930;
  local_4 = 5;
  FUN_004d9f00((undefined4 *)((int)this + 0x7c));
  local_4 = 6;
  *(undefined ***)this = &PTR_FUN_005779c8;
  FUN_004dcf80(this,param_1,param_2,param_3,param_4);
  FUN_004da320((undefined4 *)((int)this + 0x7c),param_1,param_2,this);
  FUN_004dcc10(param_1,(int)this + 0x90,param_2);
  ExceptionList = local_c;
  return this;
}


