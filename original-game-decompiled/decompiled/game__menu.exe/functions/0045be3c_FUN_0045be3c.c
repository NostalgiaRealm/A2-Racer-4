
/* ==== FUN_0045be3c @ 0045be3c ==== 
 * signature: undefined __register FUN_0045be3c(int * param_1, int * param_2)
 * body: 0045be3c-0045bed6
 */

void FUN_0045be3c(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *in_stack_fffffed8;
  char *pcVar4;
  char *pcVar5;
  undefined4 uStack_11c;
  code *pcStack_118;
  undefined1 *puStack_114;
  byte local_108 [256];
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_118 = thunk_FUN_004036bc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  bVar1 = FUN_0045a88c();
  if (bVar1) {
    piVar2 = FUN_0045a854(&PTR_TDaviAnimationLoaderFactory_vmt_000_0045a33c,extraout_EDX,
                          extraout_ECX);
    FUN_0045aca0((int)piVar2,*param_2);
    *param_2 = 0;
  }
  else {
    pcVar5 = "SafeDeleteAnimationLoader";
    pcVar4 = "Could not delete because the application has already been finalized.";
    in_stack_fffffed8 = "Make sure everything has been freed before the application is closed.";
    FUN_00402ee4(*param_1,local_108);
    FUN_00403e80((int *)&local_8,local_108);
    uVar3 = FUN_00453d0c((int *)&PTR_EDavilex_vmt_000_00453ba0,'\x01',local_8,
                         (undefined4 *)in_stack_fffffed8,(undefined4 *)pcVar4,(undefined4 *)pcVar5);
    FUN_004036f4(uVar3);
  }
  *in_FS_OFFSET = in_stack_fffffed8;
  FUN_00403c5c((int *)&local_8);
  return;
}


