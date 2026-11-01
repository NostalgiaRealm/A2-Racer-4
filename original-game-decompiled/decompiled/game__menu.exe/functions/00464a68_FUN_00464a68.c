
/* ==== FUN_00464a68 @ 00464a68 ==== 
 * signature: undefined FUN_00464a68(void)
 * body: 00464a68-00464acc
 */

void FUN_00464a68(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = FUN_00464f48(param_1);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_00464f34(param_1,iVar1);
      FUN_004645a8(iVar2);
      if (*(char *)(param_1 + 0x28) == '\0') break;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


