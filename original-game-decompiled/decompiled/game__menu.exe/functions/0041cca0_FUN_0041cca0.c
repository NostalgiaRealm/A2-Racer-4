
/* ==== FUN_0041cca0 @ 0041cca0 ==== 
 * signature: undefined __register FUN_0041cca0(int param_1)
 * body: 0041cca0-0041cd0f;0041cd17-0041cd1b
 */

void FUN_0041cca0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  if (param_1 != 0) {
    puStack_14 = (undefined1 *)0x41ccb9;
    puVar1 = (undefined4 *)FUN_00410750(DAT_004aa5e0);
    pcStack_18 = thunk_FUN_004036bc;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    iVar3 = puVar1[2] + -1;
    puStack_14 = &stack0xfffffffc;
    if (-1 < iVar3) {
      do {
        piVar2 = (int *)FUN_004102b0(puVar1,iVar3);
        if ((piVar2[0x16] != 0) && (*(int *)(*(int *)(piVar2[0x16] + 0x20) + 8) == param_1)) {
          FUN_0041cd84(piVar2);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x41cd17;
    pcStack_18 = (code *)0x41cd0f;
    FUN_004107b4(DAT_004aa5e0);
    return;
  }
  return;
}


