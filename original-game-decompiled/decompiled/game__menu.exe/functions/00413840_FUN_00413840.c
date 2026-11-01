
/* ==== FUN_00413840 @ 00413840 ==== 
 * signature: undefined __register FUN_00413840(int param_1, int * param_2)
 * body: 00413840-004138df
 */

void FUN_00413840(int param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint uVar5;
  uint extraout_ECX_08;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 uVar6;
  undefined4 extraout_EDX_08;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  pcStack_14 = (code *)0x413853;
  (**(code **)(*param_2 + 0x14))();
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  bVar2 = FUN_00413454(param_1,extraout_EDX,extraout_ECX);
  uVar5 = extraout_ECX_00;
  uVar6 = extraout_EDX_00;
  if (!bVar2) {
    FUN_00410e64(param_2);
    uVar5 = extraout_ECX_01;
    uVar6 = extraout_EDX_01;
  }
  while( true ) {
    bVar2 = FUN_00413454(param_1,uVar6,uVar5);
    if (bVar2) break;
    cVar3 = FUN_00413704(param_1,extraout_EDX_08,extraout_ECX_08);
    if ((byte)(cVar3 - 2U) < 3) {
      FUN_004140e4(param_1,extraout_EDX_02,extraout_ECX_02);
    }
    piVar4 = (int *)FUN_00410dac((int)param_2);
    FUN_00414194(param_1,extraout_EDX_03,extraout_ECX_03);
    uVar5 = extraout_ECX_04;
    uVar6 = extraout_EDX_04;
    while( true ) {
      bVar2 = FUN_00413454(param_1,uVar6,uVar5);
      if (bVar2) break;
      FUN_00414300((int *)param_1,piVar4);
      uVar5 = extraout_ECX_05;
      uVar6 = extraout_EDX_05;
    }
    FUN_0041419c(param_1,extraout_EDX_06,extraout_ECX_06);
    uVar5 = extraout_ECX_07;
    uVar6 = extraout_EDX_07;
  }
  FUN_0041419c(param_1,extraout_EDX_08,extraout_ECX_08);
  pcVar1 = pcStack_14;
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_004138e7;
  pcStack_18 = (code *)0x4138df;
  (**(code **)(*param_2 + 0x18))(param_2,*param_2,pcVar1);
  return;
}


