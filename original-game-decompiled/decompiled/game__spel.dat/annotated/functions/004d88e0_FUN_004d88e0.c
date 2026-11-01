
/* ==== FUN_004d88e0 @ 004d88e0 ==== 
 * signature: undefined4 * __thiscall FUN_004d88e0(void * this, void * param_1)
 * body: 004d88e0-004d8a10
 */

undefined4 * __thiscall FUN_004d88e0(void *this,void *param_1)

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
  pcStack_8 = FUN_0057043e;
  local_c = ExceptionList;
  uVar3 = 0xffffffff;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0xc) = param_1._0_1_;
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
  *(undefined ***)this = &PTR_FUN_00577860;
  *(undefined4 *)((int)this + 4) = 0x43;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x24) = 0xffff;
  local_4 = 0;
  FUN_004d9f00((undefined4 *)((int)this + 0x30));
  local_4._0_1_ = 1;
  FUN_004d9f00((undefined4 *)((int)this + 0x44));
  local_4._0_1_ = 2;
  FUN_004d9f00((undefined4 *)((int)this + 0x58));
  local_4._0_1_ = 3;
  FUN_004d9f00((undefined4 *)((int)this + 0x6c));
  local_4._0_1_ = 4;
  FUN_004d9f00((undefined4 *)((int)this + 0x80));
  local_4._0_1_ = 5;
  FUN_004d9f00((undefined4 *)((int)this + 0x94));
  local_4._0_1_ = 6;
  FUN_004d9f00((undefined4 *)((int)this + 0xa8));
  local_4 = CONCAT31(local_4._1_3_,7);
  *(undefined ***)this = &PTR_FUN_00577890;
  dso_load_module(this,param_1);
  ExceptionList = local_c;
  return this;
}


