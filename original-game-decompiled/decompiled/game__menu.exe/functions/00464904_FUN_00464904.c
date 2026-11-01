
/* ==== FUN_00464904 @ 00464904 ==== 
 * signature: undefined FUN_00464904(void)
 * body: 00464904-0046496d
 */

void FUN_00464904(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = FUN_00464f48(param_1);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_00464f34(param_1,iVar1);
      FUN_0046456c(iVar2);
      if (*(char *)(param_1 + 0x28) == '\0') break;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  *in_FS_OFFSET = uStack_20;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


