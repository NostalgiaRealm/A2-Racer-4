
/* ==== FUN_00478450 @ 00478450 ==== 
 * signature: undefined __thiscall FUN_00478450(void * this, int param_1, int param_2)
 * body: 00478450-00478582
 */

void __thiscall FUN_00478450(void *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined1 local_38 [16];
  undefined1 local_28 [4];
  undefined4 *local_24;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_0056b898;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  ExceptionList = &local_10;
  local_18 = this;
  puVar3 = &stack0xffffff88;
  if (*(int *)(param_1 * 0xf0 + 0x14 + DAT_00715e50) == 0) {
    local_28[0] = param_1._3_1_;
    ExceptionList = &local_10;
    FUN_004028f0(local_28,'\0');
    uVar4 = 0xffffffff;
    pcVar8 = (char *)&DAT_005a94dc;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar2 = FUN_00402a00(local_28,uVar4,'\x01');
    if ((char)uVar2 != '\0') {
      puVar6 = &DAT_005a94dc;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_24 = *puVar6;
        puVar6 = puVar6 + 1;
        local_24 = local_24 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)local_24 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        local_24 = (undefined4 *)((int)local_24 + 1);
      }
      FUN_004029e0(local_28,uVar4);
    }
    local_8 = 0;
    puVar3 = FUN_004797e0(local_38,s_OnFramecall__005a94cc,param_2);
    local_8._0_1_ = 1;
    iVar7 = param_1 * 0xf0 + DAT_00715e50;
    uVar2 = FUN_004cfb50(local_18,(int)local_28,(int)puVar3);
    *(undefined4 *)(iVar7 + 0x14) = uVar2;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004028f0(local_38,'\x01');
    local_8 = 0xffffffff;
    FUN_004028f0(local_28,'\x01');
    puVar3 = local_14;
  }
  local_14 = puVar3;
  local_8 = 2;
  FUN_004cfb30(&param_1,*(int **)(param_1 * 0xf0 + 0x14 + DAT_00715e50));
  ExceptionList = local_10;
  return;
}


