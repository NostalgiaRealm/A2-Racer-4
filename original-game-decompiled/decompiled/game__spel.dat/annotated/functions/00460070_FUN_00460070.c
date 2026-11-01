
/* ==== FUN_00460070 @ 00460070 ==== 
 * signature: undefined __fastcall FUN_00460070(int param_1)
 * body: 00460070-0046019c;004601a0-004601b0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046019d-0046019f
 */

void __fastcall FUN_00460070(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056aa9d;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff5c;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_0045e0d0(param_1);
  local_98 = *(undefined4 *)(iVar1 + 0xc);
  local_94 = *(undefined4 *)(iVar1 + 0x10);
  local_90 = *(undefined4 *)(iVar1 + 0x14);
  local_88 = 0xffff0000;
  local_80 = 0x3f7d0000;
  local_7c = 0x3f7d0000;
  local_78 = *(float *)(iVar1 + 0xc) + 0.5;
  local_74 = *(undefined4 *)(iVar1 + 0x10);
  local_70 = *(undefined4 *)(iVar1 + 0x14);
  local_68 = 0xffffff00;
  local_60 = 0x3f7d0000;
  local_5c = 0x3f7d0000;
  if (iVar1 != 0) {
    local_58 = *(undefined4 *)(param_1 + 0xc);
    local_54 = *(undefined4 *)(param_1 + 0x10);
    local_50 = *(undefined4 *)(param_1 + 0x14);
    lVar2 = __ftol();
    local_48 = (int)lVar2 << 0x18;
    local_30 = local_90;
    local_34 = local_94;
    local_40 = 0x3f7d0000;
    local_3c = 0x3f7d0000;
    local_38 = local_98;
    local_28 = 0xffff0000;
    local_20 = 0x3f7d0000;
    local_1c = 0x3f7d0000;
    iVar1 = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,5,2,&local_98,4,0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s___d__DramPrimitive_error_005a5e0c);
    }
  }
  ExceptionList = local_10;
  return;
}


