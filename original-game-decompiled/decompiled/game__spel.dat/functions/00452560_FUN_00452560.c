
/* ==== FUN_00452560 @ 00452560 ==== 
 * signature: undefined4 __cdecl FUN_00452560(int param_1, float param_2, float param_3)
 * body: 00452560-00452586;0045258a-00452891
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00452587-00452589
 */

undefined4 __cdecl FUN_00452560(int param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 extraout_ST1;
  longlong lVar7;
  int local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = DAT_006fba58;
  if (param_2 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__object_flyup_check_collision__m_005a29d4);
  }
  if (param_3 == 0.0) {
    iVar3 = FUN_00453480(param_1,&local_10);
  }
  else {
    iVar3 = FUN_00453500(param_1,DAT_006fba58,param_3);
  }
  if (iVar3 == 0) {
    local_10 = *(int *)(local_10 * 0xf0 + 0x44 + DAT_00715e50);
    if (local_10 != -1) {
      if (param_3 == 0.0) {
        iVar3 = FUN_00453480(param_1,&local_10);
      }
      else {
        iVar3 = FUN_00453500(param_1,local_10,param_3);
      }
      if (iVar3 != 0) goto LAB_00452626;
    }
    return 0;
  }
LAB_00452626:
  iVar3 = DAT_00715e50;
  iVar4 = DAT_0073b0d0 + *(int *)(local_10 * 0xf0 + DAT_00715e50 + 0x24) * 0xa9;
  uStack_c = *(undefined4 *)(iVar4 + 0x74);
  uStack_8 = *(undefined4 *)(iVar4 + 0x78);
  uStack_4 = *(undefined4 *)(iVar4 + 0x7c);
  lVar7 = __ftol();
  iVar4 = (DAT_005b23bc & (uint)lVar7) * 4;
  iVar6 = param_1 * 0xf0;
  *(float *)(iVar6 + 0xbc + iVar3) =
       (float)((float10)*(float *)(iVar4 + DAT_0073b578) * extraout_ST1 -
              (float10)*(float *)(iVar4 + DAT_0073b530) * extraout_ST0);
  iVar3 = (DAT_005b23bc & (uint)lVar7) * 4;
  *(float *)(iVar6 + 0xc4 + DAT_00715e50) =
       (float)((float10)*(float *)(iVar3 + DAT_0073b530) * extraout_ST1 +
              (float10)*(float *)(iVar3 + DAT_0073b578) * extraout_ST0);
  *(float *)(iVar6 + 0xc0 + DAT_00715e50) = (float)((extraout_ST0 + extraout_ST1) * (float10)0.25);
  pfVar1 = (float *)(iVar6 + 0xbc + DAT_00715e50);
  uVar5 = FUN_00558625();
  uVar5 = uVar5 & 0x800000ff;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
  }
  *pfVar1 = ((float)(int)uVar5 * 0.001953125 + 0.75) * *pfVar1;
  pfVar1 = (float *)(iVar6 + 0xc0 + DAT_00715e50);
  uVar5 = FUN_00558625();
  uVar5 = uVar5 & 0x800000ff;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
  }
  *pfVar1 = ((float)(int)uVar5 * 0.001953125 + 0.75) * *pfVar1;
  pfVar1 = (float *)(iVar6 + 0xc4 + DAT_00715e50);
  uVar5 = FUN_00558625();
  uVar5 = uVar5 & 0x800000ff;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
  }
  *pfVar1 = ((float)(int)uVar5 * 0.001953125 + 0.75) * *pfVar1;
  iVar2 = DAT_00715e50;
  iVar4 = *(int *)(iVar6 + 0x24 + DAT_00715e50);
  iVar3 = DAT_0073b0d0 + iVar4 + 0x74 + iVar4 * 0xa8;
  uStack_c = *(undefined4 *)(DAT_0073b0d0 + iVar4 + 0x74 + iVar4 * 0xa8);
  uStack_8 = *(undefined4 *)(iVar3 + 4);
  uStack_4 = *(undefined4 *)(iVar3 + 8);
  lVar7 = __ftol();
  iVar3 = (DAT_005b23bc & -(int)lVar7) * 4;
  *(float *)(iVar6 + 200 + iVar2) =
       *(float *)(iVar3 + DAT_0073b578) * *(float *)(iVar6 + 0xbc + iVar2) -
       *(float *)(iVar3 + DAT_0073b530) * *(float *)(iVar6 + 0xc4 + iVar2);
  iVar3 = (DAT_005b23bc & -(int)lVar7) * 4;
  *(float *)(iVar6 + 0xd0 + DAT_00715e50) =
       *(float *)(iVar3 + DAT_0073b578) * *(float *)(iVar6 + 0xc4 + DAT_00715e50) +
       *(float *)(iVar3 + DAT_0073b530) * *(float *)(iVar6 + 0xbc + DAT_00715e50);
  *(undefined4 *)(iVar6 + 0x58 + DAT_00715e50) = 0xc2340000;
  *(undefined4 *)(iVar6 + 0x2c + DAT_00715e50) = 1;
  return 1;
}


