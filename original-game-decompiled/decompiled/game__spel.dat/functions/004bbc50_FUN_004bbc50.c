
/* ==== FUN_004bbc50 @ 004bbc50 ==== 
 * signature: undefined4 __thiscall FUN_004bbc50(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004bbc50-004bbcb9;004bbcc5-004bbd30
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bbcba-004bbcc4
 */

undefined4 __thiscall
FUN_004bbc50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x260) = param_1;
  *(undefined4 *)((int)this + 0x264) = param_2;
  *(undefined4 *)((int)this + 0x268) = param_3;
  *(undefined4 *)((int)this + 0x26c) = param_4;
  FUN_004c3fa0((byte *)s_Creating_d3d_device_with_GUID__d_005b21e8);
  iVar1 = *(int *)((int)this + 0x270);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*DAT_0073b778 + 0x20))
                      (DAT_0073b778,&param_1,DAT_007408ac,(int)this + 0x25c);
    return uVar2;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____Illegal_focus_for_3d_de_005b21c0);
    }
    uVar2 = (**(code **)(*DAT_0073b778 + 0x20))
                      (DAT_0073b778,&param_1,DAT_00740890,(int)this + 0x25c);
    return uVar2;
  }
  uVar2 = (**(code **)(*DAT_0073b778 + 0x20))(DAT_0073b778,&param_1,DAT_007408b0,(int)this + 0x25c);
  return uVar2;
}


