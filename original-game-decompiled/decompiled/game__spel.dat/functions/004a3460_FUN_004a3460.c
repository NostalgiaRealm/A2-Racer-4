
/* ==== FUN_004a3460 @ 004a3460 ==== 
 * signature: undefined __stdcall FUN_004a3460(void)
 * body: 004a3460-004a3547;004a354a-004a3567
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a3548-004a3549
 */

void FUN_004a3460(void)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [3];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056eed8;
  local_c = ExceptionList;
  if (DAT_005af188 != 0) {
    DAT_005af188 = DAT_005af188 << 1;
    return;
  }
  uVar3 = 0xffffffff;
  local_54 = 0;
  pcVar4 = s_No_more_unique_collision_IDs_005af1e4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_50 = 0;
  local_4c = 0;
  ExceptionList = &local_c;
  FUN_00402940(local_58,(undefined4 *)s_No_more_unique_collision_IDs_005af1e4,~uVar3 - 1);
  local_4 = 0;
  puVar2 = FUN_0049df90(local_48,(byte *)s_Physics_exception_in___s___d__005af050);
  local_4._0_1_ = 1;
  puVar2 = FUN_0047c9a0(local_38,puVar2,(int)local_58);
  local_4._0_1_ = 2;
  FUN_00558826(local_28);
  local_4._0_1_ = 3;
  FUN_004028f0(local_1c,'\0');
  local_4._0_1_ = 4;
  local_28[0] = &PTR_FUN_005771c8;
  FUN_004093c0(local_1c,puVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583178);
}


