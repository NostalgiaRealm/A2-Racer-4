
/* ==== TDaviAnimation.vmt_048 @ 0045c1d8 ==== 
 * signature: undefined TDaviAnimation.vmt_048(void)
 * body: 0045c1d8-0045c2f5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_048(int *param_1,byte *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *in_FS_OFFSET;
  int in_stack_fffffec0;
  int iStack_130;
  code *pcStack_12c;
  undefined1 *puStack_128;
  byte *pbStack_118;
  undefined1 uStack_114;
  int iStack_110;
  byte abStack_10c [256];
  int iStack_c;
  int iStack_8;
  
  puStack_128 = &stack0xfffffffc;
  iStack_8 = 0;
  iStack_c = 0;
  iStack_110 = 0;
  pcStack_12c = thunk_FUN_004036bc;
  iStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_130;
  uVar1 = FUN_004087a4(param_2);
  if ((char)uVar1 == '\0') {
    FUN_00402ee4(*param_1,abStack_10c);
    FUN_00403e80(&iStack_c,abStack_10c);
    uStack_114 = 0xb;
    pbStack_118 = param_2;
    FUN_00409254((byte *)" File \"%s\" not found",&pbStack_118,0,&iStack_110);
    in_stack_fffffec0 = iStack_110;
    FUN_00403f9c(&iStack_8,4);
    FUN_00403c40(iStack_8);
  }
  FUN_0045b9d4(param_1);
  piVar2 = FUN_0045a854(&PTR_TDaviAnimationLoaderFactory_vmt_000_0045a33c,extraout_EDX,extraout_ECX)
  ;
  iVar3 = FUN_0045aba0(piVar2,param_2);
  param_1[9] = iVar3;
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,*(undefined4 *)(iVar3 + 8));
  }
  if (*(char *)((int)param_1 + 0x3d) != '\0') {
    (**(code **)(*param_1 + 0x60))();
  }
  if ((char)param_1[8] != '\0') {
    FUN_0045c798(param_1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  *in_FS_OFFSET = in_stack_fffffec0;
  FUN_00403c5c(&iStack_110);
  FUN_00403c80(&iStack_c,2);
  return;
}


