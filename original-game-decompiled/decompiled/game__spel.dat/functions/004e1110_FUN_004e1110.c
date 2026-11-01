
/* ==== FUN_004e1110 @ 004e1110 ==== 
 * signature: undefined4 * __thiscall FUN_004e1110(void * this, int * param_1, int param_2, undefined4 param_3, undefined2 param_4)
 * body: 004e1110-004e11f8
 */

undefined4 * __thiscall
FUN_004e1110(void *this,int *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 *this_00;
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
  pcStack_8 = FUN_005713b8;
  local_c = ExceptionList;
  this_00 = (undefined1 *)((int)this + 0xc);
  ExceptionList = &local_c;
  *this_00 = (undefined1)param_4;
  FUN_004028f0(this_00,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s__none_005b715c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(this_00,uVar3,'\x01');
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
    *(undefined1 *)(uVar3 + *(int *)((int)this + 0x10)) = 0;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 4) = 0x35;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x24) = 0xffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x29) = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00577f10;
  FUN_004d3e90(this,param_1,param_2,param_3,param_4);
  FUN_004d7450(param_1,(int)this + 0x2c);
  ExceptionList = local_c;
  return this;
}


