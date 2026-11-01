
/* ==== FUN_00413e08 @ 00413e08 ==== 
 * signature: undefined __register FUN_00413e08(int * param_1, int * param_2, uint param_3)
 * body: 00413e08-00413ec9
 */

void FUN_00413e08(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint uVar5;
  uint extraout_ECX_05;
  int *extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int *extraout_EDX_02;
  int *extraout_EDX_03;
  int *piVar6;
  undefined4 extraout_EDX_04;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  
  piVar6 = param_2;
  while( true ) {
    puStack_20 = (undefined1 *)0x413e2a;
    bVar3 = FUN_00413454((int)param_1,piVar6,param_3);
    if (bVar3) break;
    puStack_20 = (undefined1 *)0x413e22;
    FUN_00414300(param_1,param_2);
    param_3 = extraout_ECX;
    piVar6 = extraout_EDX;
  }
  puStack_20 = (undefined1 *)0x413e36;
  FUN_0041419c((int)param_1,extraout_EDX_00,extraout_ECX_00);
  iVar1 = param_1[0xb];
  iVar2 = param_1[10];
  puStack_20 = (undefined1 *)0x413e53;
  iVar4 = FUN_00403178(param_2,extraout_EDX_01,extraout_ECX_01);
  param_1[0xb] = iVar4;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar4 = FUN_00403178(param_2,param_1,extraout_ECX_02);
  param_1[10] = iVar4;
  uVar5 = extraout_ECX_03;
  piVar6 = extraout_EDX_02;
  if (iVar4 == 0) {
    param_1[10] = param_1[6];
    piVar6 = param_1;
  }
  while( true ) {
    bVar3 = FUN_00413454((int)param_1,piVar6,uVar5);
    if (bVar3) break;
    FUN_00413bc0(param_1,(int *)0x0);
    uVar5 = extraout_ECX_04;
    piVar6 = extraout_EDX_03;
  }
  FUN_0041419c((int)param_1,extraout_EDX_04,extraout_ECX_05);
  *in_FS_OFFSET = uStack_28;
  param_1[0xb] = iVar1;
  param_1[10] = iVar2;
  return;
}


