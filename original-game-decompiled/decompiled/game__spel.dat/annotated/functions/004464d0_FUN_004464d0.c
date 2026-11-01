
/* ==== FUN_004464d0 @ 004464d0 ==== 
 * signature: undefined __cdecl FUN_004464d0(int param_1)
 * body: 004464d0-00446725
 */

void __cdecl FUN_004464d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar5 = FUN_004463c0(param_1);
  fVar1 = *(float *)(&DAT_006f51b0 + iVar5 * 300);
  iVar5 = FUN_004463c0(param_1);
  fVar2 = *(float *)(&DAT_006f51b4 + iVar5 * 300);
  iVar5 = FUN_004463c0(param_1);
  fVar1 = 33.0 / (float)*(int *)(&DAT_006f51a8 + iVar5 * 300) + fVar1;
  iVar5 = FUN_004463c0(param_1);
  fVar2 = 33.0 / (float)*(int *)(&DAT_006f51a8 + iVar5 * 300) + fVar2;
  fVar3 = fVar1 * 0.5;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(1);
  *(float *)(&DAT_006f50d0 + iVar5 * 300 + iVar6 * 0x20) = -fVar3;
  fVar4 = fVar2 * 0.5;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(1);
  *(float *)(&DAT_006f50d4 + iVar5 * 300 + iVar6 * 0x20) = -fVar4;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(2);
  *(float *)(&DAT_006f50d0 + iVar5 * 300 + iVar6 * 0x20) = -fVar3;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(2);
  *(float *)(&DAT_006f50d4 + iVar5 * 300 + iVar6 * 0x20) = fVar4;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(3);
  *(float *)(&DAT_006f50d0 + iVar5 * 300 + iVar6 * 0x20) = fVar3;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(3);
  *(float *)(&DAT_006f50d4 + iVar5 * 300 + iVar6 * 0x20) = fVar4;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(4);
  *(float *)(&DAT_006f50d0 + iVar5 * 300 + iVar6 * 0x20) = fVar3;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(4);
  *(float *)(&DAT_006f50d4 + iVar5 * 300 + iVar6 * 0x20) = -fVar4;
  iVar5 = FUN_004463c0(param_1);
  iVar6 = FUN_004463f0(1);
  iVar7 = FUN_004463c0(param_1);
  iVar8 = FUN_004463f0(5);
  puVar10 = (undefined4 *)(&DAT_006f50d0 + iVar5 * 300 + iVar6 * 0x20);
  puVar11 = (undefined4 *)(&DAT_006f50d0 + iVar7 * 300 + iVar8 * 0x20);
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  iVar5 = FUN_004463c0(param_1);
  *(float *)(&DAT_006f51b0 + iVar5 * 300) = fVar1;
  iVar5 = FUN_004463c0(param_1);
  *(float *)(&DAT_006f51b4 + iVar5 * 300) = fVar2;
  return;
}


