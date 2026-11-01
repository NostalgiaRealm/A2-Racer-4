
/* ==== FUN_00464eb4 @ 00464eb4 ==== 
 * signature: undefined __register FUN_00464eb4(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 00464eb4-00464f21
 */

void FUN_00464eb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
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
      uVar3 = param_4;
      iVar2 = FUN_00464f34(param_1,iVar1);
      FUN_00464670(iVar2,param_2,param_3,uVar3);
      if (*(char *)(param_1 + 0x28) == '\0') break;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  *in_FS_OFFSET = uStack_20;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


