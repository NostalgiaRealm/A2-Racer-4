
/* ==== FUN_0040ff78 @ 0040ff78 ==== 
 * signature: undefined __register FUN_0040ff78(undefined * * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0040ff78-0041000d
 */

void FUN_0040ff78(undefined **param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined **ppuVar1;
  int iVar2;
  HMODULE pHVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined4 uStack_11c;
  code *pcStack_118;
  code *pcStack_114;
  byte local_108 [256];
  undefined *local_8;
  
  pcStack_114 = (code *)&stack0xfffffffc;
  local_8 = (undefined *)0x0;
  pcStack_118 = thunk_FUN_004036bc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  if ((param_1 != &PTR_TPersistent_vmt_000_0040f548) && (param_1 != *(undefined ***)(param_4 + -8)))
  {
    iVar2 = param_4;
    ppuVar1 = (undefined **)FUN_00402f20((int)param_1);
    FUN_0040ff78(ppuVar1,extraout_EDX,extraout_ECX,iVar2);
    FUN_00402ee4((int)param_1,local_108);
    FUN_00403e80((int *)&local_8,local_108);
    puVar4 = local_8;
    iVar2 = FUN_004052b8(param_1);
    pHVar3 = (HMODULE)FUN_004052c0(iVar2);
    FUN_0040fdf0(puVar4,pHVar3,(undefined4 *)(param_4 + -4));
  }
  *in_FS_OFFSET = uStack_11c;
  pcStack_114 = FUN_00410015;
  pcStack_118 = (code *)0x41000d;
  FUN_00403c5c((int *)&local_8);
  return;
}


