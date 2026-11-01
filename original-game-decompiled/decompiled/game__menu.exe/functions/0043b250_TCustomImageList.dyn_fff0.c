
/* ==== TCustomImageList.dyn_fff0 @ 0043b250 ==== 
 * signature: undefined __register TCustomImageList.dyn_fff0(int param_1)
 * body: 0043b250-0043b29c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomImageList_dyn_fff0(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (*(int *)(param_1 + 0x50) < 1) {
    if ((*(int *)(param_1 + 0x40) != 0) &&
       (iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 8), -1 < iVar3 + -1)) {
      iVar2 = 0;
      do {
        piVar1 = (int *)FUN_004102b0(*(undefined4 **)(param_1 + 0x40),iVar2);
        FUN_00403178(piVar1,extraout_EDX,extraout_ECX);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (*(short *)(param_1 + 0x5a) != 0) {
      (**(code **)(param_1 + 0x58))(*(undefined4 *)(param_1 + 0x5c),param_1);
    }
  }
  return;
}


