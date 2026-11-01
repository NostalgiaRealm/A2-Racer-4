
/* ==== FUN_004dc120 @ 004dc120 ==== 
 * signature: undefined4 * __thiscall FUN_004dc120(void * this, int * param_1, int param_2, undefined4 param_3, undefined2 param_4)
 * body: 004dc120-004dc201
 */

undefined4 * __thiscall
FUN_004dc120(void *this,int *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005709de;
  local_c = ExceptionList;
  uVar2 = 0xffffffff;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0xc) = param_1._0_1_;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  pcVar3 = s__none_005b715c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940((undefined1 *)((int)this + 0xc),(undefined4 *)s__none_005b715c,~uVar2 - 1);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = &PTR_FUN_00577860;
  *(undefined4 *)((int)this + 4) = 0x42;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x24) = 0xffff;
  local_4 = 0;
  FUN_004d9f00((undefined4 *)((int)this + 0x28));
  local_4._0_1_ = 1;
  FUN_004d9f00((undefined4 *)((int)this + 0x3c));
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined ***)this = &PTR_FUN_00577a10;
  FUN_004d3e90(this,param_1,param_2,param_3,param_4);
  FUN_004da320((undefined4 *)((int)this + 0x28),param_1,param_2,this);
  FUN_004da320((undefined4 *)((int)this + 0x3c),param_1,param_2,this);
  ExceptionList = local_c;
  return this;
}


