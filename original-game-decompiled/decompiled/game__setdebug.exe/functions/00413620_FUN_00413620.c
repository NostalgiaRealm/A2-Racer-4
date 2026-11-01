
/* ==== FUN_00413620 @ 00413620 ==== 
 * signature: undefined FUN_00413620(void)
 * body: 00413620-004136b7
 */

void FUN_00413620(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  uint uVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar4;
  undefined4 extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  int aiStack_14 [2];
  undefined1 auStack_c [7];
  undefined1 uStack_5;
  
  puStack_20 = &stack0xfffffffc;
  uVar3 = 0;
  aiStack_14[0] = 0;
  aiStack_14[1] = 0;
  puStack_24 = &UNK_004136b8;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if ((char)param_2 != '\0') {
    (**(code **)(*param_1 + 0x24))(param_1,&uStack_5,auStack_c);
    FUN_0041322c((int)param_1,aiStack_14 + 1,extraout_ECX);
    FUN_0041322c((int)param_1,aiStack_14,extraout_ECX_00);
    uVar3 = extraout_ECX_01;
    param_2 = extraout_EDX;
    puVar1 = puStack_20;
  }
  while( true ) {
    puStack_20 = puVar1;
    bVar2 = FUN_004118a0((int)param_1,param_2,uVar3);
    if (bVar2) break;
    FUN_004135d8((int)param_1,extraout_EDX_01,extraout_ECX_03);
    uVar3 = extraout_ECX_02;
    param_2 = extraout_EDX_00;
    puVar1 = puStack_20;
  }
  FUN_004125e8((int)param_1,extraout_EDX_01,extraout_ECX_03);
  uVar3 = extraout_ECX_04;
  uVar4 = extraout_EDX_02;
  while( true ) {
    bVar2 = FUN_004118a0((int)param_1,uVar4,uVar3);
    if (bVar2) break;
    FUN_00413620(param_1,1);
    uVar3 = extraout_ECX_05;
    uVar4 = extraout_EDX_03;
  }
  FUN_004125e8((int)param_1,extraout_EDX_04,extraout_ECX_06);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &UNK_004136bf;
  puStack_24 = (undefined *)0x4136b7;
  FUN_004039dc(aiStack_14,2);
  return;
}


