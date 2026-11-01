
/* ==== FUN_00413218 @ 00413218 ==== 
 * signature: undefined __register FUN_00413218(int param_1)
 * body: 00413218-0041328e;00413296-0041329b
 */

void FUN_00413218(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  if (DAT_004ac630 != 0) {
    puStack_18 = (undefined1 *)0x413235;
    piVar1 = (int *)FUN_00410750(DAT_004ac630);
    pcStack_1c = thunk_FUN_004036bc;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    iVar3 = piVar1[2] + -1;
    puStack_18 = &stack0xfffffffc;
    if (-1 < iVar3) {
      do {
        piVar2 = (int *)FUN_004102b0(piVar1,iVar3);
        if (piVar2[1] == param_1) {
          FUN_00410150(piVar1,iVar3);
          FUN_00402f9c(piVar2);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x413296;
    pcStack_1c = (code *)0x41328e;
    FUN_004107b4(DAT_004ac630);
    return;
  }
  return;
}


