
/* ==== FUN_00414f20 @ 00414f20 ==== 
 * signature: undefined __register FUN_00414f20(undefined4 param_1, undefined4 param_2, uint param_3, int param_4)
 * body: 00414f20-00414f47
 */

void FUN_00414f20(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar2;
  
  piVar2 = (int *)(param_4 + -4);
  while( true ) {
    bVar1 = FUN_00413454(*piVar2,param_2,param_3);
    if (bVar1) break;
    FUN_00415024(*piVar2,extraout_EDX_00,extraout_ECX_00);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  FUN_0041419c(*piVar2,extraout_EDX_00,extraout_ECX_00);
  return;
}


