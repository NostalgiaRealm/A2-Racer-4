
/* ==== FUN_00487bc0 @ 00487bc0 ==== 
 * signature: undefined __cdecl FUN_00487bc0(int param_1, undefined1 * param_2, int param_3)
 * body: 00487bc0-00487cc8;00487cca-00487cd8
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00487cc9-00487cc9
 */

void __cdecl FUN_00487bc0(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [3];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056d43e;
  local_c = ExceptionList;
  if (param_1 == 0) {
    ExceptionList = &local_c;
    puVar1 = FUN_004873b0(local_78);
    local_4 = 0;
    puVar2 = FUN_004796b0(local_68,param_2,s___Invalid_NULL_pointer_in_005ab380);
    local_4._0_1_ = 1;
    puVar2 = FUN_0047c9a0(local_58,puVar2,param_3);
    local_4._0_1_ = 2;
    puVar2 = FUN_004796b0(local_48,puVar2,&DAT_005ab37c);
    local_4._0_1_ = 3;
    puVar1 = FUN_0047c9a0(local_38,puVar2,(int)puVar1);
    local_4._0_1_ = 4;
    FUN_00558826(local_28);
    local_4._0_1_ = 5;
    local_1c[0] = 0;
    FUN_004028f0(local_1c,'\0');
    local_4._0_1_ = 6;
    local_28[0] = &PTR_FUN_00576b14;
    FUN_004093c0(local_1c,puVar1,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_0057f730);
  }
  return;
}


