
/* ==== FUN_0040cd9c @ 0040cd9c ==== 
 * signature: undefined FUN_0040cd9c(void)
 * body: 0040cd9c-0040cda3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cd9c(undefined4 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_f [15];
  byte bVar3;
  char *pcVar4;
  
  bVar3 = (byte)param_1;
  bVar2 = bVar3 % 0x74;
  pcVar4 = (char *)CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),
                                            CONCAT11(bVar3 / 0x74,bVar3)) >> 8),bVar2);
  *(char *)(unaff_EBP + -1) = *(char *)(unaff_EBP + -1) + bVar2;
  *pcVar4 = *pcVar4 + bVar2;
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_f;
  _DAT_00447608 = _DAT_00447608 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}


