
/* ==== FUN_004e1ce0 @ 004e1ce0 ==== 
 * signature: undefined4 * __thiscall FUN_004e1ce0(void * this, int * param_1, int param_2, undefined4 param_3, undefined2 param_4)
 * body: 004e1ce0-004e1dad
 */

undefined4 * __thiscall
FUN_004e1ce0(void *this,int *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 *this_00;
  char cVar1;
  uint uVar2;
  char *pcVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571543;
  local_c = ExceptionList;
  this_00 = (undefined1 *)((int)this + 0xc);
  ExceptionList = &local_c;
  *this_00 = (undefined1)param_4;
  FUN_004028f0(this_00,'\0');
  uVar2 = 0xffffffff;
  pcVar3 = s__none_005b715c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(this_00,(undefined4 *)s__none_005b715c,~uVar2 - 1);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 4) = 0x33;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x24) = 0xffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x29) = 0;
  *(undefined1 *)((int)this + 0x40) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x3c) = &PTR_FUN_00577df4;
  local_4 = 1;
  *(undefined ***)this = &PTR_FUN_00578024;
  FUN_004d3e90(this,param_1,param_2,param_3,param_4);
  FUN_004e5850((undefined4 *)((int)this + 0x3c),param_1);
  ExceptionList = local_c;
  return this;
}


