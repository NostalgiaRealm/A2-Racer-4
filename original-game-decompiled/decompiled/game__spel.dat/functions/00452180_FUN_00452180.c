
/* ==== FUN_00452180 @ 00452180 ==== 
 * signature: undefined4 __cdecl FUN_00452180(int param_1, float param_2)
 * body: 00452180-004521a6;004521aa-0045231e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004521a7-004521a9
 */

undefined4 __cdecl FUN_00452180(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int local_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_1c = DAT_006fba58;
  if (param_2 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__object_flyup_check_collision__m_005a29a4);
  }
  iVar1 = FUN_00453480(param_1,&local_1c);
  if (iVar1 != 0) {
    iVar1 = local_1c * 0xf0 + 0xbc + DAT_00715e50;
    fStack_18 = *(float *)(local_1c * 0xf0 + 0xbc + DAT_00715e50);
    uStack_14 = *(undefined4 *)(iVar1 + 4);
    fStack_10 = *(float *)(iVar1 + 8);
    uVar2 = FUN_00558625();
    iVar1 = DAT_00715e50;
    iVar3 = DAT_0073b0d0 + *(int *)(local_1c * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
    uStack_c = *(undefined4 *)(iVar3 + 0x74);
    uStack_8 = *(undefined4 *)(iVar3 + 0x78);
    uStack_4 = *(undefined4 *)(iVar3 + 0x7c);
    lVar5 = __ftol();
    uVar2 = (int)lVar5 + (0x7d - (int)uVar2 % 0xfa);
    if (DAT_005b23b4 < (int)uVar2) {
      uVar2 = uVar2 - DAT_005b23b4;
    }
    iVar4 = (DAT_005b23bc & uVar2) * 4;
    iVar3 = param_1 * 0xf0;
    *(float *)(iVar3 + 0xbc + iVar1) =
         *(float *)(iVar4 + DAT_0073b578) * fStack_18 -
         *(float *)(iVar4 + DAT_0073b530) * fStack_10 * 1.5;
    iVar1 = (DAT_005b23bc & uVar2) * 4;
    *(float *)(iVar3 + 0xc4 + DAT_00715e50) =
         *(float *)(iVar1 + DAT_0073b578) * fStack_10 * 1.5 +
         *(float *)(iVar1 + DAT_0073b530) * fStack_18;
    *(float *)(iVar3 + 0xc0 + DAT_00715e50) = (fStack_10 + fStack_18) / param_2;
    *(undefined4 *)(iVar3 + 0x58 + DAT_00715e50) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x2c + DAT_00715e50) = 1;
    return 1;
  }
  return 0;
}


