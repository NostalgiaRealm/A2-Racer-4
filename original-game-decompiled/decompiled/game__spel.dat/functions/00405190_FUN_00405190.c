
/* ==== FUN_00405190 @ 00405190 ==== 
 * signature: undefined4 __cdecl FUN_00405190(int param_1)
 * body: 00405190-004051b4;004051b8-00405397
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004051b5-004051b7
 */

undefined4 __cdecl FUN_00405190(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_1 < 0) || (5 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____FSM_object_index___d__d_0058f7f0);
  }
  iVar4 = param_1 * 0x294;
  uVar3 = *(uint *)(&DAT_005cea64 + iVar4);
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  if ((uVar3 & 8) == 0) {
    if ((uVar3 & 0x10) == 0) {
      if ((uVar3 & 0x20) != 0) {
        if (30.0 <= *(float *)(*(int *)(&DAT_005cea34 + iVar4) * 0xf0 + 0xc4 + DAT_00715e50)) {
          uVar3 = FUN_004a7200(*(int *)(iVar1 * 0xf0 + 0x34 + DAT_00715e50),
                               *(int *)(*(int *)(&DAT_005cea34 + iVar4) * 0xf0 + DAT_00715e50 + 0x34
                                       ));
          if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 2) {
            iVar4 = DAT_0073b0d0 +
                    *(int *)(*(int *)(&DAT_005cea34 + iVar4) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
            lVar5 = FUN_00403ea0(iVar1,*(float *)(iVar4 + 0x50),*(undefined4 *)(iVar4 + 0x54),
                                 *(float *)(iVar4 + 0x58));
            iVar1 = (int)lVar5;
            if (((0x200 < iVar1) && (iVar1 < 0x600)) || ((0xa00 < iVar1 && (iVar1 < 0xe00)))) {
              return 1;
            }
          }
        }
      }
    }
    else {
      iVar1 = *(int *)(iVar1 * 0xf0 + 0x3c + DAT_00715e50);
      iVar4 = FUN_00423290(iVar1,7);
      if (iVar4 != -1) {
        uVar2 = FUN_00423510(iVar4);
        if ((char)uVar2 == '\x01') {
          return 1;
        }
      }
      iVar1 = FUN_00423290(iVar1,6);
      if (iVar1 != -1) {
        uVar2 = FUN_00423510(iVar1);
        if ((char)uVar2 == '\x01') {
          return 1;
        }
      }
    }
  }
  else {
    iVar4 = FUN_004a7200(*(int *)(iVar1 * 0xf0 + 0x34 + DAT_00715e50),
                         *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
    if (0 < iVar4) {
      iVar1 = FUN_004a7200(*(int *)(iVar1 * 0xf0 + 0x34 + DAT_00715e50),
                           *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
      if ((iVar1 < 6) && ((int)(&DAT_005973c8)[param_1 * 0x16] < DAT_006fbaa4)) {
        return 1;
      }
    }
  }
  return 0;
}


