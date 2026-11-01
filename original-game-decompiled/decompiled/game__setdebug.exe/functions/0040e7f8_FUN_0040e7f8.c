
/* ==== FUN_0040e7f8 @ 0040e7f8 ==== 
 * signature: undefined __register FUN_0040e7f8(undefined * * param_1)
 * body: 0040e7f8-0040e8c8
 */

void FUN_0040e7f8(undefined **param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  code *pcStack_12c;
  code *pcStack_128;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  int local_110;
  undefined1 local_10c;
  byte local_108 [256];
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  pcStack_120 = thunk_FUN_00403434;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  pcStack_128 = (code *)0x40e822;
  piVar1 = (int *)FUN_0040f38c(DAT_0044761c);
  pcStack_12c = thunk_FUN_00403434;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  pcStack_128 = (code *)&stack0xfffffffc;
  while( true ) {
    iVar3 = FUN_0040f080((int)piVar1,(int)param_1);
    if (iVar3 != -1) break;
    FUN_00402c60((int)param_1,local_108);
    FUN_00403bdc(&local_8,local_108);
    iVar3 = FUN_0040e65c(local_8);
    if (iVar3 != 0) {
      local_110 = local_8;
      local_10c = 0xb;
      uVar2 = FUN_0040aa30((int)&DAT_0040d5c4,'\x01',(undefined4 *)PTR_PTR_00446c90,0,&local_110);
      FUN_0040346c(uVar2);
    }
    FUN_0040eec8(piVar1,(int)param_1);
    if (param_1 == &PTR_TPersistent_vmt_000_0040dabc) break;
    param_1 = (undefined **)FUN_00402c9c((int)param_1);
  }
  *in_FS_OFFSET = uStack_130;
  pcStack_128 = FUN_0040e8d0;
  pcStack_12c = (code *)0x40e8c8;
  FUN_0040f3f0(DAT_0044761c);
  return;
}


