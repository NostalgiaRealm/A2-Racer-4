
/* ==== FUN_00411664 @ 00411664 ==== 
 * signature: undefined __register FUN_00411664(int param_1)
 * body: 00411664-004116da;004116e2-004116e7
 */

void FUN_00411664(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  if (DAT_00447628 != 0) {
    puStack_18 = (undefined1 *)0x411681;
    piVar1 = (int *)FUN_0040f38c(DAT_00447628);
    pcStack_1c = thunk_FUN_00403434;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    iVar3 = piVar1[2] + -1;
    puStack_18 = &stack0xfffffffc;
    if (-1 < iVar3) {
      do {
        piVar2 = (int *)FUN_0040f024(piVar1,iVar3);
        if (piVar2[1] == param_1) {
          FUN_0040ef14(piVar1,iVar3);
          FUN_00402d14(piVar2);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x4116e2;
    pcStack_1c = (code *)0x4116da;
    FUN_0040f3f0(DAT_00447628);
    return;
  }
  return;
}


