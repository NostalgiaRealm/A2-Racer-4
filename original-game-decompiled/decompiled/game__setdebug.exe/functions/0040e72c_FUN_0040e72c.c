
/* ==== FUN_0040e72c @ 0040e72c ==== 
 * signature: undefined __register FUN_0040e72c(undefined4 * param_1, char * param_2)
 * body: 0040e72c-0040e7e4
 */

void FUN_0040e72c(undefined4 *param_1,char *param_2)

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
  pcStack_128 = thunk_FUN_00403434;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_8 = param_2;
  for (local_10 = (undefined **)FUN_00402c5c(param_1); local_10 != &PTR_TPersistent_vmt_000_0040dabc
      ; local_10 = (undefined **)FUN_00402c9c((int)local_10)) {
    psVar1 = (short *)FUN_0040e5e4((int)local_10);
    if ((psVar1 != (short *)0x0) && (iVar3 = (int)*psVar1, -1 < iVar3 + -1)) {
      local_c = 0;
      do {
        FUN_00402c60(**(int **)(psVar1 + local_c * 2 + 1),local_114);
        FUN_00403bdc((int *)&local_14,local_114);
        uVar2 = FUN_00407ad0(local_14,local_8);
        if ((char)uVar2 != '\0') goto LAB_0040e7cf;
        local_c = local_c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_0040e65c((int)local_8);
LAB_0040e7cf:
  *in_FS_OFFSET = uStack_12c;
  pcStack_124 = FUN_0040e7ec;
  pcStack_128 = (code *)0x40e7e4;
  FUN_004039b8((int *)&local_14);
  return;
}


