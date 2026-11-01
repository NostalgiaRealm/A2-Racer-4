
/* ==== FUN_00487ce0 @ 00487ce0 ==== 
 * signature: undefined __stdcall FUN_00487ce0(int param_1, int param_2)
 * body: 00487ce0-00487e1f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00487e20-00487e2f
 */

void FUN_00487ce0(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined **local_98 [3];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056d496;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = FUN_004873b0(local_4c);
  local_4 = 0;
  puVar2 = FUN_004797e0(local_1c,s_Expression___005ab3b0,param_1);
  local_4._0_1_ = 1;
  puVar2 = FUN_004796b0(local_2c,puVar2,s___failed___005ab3a4);
  local_4._0_1_ = 2;
  puVar2 = FUN_0047c9a0(local_7c,puVar2,param_2);
  local_4._0_1_ = 3;
  puVar2 = FUN_004796b0(local_6c,puVar2,&DAT_005ab3a0);
  local_4._0_1_ = 4;
  puVar1 = FUN_0047c9a0(local_5c,puVar2,(int)puVar1);
  local_4._0_1_ = 5;
  puVar1 = FUN_004796b0(local_3c,puVar1,&DAT_005ab39c);
  local_4._0_1_ = 6;
  FUN_00558826(local_98);
  local_4._0_1_ = 7;
  FUN_004028f0(local_8c,'\0');
  local_4._0_1_ = 8;
  local_98[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_8c,puVar1,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,6);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_98,&DAT_0057f730);
}


