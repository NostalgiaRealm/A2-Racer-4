
/* ==== FUN_00410144 @ 00410144 ==== 
 * signature: undefined FUN_00410144(void)
 * body: 00410144-004101c2
 */

void FUN_00410144(int *param_1,int param_2)

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
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_20 = (code *)0x41016b;
  iStack_c = param_2;
  piStack_8 = param_1;
  FUN_004125e0(param_2,param_2,0);
  pcStack_20 = (code *)0x410173;
  FUN_0040f97c(piStack_8);
  pcStack_24 = thunk_FUN_00403434;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_20 = (code *)&stack0xfffffffc;
  (**(code **)(*piStack_8 + 0x40))();
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  while( true ) {
    bVar1 = FUN_004118a0(iStack_c,uVar3,uVar2);
    if (bVar1) break;
    FUN_00413268(iStack_c,&iStack_10,extraout_ECX_01);
    (**(code **)(*piStack_8 + 0x34))(piStack_8,iStack_10);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_004101ca;
  pcStack_24 = (code *)0x4101c2;
  FUN_0040fa38(piStack_8);
  return;
}


