
/* ==== FUN_004469e0 @ 004469e0 ==== 
 * signature: undefined __cdecl FUN_004469e0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * body: 004469e0-00446b5c
 */

void __cdecl
FUN_004469e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  longlong lVar7;
  undefined4 local_40 [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar4 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  puVar5 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  iVar2 = FUN_004463c0(param_1);
  puVar4 = local_40;
  puVar5 = (undefined4 *)(&DAT_006f5090 + iVar2 * 300);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = FUN_004463c0(param_1);
  *(undefined4 *)(&DAT_006f51b8 + iVar2 * 300) = 1;
  FUN_004a6800(0x7128b0);
  lVar7 = __ftol();
  iVar2 = FUN_004463c0(param_1);
  *(int *)(&DAT_006f51a8 + iVar2 * 300) = (int)lVar7;
  uVar1 = FUN_00558625();
  iVar2 = FUN_004463c0(param_1);
  *(int *)(&DAT_006f51ac + iVar2 * 300) = (int)uVar1 % 3;
  fVar6 = FUN_004a6800(0x7128b0);
  iVar2 = FUN_004463c0(param_1);
  iVar2 = iVar2 * 300;
  *(undefined4 *)(&DAT_006f5190 + iVar2) = param_5;
  *(float *)(&DAT_006f5194 + iVar2) = (float)(fVar6 * (float10)15.0);
  *(undefined4 *)(&DAT_006f5198 + iVar2) = param_7;
  iVar2 = FUN_004463c0(param_1);
  *(undefined4 *)(&DAT_006f51b0 + iVar2 * 300) = 0x40400000;
  iVar2 = FUN_004463c0(param_1);
  *(undefined4 *)(&DAT_006f51b4 + iVar2 * 300) = 0x40400000;
  iVar2 = FUN_004463c0(param_1);
  iVar3 = FUN_004463f0(0);
  *(undefined4 *)(&DAT_006f50e0 + iVar2 * 300 + iVar3 * 0x20) = DAT_006fa2f0;
  return;
}


