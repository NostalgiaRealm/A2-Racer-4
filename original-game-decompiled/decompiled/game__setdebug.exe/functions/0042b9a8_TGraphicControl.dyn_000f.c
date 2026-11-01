
/* ==== TGraphicControl.dyn_000f @ 0042b9a8 ==== 
 * signature: undefined __register TGraphicControl.dyn_000f(int * param_1, int param_2)
 * body: 0042b9a8-0042ba1f;0042ba4a-0042ba4d
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TGraphicControl_dyn_000f(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  if (*(int *)(param_2 + 4) != 0) {
    puStack_10 = (undefined1 *)0x42b9ca;
    FUN_00417174(param_1[0x48]);
    pcStack_14 = thunk_FUN_00403434;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    pcStack_1c = (code *)0x42b9e9;
    puStack_10 = &stack0xfffffffc;
    FUN_004174b0((int *)param_1[0x48],*(int *)(param_2 + 4));
    pcStack_20 = thunk_FUN_00403434;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    pcStack_1c = (code *)&stack0xfffffffc;
    (**(code **)(*param_1 + 0x84))();
    *in_FS_OFFSET = uStack_24;
    pcStack_1c = FUN_0042ba27;
    pcStack_20 = (code *)0x42ba1f;
    FUN_004174b0((int *)param_1[0x48],0);
    return;
  }
  return;
}


