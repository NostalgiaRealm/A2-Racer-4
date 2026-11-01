
/* ==== FUN_00463370 @ 00463370 ==== 
 * signature: uint __cdecl FUN_00463370(int param_1)
 * body: 00463370-004633ee
 */

uint __cdecl FUN_00463370(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  float local_c [3];
  
  iVar1 = *(int *)(param_1 + 0x14);
  puVar5 = (undefined4 *)
           FUN_00464540(local_c,*(int *)(param_1 + 0x18),*(int *)(param_1 + 4),
                        *(int *)(param_1 + 8) % *(int *)(param_1 + 4),*(float *)(param_1 + 0xc),
                        *(int *)(param_1 + 0x20));
  uVar2 = *puVar5;
  uVar3 = puVar5[1];
  uVar4 = puVar5[2];
  iVar6 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar6;
  if (*(int *)(param_1 + 4) + -2 <= iVar6) {
    return CONCAT31((int3)((uint)iVar6 >> 8),1);
  }
  uVar7 = FUN_004b1060((void *)(DAT_00719b50 + iVar1 * 0x178),uVar2,uVar3,uVar4);
  return uVar7 & 0xffffff00;
}


