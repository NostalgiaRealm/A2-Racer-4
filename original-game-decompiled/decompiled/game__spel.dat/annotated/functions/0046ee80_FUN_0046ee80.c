
/* ==== FUN_0046ee80 @ 0046ee80 ==== 
 * signature: undefined __stdcall FUN_0046ee80(undefined4 param_1)
 * body: 0046ee80-0046ef44;0046ef48-0046ef7c;0046ef80-0046efa1
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046ef45-0046ef47 0046ef7d-0046ef7f
 */

void FUN_0046ee80(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  void *pvVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  int local_8;
  
  pcStack_c = FUN_0056afe9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_8 = 0;
  ExceptionList = &local_10;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004ea1f0(pvVar4,param_1,DAT_007408a4);
  local_28[0] = param_1._3_1_;
  uVar5 = 0xffffffff;
  local_24 = 0;
  pcVar6 = s_keyboard0_005a8930;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_20 = 0;
  local_1c = 0;
  FUN_00402940(local_28,(undefined4 *)s_keyboard0_005a8930,~uVar5 - 1);
  local_8._0_1_ = 1;
  pvVar4 = (void *)FUN_004ea0c0();
  bVar3 = FUN_004eb460(pvVar4,(int)local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_24 != 0) {
    cVar1 = *(char *)(local_24 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_24 + -1));
    }
    else {
      *(char *)(local_24 + -1) = cVar1 + -1;
    }
  }
  piVar2 = local_18;
  if (!bVar3) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Could_not_find_the_keybo_005a8960);
  }
  FUN_0046ee10(local_18);
  pvVar4 = (void *)FUN_004ea0c0();
  bVar3 = FUN_004eb460(pvVar4,(int)(piVar2 + 5));
  if (!bVar3) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_Device__s_is_not_attached__005a898c);
  }
  local_8 = 0xffffffff;
  FUN_0046fe50(local_18);
  ExceptionList = local_10;
  return;
}


