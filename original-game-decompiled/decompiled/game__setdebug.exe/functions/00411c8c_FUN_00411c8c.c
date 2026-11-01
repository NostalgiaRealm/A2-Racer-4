
/* ==== FUN_00411c8c @ 00411c8c ==== 
 * signature: undefined __register FUN_00411c8c(int param_1, int * param_2)
 * body: 00411c8c-00411d2b
 */

void FUN_00411c8c(int param_1,int *param_2)

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
  
  pcStack_14 = (code *)0x411c9f;
  (**(code **)(*param_2 + 0x14))();
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  bVar2 = FUN_004118a0(param_1,extraout_EDX,extraout_ECX);
  uVar5 = extraout_ECX_00;
  uVar6 = extraout_EDX_00;
  if (!bVar2) {
    FUN_0040f774(param_2);
    uVar5 = extraout_ECX_01;
    uVar6 = extraout_EDX_01;
  }
  while( true ) {
    bVar2 = FUN_004118a0(param_1,uVar6,uVar5);
    if (bVar2) break;
    cVar3 = FUN_00411b50(param_1,extraout_EDX_08,extraout_ECX_08);
    if ((byte)(cVar3 - 2U) < 3) {
      FUN_00412530(param_1,extraout_EDX_02,extraout_ECX_02);
    }
    piVar4 = (int *)FUN_0040f768((int)param_2);
    FUN_004125e0(param_1,extraout_EDX_03,extraout_ECX_03);
    uVar5 = extraout_ECX_04;
    uVar6 = extraout_EDX_04;
    while( true ) {
      bVar2 = FUN_004118a0(param_1,uVar6,uVar5);
      if (bVar2) break;
      FUN_0041274c((int *)param_1,piVar4);
      uVar5 = extraout_ECX_05;
      uVar6 = extraout_EDX_05;
    }
    FUN_004125e8(param_1,extraout_EDX_06,extraout_ECX_06);
    uVar5 = extraout_ECX_07;
    uVar6 = extraout_EDX_07;
  }
  FUN_004125e8(param_1,extraout_EDX_08,extraout_ECX_08);
  pcVar1 = pcStack_14;
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00411d33;
  pcStack_18 = (code *)0x411d2b;
  (**(code **)(*param_2 + 0x18))(param_2,*param_2,pcVar1);
  return;
}


