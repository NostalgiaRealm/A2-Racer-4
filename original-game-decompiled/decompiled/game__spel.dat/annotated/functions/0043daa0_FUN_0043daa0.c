
/* ==== FUN_0043daa0 @ 0043daa0 ==== 
 * signature: undefined __cdecl FUN_0043daa0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * body: 0043daa0-0043db97
 */

void __cdecl
FUN_0043daa0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  longlong lVar8;
  undefined4 local_40 [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar5 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  puVar6 = local_40;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  iVar4 = param_1 * 300;
  puVar5 = local_40;
  puVar6 = &DAT_006c4208 + param_1 * 0x4b;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  (&DAT_006c4330)[param_1 * 0x4b] = 1;
  FUN_004a6800(0x7128b0);
  lVar8 = __ftol();
  (&DAT_006c4320)[param_1 * 0x4b] = (int)lVar8;
  uVar2 = FUN_00558625();
  (&DAT_006c4324)[param_1 * 0x4b] = (int)uVar2 % 3;
  fVar7 = FUN_004a6800(0x7128b0);
  *(undefined4 *)(&DAT_006c4308 + iVar4) = param_5;
  *(float *)(&DAT_006c430c + iVar4) = (float)(fVar7 * (float10)15.0);
  *(undefined4 *)(&DAT_006c4310 + iVar4) = param_7;
  uVar1 = DAT_006c4120;
  *(undefined4 *)(&DAT_006c4328 + iVar4) = 0x40400000;
  *(undefined4 *)(&DAT_006c432c + iVar4) = 0x40400000;
  *(undefined4 *)(&DAT_006c4258 + iVar4) = uVar1;
  return;
}


