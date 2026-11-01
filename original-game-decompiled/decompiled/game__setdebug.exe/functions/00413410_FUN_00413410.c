
/* ==== FUN_00413410 @ 00413410 ==== 
 * signature: undefined __register FUN_00413410(undefined4 param_1, undefined4 param_2, uint param_3, uint param_4)
 * body: 00413410-0041346e
 */

void FUN_00413410(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar3;
  uint extraout_ECX_01;
  uint uVar4;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar5;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  int *piVar6;
  
  piVar6 = (int *)(param_4 - 4);
  while( true ) {
    bVar2 = FUN_004118a0(*piVar6,param_2,param_3);
    if (bVar2) break;
    cVar1 = FUN_00411b50(*piVar6,extraout_EDX_05,extraout_ECX_04);
    uVar3 = extraout_ECX;
    uVar5 = extraout_EDX;
    if ((byte)(cVar1 - 2U) < 3) {
      FUN_00413470(*piVar6,extraout_EDX,extraout_ECX);
      uVar3 = extraout_ECX_00;
      uVar5 = extraout_EDX_00;
    }
    uVar4 = param_4;
    FUN_00413394(1,uVar5,uVar3,param_4);
    uVar5 = extraout_EDX_01;
    while( true ) {
      bVar2 = FUN_004118a0(*piVar6,uVar5,uVar4);
      if (bVar2) break;
      FUN_004135d8(*piVar6,extraout_EDX_03,extraout_ECX_02);
      uVar4 = extraout_ECX_01;
      uVar5 = extraout_EDX_02;
    }
    FUN_004125e8(*piVar6,extraout_EDX_03,extraout_ECX_02);
    param_3 = extraout_ECX_03;
    param_2 = extraout_EDX_04;
  }
  FUN_004125e8(*piVar6,extraout_EDX_05,extraout_ECX_04);
  return;
}


