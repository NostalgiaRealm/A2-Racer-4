
/* ==== FUN_00415cc8 @ 00415cc8 ==== 
 * signature: undefined __register FUN_00415cc8(void)
 * body: 00415cc8-00415d64
 */

void FUN_00415cc8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  int local_8;
  
  local_8 = 0;
  pcStack_18 = (code *)0x415cdf;
  puVar1 = (undefined4 *)FUN_0040f38c(DAT_004476a0);
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_18 = (code *)&stack0xfffffffc;
  while (local_8 < (int)puVar1[2]) {
    iVar3 = FUN_0040f024(puVar1,local_8);
    FUN_00417174(iVar3);
    local_8 = local_8 + 1;
    FUN_00417450(iVar3);
  }
  FUN_00415c5c(DAT_00447698);
  FUN_00415c5c(DAT_0044769c);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00415d6c;
  if (-1 < local_8 + -1) {
    iVar3 = 0;
    do {
      pcStack_1c = (code *)0x415d51;
      iVar2 = FUN_0040f024(puVar1,iVar3);
      pcStack_1c = (code *)0x415d56;
      FUN_00417328(iVar2);
      iVar3 = iVar3 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  pcStack_1c = (code *)0x415d64;
  FUN_0040f3f0(DAT_004476a0);
  return;
}


