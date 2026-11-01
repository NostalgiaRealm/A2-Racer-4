
/* ==== FUN_00470ea0 @ 00470ea0 ==== 
 * signature: undefined __fastcall FUN_00470ea0(int param_1)
 * body: 00470ea0-00470f49
 */

void __fastcall FUN_00470ea0(int param_1)

{
  char cVar1;
  void *this;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  int local_8;
  
  pcStack_c = FUN_0056b245;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_005a8bc4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_8 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  ExceptionList = &local_10;
  FUN_00402940(local_28,(undefined4 *)s_keyboard0_005a8bc4,~uVar3 - 1);
  local_8._0_1_ = 1;
  this = (void *)FUN_004ea0c0();
  uVar2 = FUN_004eb7d0(this,(int)local_28);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
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
  FUN_004706d0();
  ExceptionList = local_10;
  return;
}


