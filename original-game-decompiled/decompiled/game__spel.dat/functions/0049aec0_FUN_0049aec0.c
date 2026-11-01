
/* ==== FUN_0049aec0 @ 0049aec0 ==== 
 * signature: undefined __thiscall FUN_0049aec0(void * this, int param_1, undefined4 param_2)
 * body: 0049aec0-0049afb4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0049afb5-0049b0b4
 */

void __thiscall FUN_0049aec0(void *this,int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e84f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_0049bd10(*(void **)((int)this + 0x3c),param_1);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0049bd10(*(void **)((int)this + 0x3c),param_1);
    (**(code **)(*piVar3 + 4))(param_2);
    ExceptionList = pvStack_10;
    return;
  }
  uVar5 = 0xffffffff;
  pcVar7 = s_index_out_of_bounds_in_CRegVarAr_005ae548;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  local_2c[0] = (undefined1)param_1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  uVar4 = FUN_00402a00(local_2c,uVar5,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar7 = s_index_out_of_bounds_in_CRegVarAr_005ae548;
    pcVar8 = local_28;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_28[uVar5] = '\0';
    local_24 = uVar5;
  }
  local_4 = 0;
  local_1c[0] = (undefined1)param_1;
  FUN_004028f0(local_1c,'\0');
  local_4._0_1_ = 1;
  FUN_004093c0(local_1c,local_2c,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_1c,&DAT_005828d8);
}


