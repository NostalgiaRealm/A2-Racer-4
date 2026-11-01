
/* ==== FUN_00479a80 @ 00479a80 ==== 
 * signature: void * __thiscall FUN_00479a80(void * this, void * param_1, uint param_2)
 * body: 00479a80-00479b51;00479b54-00479b79
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00479b52-00479b53
 */

void * __thiscall FUN_00479a80(void *this,void *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_38;
  char *local_34;
  uint local_30;
  undefined **local_28 [7];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b9e8;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    if (param_2 < (uint)((*(int *)((int)this + 8) - iVar2) / 0x18)) {
      ExceptionList = &pvStack_c;
      FUN_004cef20(param_1,iVar2 + param_2 * 0x18);
      ExceptionList = pvStack_c;
      return param_1;
    }
  }
  local_38._0_1_ = (undefined1)param_2;
  ExceptionList = &pvStack_c;
  FUN_004028f0(&local_38,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_invalid_vector<T>_subscript_005a9a38;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(&local_38,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar6 = s_invalid_vector<T>_subscript_005a9a38;
    pcVar7 = local_34;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_34[uVar4] = '\0';
    local_30 = uVar4;
  }
  local_4 = 0;
  FUN_00479b80(local_28,&local_38);
  local_28[0] = &PTR_FUN_00578e84;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_0057f4e0);
}


