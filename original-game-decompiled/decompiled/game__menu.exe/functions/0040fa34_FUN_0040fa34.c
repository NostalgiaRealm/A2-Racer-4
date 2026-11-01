
/* ==== FUN_0040fa34 @ 0040fa34 ==== 
 * signature: undefined __register FUN_0040fa34(undefined * * param_1)
 * body: 0040fa34-0040fb04
 */

void FUN_0040fa34(undefined **param_1)

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
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  pcStack_128 = (code *)0x40fa5e;
  piVar1 = (int *)FUN_00410750(DAT_004ac624);
  pcStack_12c = thunk_FUN_004036bc;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  pcStack_128 = (code *)&stack0xfffffffc;
  while( true ) {
    iVar3 = FUN_0041030c((int)piVar1,(int)param_1);
    if (iVar3 != -1) break;
    FUN_00402ee4((int)param_1,local_108);
    FUN_00403e80(&local_8,local_108);
    iVar3 = FUN_0040f898(local_8);
    if (iVar3 != 0) {
      local_110 = local_8;
      local_10c = 0xb;
      uVar2 = FUN_0040b6d0((int)&DAT_0040e684,'\x01',(undefined4 *)PTR_PTR_004ab8c8,0,&local_110);
      FUN_004036f4(uVar2);
    }
    FUN_00410104(piVar1,(int)param_1);
    if (param_1 == &PTR_TPersistent_vmt_000_0040eb7c) break;
    param_1 = (undefined **)FUN_00402f20((int)param_1);
  }
  *in_FS_OFFSET = uStack_130;
  pcStack_128 = FUN_0040fb0c;
  pcStack_12c = (code *)0x40fb04;
  FUN_004107b4(DAT_004ac624);
  return;
}


