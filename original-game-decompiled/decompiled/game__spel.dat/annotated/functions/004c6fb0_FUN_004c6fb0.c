
/* ==== FUN_004c6fb0 @ 004c6fb0 ==== 
 * signature: uint __cdecl FUN_004c6fb0(uint param_1)
 * body: 004c6fb0-004c705c;004c7060-004c70c7
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c705d-004c705f
 */

uint __cdecl FUN_004c6fb0(uint param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = (uint)(param_1 == 0);
  uVar6 = 0;
  if (0 < DAT_00740928) {
    iVar7 = uVar5 * 0x44;
    iVar4 = 0;
    do {
      if ((((uVar6 != uVar5) && (uVar6 != param_1)) &&
          (bVar3 = FUN_004c6bd0(uVar6), CONCAT31(extraout_var,bVar3) == 0)) &&
         (*(int *)(iVar4 + 0x38 + DAT_00740934) < *(int *)(iVar7 + 0x38 + DAT_00740934))) {
        uVar5 = uVar6;
        iVar7 = iVar4;
      }
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0x44;
    } while ((int)uVar6 < DAT_00740928);
  }
  FUN_004c3fa0((byte *)s_deleting__d_005b5090);
  iVar4 = uVar5 * 0x44;
  piVar1 = *(int **)(iVar4 + 0x28 + DAT_00740934);
  iVar7 = (**(code **)(*piVar1 + 0x48))(piVar1);
  if (iVar7 != 0) {
    this(iVar7);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_releasing_sound_b_005b5054);
  }
  piVar1 = *(int **)(iVar4 + 0x28 + DAT_00740934);
  (**(code **)(*piVar1 + 8))(piVar1);
  *(undefined4 *)(iVar4 + 0x30 + DAT_00740934) = 0;
  uVar6 = 0;
  *(undefined4 *)(iVar4 + 0x38 + DAT_00740934) = 0;
  if (0 < DAT_00740928) {
    iVar4 = 0;
    iVar7 = DAT_00740934;
    do {
      iVar2 = *(int *)(iVar4 + 0x38 + iVar7);
      if (((iVar2 != 10000) && (uVar6 != uVar5)) && (1 < iVar2)) {
        *(int *)(iVar4 + 0x38 + iVar7) = iVar2 + -1;
        iVar7 = DAT_00740934;
      }
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0x44;
    } while ((int)uVar6 < DAT_00740928);
  }
  return uVar5;
}


