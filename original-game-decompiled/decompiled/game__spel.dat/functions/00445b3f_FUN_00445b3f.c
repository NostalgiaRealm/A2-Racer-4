
/* ==== FUN_00445b3f @ 00445b3f ==== 
 * signature: undefined __stdcall FUN_00445b3f(int param_1, float param_2, float param_3, float param_4, float param_5, undefined4 param_6, float param_7)
 * body: 00445b3f-00445b3f
 */

void FUN_00445b3f(int param_1,float param_2,float param_3,float param_4,float param_5,
                 undefined4 param_6,float param_7)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 auStack_40 [12];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  puVar7 = &DAT_0073b538;
  puVar8 = auStack_40;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar2 = FUN_00558625();
  fStack_10 = ((float)((int)uVar2 % 10) * 0.5 + param_2) - 2.5;
  uVar2 = FUN_00558625();
  fStack_c = ((float)((int)uVar2 % 10) * 0.5 + param_3) - 2.5;
  uVar2 = FUN_00558625();
  fStack_8 = ((float)((int)uVar2 % 10) * 0.5 + param_4) - 2.5;
  iVar5 = FUN_00445950(param_1);
  puVar7 = auStack_40;
  puVar8 = (undefined4 *)(&DAT_006ed700 + iVar5 * 0x134);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar5 = FUN_00445950(param_1);
  *(undefined4 *)(&DAT_006ed830 + iVar5 * 0x134) = 1;
  FUN_004a6800(0x7128b0);
  lVar9 = __ftol();
  iVar5 = FUN_00445950(param_1);
  fVar1 = (float)DAT_006fba64;
  *(int *)(&DAT_006ed82c + iVar5 * 0x134) = (int)lVar9;
  uVar2 = FUN_00558625();
  uVar3 = FUN_00558625();
  iVar5 = FUN_00445950(param_1);
  iVar5 = iVar5 * 0x134;
  *(float *)(&DAT_006ed800 + iVar5) =
       ((float)(int)uVar2 * 3.051851e-05 + 0.5) * fVar1 * 3.0 * param_5;
  *(undefined4 *)(&DAT_006ed804 + iVar5) = 0;
  *(float *)(&DAT_006ed808 + iVar5) =
       ((float)(int)uVar3 * 3.051851e-05 + 0.5) * fVar1 * 3.0 * param_7;
  iVar5 = FUN_00445950(param_1);
  fVar1 = (float)*(int *)(&DAT_006ed82c + iVar5 * 0x134);
  iVar6 = FUN_00445950(param_1);
  iVar5 = iVar6 * 0x134;
  *(float *)(&DAT_006ed800 + iVar5) = *(float *)(&DAT_006ed800 + iVar6 * 0x134) / fVar1;
  *(float *)(&DAT_006ed804 + iVar5) = *(float *)(&DAT_006ed804 + iVar5) / fVar1;
  *(float *)(&DAT_006ed808 + iVar5) = *(float *)(&DAT_006ed808 + iVar5) / fVar1;
  uVar2 = FUN_00558625();
  uVar3 = FUN_00558625();
  uVar4 = FUN_00558625();
  iVar5 = FUN_00445950(param_1);
  iVar5 = iVar5 * 0x134;
  *(float *)(&DAT_006ed80c + iVar5) = (float)((int)uVar4 % 500) - 250.0;
  *(float *)(&DAT_006ed810 + iVar5) = (float)((int)uVar3 % 500) - 250.0;
  *(float *)(&DAT_006ed814 + iVar5) = (float)((int)uVar2 % 500) - 250.0;
  iVar5 = FUN_00445950(param_1);
  *(undefined4 *)(&DAT_006ed824 + iVar5 * 0x134) = 0;
  uVar2 = FUN_00558625();
  iVar5 = (int)uVar2 % 0x32 + -0x19 + DAT_006fba64;
  iVar6 = FUN_00445950(param_1);
  *(float *)(&DAT_006ed828 + iVar6 * 0x134) = (float)iVar5 * 0.02 + 1.5;
  iVar5 = FUN_00445950(param_1);
  if (*(float *)(&DAT_006ed828 + iVar5 * 0x134) < 1.5) {
    iVar5 = FUN_00445950(param_1);
    *(undefined4 *)(&DAT_006ed828 + iVar5 * 0x134) = 0x3fc00000;
  }
  iVar5 = FUN_00445950(param_1);
  if (2.3 < *(float *)(&DAT_006ed828 + iVar5 * 0x134)) {
    iVar5 = FUN_00445950(param_1);
    *(undefined4 *)(&DAT_006ed828 + iVar5 * 0x134) = 0x40133333;
  }
  return;
}


