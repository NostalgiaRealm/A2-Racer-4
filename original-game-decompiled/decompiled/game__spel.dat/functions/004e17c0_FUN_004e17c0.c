
/* ==== FUN_004e17c0 @ 004e17c0 ==== 
 * signature: undefined4 * __thiscall FUN_004e17c0(void * this, int * param_1, int param_2, undefined4 param_3, undefined2 param_4)
 * body: 004e17c0-004e189d
 */

undefined4 * __thiscall
FUN_004e17c0(void *this,int *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00571458;
  local_c = ExceptionList;
  uVar3 = 0xffffffff;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  pcVar5 = s__none_005b715c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00((undefined1 *)((int)this + 0xc),uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s__none_005b715c;
    pcVar6 = *(char **)((int)this + 0x10);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(uint *)((int)this + 0x14) = uVar3;
    *(undefined1 *)(*(int *)((int)this + 0x10) + uVar3) = 0;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 4) = 0x32;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x24) = 0xffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x29) = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00577fc0;
  FUN_004d3e90(this,param_1,param_2,param_3,param_4);
  ExceptionList = local_c;
  return this;
}


