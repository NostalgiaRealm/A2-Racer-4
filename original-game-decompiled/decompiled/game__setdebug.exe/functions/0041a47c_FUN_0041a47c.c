
/* ==== FUN_0041a47c @ 0041a47c ==== 
 * signature: undefined __register FUN_0041a47c(int param_1)
 * body: 0041a47c-0041a4eb;0041a4f3-0041a4f7
 */

void FUN_0041a47c(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  if (param_1 != 0) {
    puStack_14 = (undefined1 *)0x41a495;
    puVar1 = (undefined4 *)FUN_0040f38c(DAT_004465bc);
    pcStack_18 = thunk_FUN_00403434;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    iVar3 = puVar1[2] + -1;
    puStack_14 = &stack0xfffffffc;
    if (-1 < iVar3) {
      do {
        piVar2 = (int *)FUN_0040f024(puVar1,iVar3);
        if ((piVar2[0x16] != 0) && (*(int *)(*(int *)(piVar2[0x16] + 0x20) + 8) == param_1)) {
          FUN_0041a560(piVar2);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x41a4f3;
    pcStack_18 = (code *)0x41a4eb;
    FUN_0040f3f0(DAT_004465bc);
    return;
  }
  return;
}


