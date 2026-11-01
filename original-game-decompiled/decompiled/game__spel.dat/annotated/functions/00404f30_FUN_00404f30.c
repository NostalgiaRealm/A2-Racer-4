
/* ==== FUN_00404f30 @ 00404f30 ==== 
 * signature: undefined4 __cdecl FUN_00404f30(int param_1)
 * body: 00404f30-00404f54;00404f58-0040518e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00404f55-00404f57
 */

undefined4 __cdecl FUN_00404f30(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_1 < 0) || (5 < param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____FSM_object_index___d__d_0058f790);
  }
  iVar4 = param_1 * 0x294;
  uVar1 = *(uint *)(&DAT_005cea64 + iVar4);
  iVar3 = (&DAT_005ce9e8)[param_1 * 0xa5];
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x10) == 0) {
      if ((((uVar1 & 0x20) != 0) &&
          (iVar2 = DAT_006fba58 * 0xf0 + DAT_00715e50,
          *(int *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50) == *(int *)(iVar2 + 0x34))) &&
         (35.0 < *(float *)(iVar2 + 0xc4))) {
        iVar2 = DAT_0073b0d0 + *(int *)(iVar2 + 0x24) * 0xa9;
        lVar5 = FUN_00403ea0(iVar3,*(float *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54),
                             *(float *)(iVar2 + 0x58));
        iVar3 = DAT_006fba58;
        iVar2 = (int)lVar5;
        if ((0x200 < iVar2) && (iVar2 < 0x600)) {
          *(undefined4 *)(&DAT_005cea50 + iVar4) = 0;
          *(int *)(&DAT_005cea34 + iVar4) = iVar3;
          return 3;
        }
        if ((0xa00 < iVar2) && (iVar2 < 0xe00)) {
          *(undefined4 *)(&DAT_005cea50 + iVar4) = 0;
          *(int *)(&DAT_005cea34 + iVar4) = iVar3;
          return 4;
        }
      }
    }
    else {
      iVar2 = DAT_006fba58 * 0xf0 + DAT_00715e50;
      if (*(int *)(iVar2 + 0x34) == *(int *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50)) {
        iVar2 = DAT_0073b0d0 + *(int *)(iVar2 + 0x24) * 0xa9;
        lVar5 = FUN_00403ea0(iVar3,*(float *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54),
                             *(float *)(iVar2 + 0x58));
        if ((int)lVar5 < 0x52c) {
          *(int *)(&DAT_005cea34 + iVar4) = DAT_006fba58;
          return 2;
        }
        if (0xad4 < (int)lVar5) {
          *(int *)(&DAT_005cea34 + iVar4) = DAT_006fba58;
          return 2;
        }
      }
    }
  }
  else {
    iVar2 = FUN_00407d20(*(int *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50),
                         *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
    if (-2 < iVar2) {
      iVar3 = FUN_00407d20(*(int *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50),
                           *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
      if ((iVar3 < 8) && ((int)(&DAT_005973c8)[param_1 * 0x16] < DAT_006fbaa4)) {
        *(int *)(&DAT_005cea34 + iVar4) = DAT_006fba58;
        return 1;
      }
    }
  }
  return 0;
}


