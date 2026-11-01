
/* ==== FUN_00444b40 @ 00444b40 ==== 
 * signature: undefined __cdecl FUN_00444b40(int param_1, undefined4 * param_2, undefined4 * param_3)
 * body: 00444b40-00444c36
 */

void __cdecl FUN_00444b40(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = FUN_004447a0(param_1);
  iVar1 = *(int *)(&DAT_006ce140 + iVar1 * 0x1910);
  iVar2 = FUN_004447a0(param_1);
  iVar3 = FUN_004447d0(iVar1);
  puVar5 = param_2;
  puVar6 = (undefined4 *)(&DAT_006ce144 + iVar3 * 0x20 + iVar2 * 0x1910);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar2 = FUN_004447d0(iVar1 + 1);
  iVar3 = FUN_004447a0(param_1);
  puVar5 = param_2 + 8;
  puVar6 = (undefined4 *)(&DAT_006ce144 + iVar3 * 0x1910 + iVar2 * 0x20);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar2 = FUN_004447a0(param_1);
  iVar3 = FUN_004447d0(iVar1);
  puVar5 = param_3;
  puVar6 = (undefined4 *)(&DAT_006cedc4 + iVar3 * 0x20 + iVar2 * 0x1910);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar1 = FUN_004447d0(iVar1 + 1);
  iVar2 = FUN_004447a0(param_1);
  puVar5 = param_3 + 8;
  puVar6 = (undefined4 *)(&DAT_006cedc4 + iVar2 * 0x1910 + iVar1 * 0x20);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return;
}


