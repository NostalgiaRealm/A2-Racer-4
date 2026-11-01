
/* ==== FUN_0040f968 @ 0040f968 ==== 
 * signature: undefined __register FUN_0040f968(undefined4 * param_1, char * param_2)
 * body: 0040f968-0040fa20
 */

void FUN_0040f968(undefined4 *param_1,char *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_12c;
  code *pcStack_128;
  code *pcStack_124;
  byte local_114 [256];
  char *local_14;
  undefined **local_10;
  int local_c;
  char *local_8;
  
  pcStack_124 = (code *)&stack0xfffffffc;
  local_14 = (char *)0x0;
  pcStack_128 = thunk_FUN_004036bc;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_8 = param_2;
  for (local_10 = (undefined **)FUN_00402ee0(param_1); local_10 != &PTR_TPersistent_vmt_000_0040eb7c
      ; local_10 = (undefined **)FUN_00402f20((int)local_10)) {
    psVar1 = (short *)FUN_0040f820((int)local_10);
    if ((psVar1 != (short *)0x0) && (iVar3 = (int)*psVar1, -1 < iVar3 + -1)) {
      local_c = 0;
      do {
        FUN_00402ee4(**(int **)(psVar1 + local_c * 2 + 1),local_114);
        FUN_00403e80((int *)&local_14,local_114);
        uVar2 = FUN_0040830c(local_14,local_8);
        if ((char)uVar2 != '\0') goto LAB_0040fa0b;
        local_c = local_c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_0040f898((int)local_8);
LAB_0040fa0b:
  *in_FS_OFFSET = uStack_12c;
  pcStack_124 = FUN_0040fa28;
  pcStack_128 = (code *)0x40fa20;
  FUN_00403c5c((int *)&local_14);
  return;
}


