
/* ==== FUN_004de1a0 @ 004de1a0 ==== 
 * signature: undefined __stdcall FUN_004de1a0(void)
 * body: 004de1a0-004de278
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004de279-004de27f
 */

void FUN_004de1a0(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_3d;
  undefined1 *local_3c;
  undefined1 local_38 [4];
  char *local_34;
  uint local_30;
  undefined4 local_2c;
  undefined **local_28 [3];
  undefined1 local_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570dd0;
  pvStack_c = ExceptionList;
  local_38[0] = local_3d;
  uVar3 = 0xffffffff;
  pcVar5 = s_invalid_vector<T>_subscript_005a9a38;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_34 = (char *)0x0;
  local_30 = 0;
  local_2c = 0;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_00402a00(local_38,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_invalid_vector<T>_subscript_005a9a38;
    pcVar6 = local_34;
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
    local_34[uVar3] = '\0';
    local_30 = uVar3;
  }
  local_4 = 0;
  local_3c = &DAT_00712694;
  FUN_00558853(local_28,&local_3c);
  local_4._0_1_ = 1;
  local_1c[0] = local_38[0];
  FUN_004028f0(local_1c,'\0');
  FUN_004093c0(local_1c,local_38,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  local_28[0] = &PTR_FUN_00578e84;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_0057f4e0);
}


