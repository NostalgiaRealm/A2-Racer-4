
/* ==== FUN_00411cd4 @ 00411cd4 ==== 
 * signature: undefined FUN_00411cd4(void)
 * body: 00411cd4-00411d52
 */

void FUN_00411cd4(int *param_1,int param_2)

{
  bool bVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar2;
  uint extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  int iStack_c;
  int *piStack_8;
  
  puStack_14 = &stack0xfffffffc;
  iStack_10 = 0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_20 = (code *)0x411cfb;
  iStack_c = param_2;
  piStack_8 = param_1;
  FUN_00414194(param_2,param_2,0);
  pcStack_20 = (code *)0x411d03;
  FUN_00411434(piStack_8);
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_20 = (code *)&stack0xfffffffc;
  (**(code **)(*piStack_8 + 0x40))();
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  while( true ) {
    bVar1 = FUN_00413454(iStack_c,uVar3,uVar2);
    if (bVar1) break;
    FUN_00414e1c(iStack_c,&iStack_10,extraout_ECX_01);
    (**(code **)(*piStack_8 + 0x34))(piStack_8,iStack_10);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_00411d5a;
  pcStack_24 = (code *)0x411d52;
  FUN_004114f0(piStack_8);
  return;
}


