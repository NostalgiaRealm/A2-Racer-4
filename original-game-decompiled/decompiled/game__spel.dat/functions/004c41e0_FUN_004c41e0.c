
/* ==== FUN_004c41e0 @ 004c41e0 ==== 
 * signature: undefined __stdcall FUN_004c41e0(void)
 * body: 004c41e0-004c42c5;004c42cd-004c4321;004c4325-004c4328
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c42c6-004c42cc 004c4322-004c4324
 */

void FUN_004c41e0(void)

{
  char cVar1;
  int iVar2;
  tagPOINT local_28;
  tagRECT local_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = FUN_004c3f70();
  if (cVar1 == '\0') {
    local_28.x = 0;
    local_28.y = 0;
  }
  else {
    GetClientRect(DAT_007408a4,&local_20);
    local_28.x = local_20.left;
    local_28.y = local_20.top;
    ClientToScreen(DAT_007408a4,&local_28);
  }
  local_20.right = local_20.right + local_28.x;
  local_20.bottom = local_20.bottom + local_28.y;
  local_8 = DAT_005b3798;
  local_10 = 0;
  local_c = 0;
  local_4 = DAT_005b379c;
  local_20.left = local_28.x;
  local_20.top = local_28.y;
  if (DAT_005b37a8 == 0) {
    FUN_004c4a60(DAT_007408ac);
    FUN_004c4a60(DAT_007408b0);
    iVar2 = (**(code **)(*DAT_007408ac + 0x14))
                      (DAT_007408ac,&local_20,DAT_007408b0,&local_10,0x1000000,0);
    if (iVar2 != 0) {
      FUN_004c4400(iVar2);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____blitting_error___s___005b39c8);
    }
  }
  else {
    FUN_004c4a60(DAT_007408ac);
    FUN_004c4a60(DAT_007408b0);
    iVar2 = (**(code **)(*DAT_007408ac + 0x2c))(DAT_007408ac,0,1);
    if (iVar2 != 0) {
      FUN_004c4400(iVar2);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____error_flipping_surfaces_005b39e8);
    }
  }
  return;
}


