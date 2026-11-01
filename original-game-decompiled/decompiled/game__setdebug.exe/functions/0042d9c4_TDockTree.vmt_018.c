
/* ==== TDockTree.vmt_018 @ 0042d9c4 ==== 
 * signature: undefined TDockTree.vmt_018(void)
 * body: 0042d9c4-0042d9fd
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDockTree_vmt_018(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0042ca14(param_1,param_2,param_3);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == *(int **)(param_1 + 0x38)) {
      piVar1[1] = 0;
    }
    else {
      FUN_0042da00(param_1,piVar1);
    }
    *(undefined1 *)(param_2 + 0x8c) = 0;
    (**(code **)(**(int **)(param_1 + 0x14) + 0x74))();
  }
  return;
}


