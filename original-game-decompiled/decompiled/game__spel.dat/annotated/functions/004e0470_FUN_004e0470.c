
/* ==== FUN_004e0470 @ 004e0470 ==== 
 * signature: undefined4 * __thiscall FUN_004e0470(void * this, int * param_1, int param_2, undefined4 param_3, undefined2 param_4)
 * body: 004e0470-004e0554
 */

undefined4 * __thiscall
FUN_004e0470(void *this,int *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 *this_00;
  char cVar1;
  uint uVar2;
  char *pcVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571273;
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
  *(undefined4 *)((int)this + 4) = 0x38;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x24) = 0xffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x29) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xfff0bdc0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x38) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x34) = &PTR_FUN_00577df4;
  local_4 = 1;
  *(undefined ***)this = &PTR_FUN_00577eb0;
  FUN_004d3e90(this,param_1,param_2,param_3,param_4);
  FUN_004d7450(param_1,(undefined4 *)((int)this + 0x2c));
  FUN_004e5850((undefined4 *)((int)this + 0x34),param_1);
  ExceptionList = local_c;
  return this;
}


