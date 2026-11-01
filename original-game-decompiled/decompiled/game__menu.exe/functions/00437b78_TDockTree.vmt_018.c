
/* ==== TDockTree.vmt_018 @ 00437b78 ==== 
 * signature: undefined TDockTree.vmt_018(void)
 * body: 00437b78-00437bb1
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDockTree_vmt_018(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00436bc8(param_1,param_2,param_3);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == *(int **)(param_1 + 0x38)) {
      piVar1[1] = 0;
    }
    else {
      FUN_00437bb4(param_1,piVar1);
    }
    *(undefined1 *)(param_2 + 0x8c) = 0;
    (**(code **)(**(int **)(param_1 + 0x14) + 0x74))();
  }
  return;
}


